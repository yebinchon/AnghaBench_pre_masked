
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void const* elem; int state; struct TYPE_5__** child; } ;
typedef TYPE_1__ IjkAVTreeNode ;


 int FUNC_0 (TYPE_1__*,void*,int (*) (void const*,void const*),void**) ;

void *FUNC_1(IjkAVTreeNode **VAR_0, void *VAR_1,
                     int (*VAR_2)(const void *VAR_3, const void *VAR_4), IjkAVTreeNode **VAR_5)
{
    IjkAVTreeNode *VAR_6 = *VAR_0;
    if (VAR_6) {
        unsigned int VAR_7 = VAR_2(VAR_6->elem, VAR_1);
        void *VAR_8;
        if (!VAR_7) {
            if (*VAR_5)
                return VAR_6->elem;
            else if (VAR_6->child[0] || VAR_6->child[1]) {
                int VAR_9 = !VAR_6->child[0];
                void *VAR_10[2];
                FUNC_0(VAR_6->child[VAR_9], VAR_1, VAR_2, VAR_10);
                VAR_1 = VAR_6->elem = VAR_10[VAR_9];
                VAR_7 = -VAR_9;
            } else {
                *VAR_5 = VAR_6;
                *VAR_0 = ((void*)0);
                return ((void*)0);
            }
        }
        VAR_8 = FUNC_1(&VAR_6->child[VAR_7 >> 31], VAR_1, VAR_2, VAR_5);
        if (!VAR_8) {
            int VAR_11 = (VAR_7 >> 31) ^ !!*VAR_5;
            IjkAVTreeNode **VAR_12 = &VAR_6->child[VAR_11];
            VAR_6->state += 2 * VAR_11 - 1;

            if (!(VAR_6->state & 1)) {
                if (VAR_6->state) {
                    if ((*VAR_12)->state * 2 == -VAR_6->state) {
                        *VAR_0 = (*VAR_12)->child[VAR_11 ^ 1];
                        (*VAR_12)->child[VAR_11 ^ 1] = (*VAR_0)->child[VAR_11];
                        (*VAR_0)->child[VAR_11] = *VAR_12;
                        *VAR_12 = (*VAR_0)->child[VAR_11 ^ 1];
                        (*VAR_0)->child[VAR_11 ^ 1] = VAR_6;

                        (*VAR_0)->child[0]->state = -((*VAR_0)->state > 0);
                        (*VAR_0)->child[1]->state = (*VAR_0)->state < 0;
                        (*VAR_0)->state = 0;
                    } else {
                        *VAR_0 = *VAR_12;
                        *VAR_12 = (*VAR_12)->child[VAR_11 ^ 1];
                        (*VAR_0)->child[VAR_11 ^ 1] = VAR_6;
                        if ((*VAR_0)->state)
                            VAR_6->state = 0;
                        else
                            VAR_6->state >>= 1;
                        (*VAR_0)->state = -VAR_6->state;
                    }
                }
            }
            if (!(*VAR_0)->state ^ !!*VAR_5)
                return VAR_1;
        }
        return VAR_8;
    } else {
        *VAR_0 = *VAR_5;
        *VAR_5 = ((void*)0);
        if (*VAR_0) {
            (*VAR_0)->elem = VAR_1;
            return ((void*)0);
        } else
            return VAR_1;
    }
}
