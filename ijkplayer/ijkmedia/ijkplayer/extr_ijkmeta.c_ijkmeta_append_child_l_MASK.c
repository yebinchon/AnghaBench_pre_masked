
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t children_count; size_t children_capacity; struct TYPE_7__** children; } ;
typedef TYPE_1__ IjkMediaMeta ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (TYPE_1__**,TYPE_1__**,int) ;

void FUNC_3(IjkMediaMeta *VAR_1, IjkMediaMeta *VAR_2)
{
    if (!VAR_1 || !VAR_2)
        return;

    if (!VAR_1->children) {
        VAR_1->children = (IjkMediaMeta **)FUNC_0(VAR_0, sizeof(IjkMediaMeta *));
        if (!VAR_1->children)
            return;
        VAR_1->children_count = 0;
        VAR_1->children_capacity = VAR_0;
    } else if (VAR_1->children_count >= VAR_1->children_capacity) {
        size_t VAR_3 = VAR_1->children_capacity * 2;
        IjkMediaMeta **VAR_4 = (IjkMediaMeta **)FUNC_0(VAR_3, sizeof(IjkMediaMeta *));
        if (!VAR_4)
            return;

        FUNC_2(VAR_4, VAR_1->children, VAR_1->children_capacity * sizeof(IjkMediaMeta *));
        FUNC_1(VAR_1->children);
        VAR_1->children = VAR_4;
        VAR_1->children_capacity = VAR_3;
    }

    VAR_1->children[VAR_1->children_count] = VAR_2;
    VAR_1->children_count++;
}
