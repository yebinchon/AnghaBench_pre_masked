
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_9__ {struct TYPE_9__* _parent; int _all_refs; } ;
struct TYPE_8__ {int weight; TYPE_2__ node; } ;
typedef TYPE_1__ h2o_http2_scheduler_openref_t ;
typedef TYPE_2__ h2o_http2_scheduler_node_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

void FUNC_4(h2o_http2_scheduler_openref_t *VAR_0, h2o_http2_scheduler_node_t *VAR_1, uint16_t VAR_2,
                                int VAR_3)
{
    FUNC_0(FUNC_2(VAR_0));
    FUNC_0(&VAR_0->node != VAR_1);
    FUNC_0(1 <= VAR_2);
    FUNC_0(VAR_2 <= 257);


    if (VAR_0->node._parent == VAR_1 && VAR_0->weight == VAR_2 && !VAR_3)
        return;

    VAR_0->weight = VAR_2;



    if (!FUNC_3(&VAR_0->node._all_refs)) {
        h2o_http2_scheduler_node_t *VAR_4;
        for (VAR_4 = VAR_1; VAR_4->_parent != ((void*)0); VAR_4 = VAR_4->_parent) {
            if (VAR_4->_parent == &VAR_0->node) {

                h2o_http2_scheduler_openref_t *VAR_5 = (void *)VAR_1;
                FUNC_1(VAR_5, VAR_0->node._parent, 0);
                break;
            }
        }
    }

    FUNC_1(VAR_0, VAR_1, VAR_3);
}
