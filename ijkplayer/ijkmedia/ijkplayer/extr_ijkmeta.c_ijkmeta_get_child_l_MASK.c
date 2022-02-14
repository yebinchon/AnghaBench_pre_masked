
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t children_count; struct TYPE_4__** children; } ;
typedef TYPE_1__ IjkMediaMeta ;



IjkMediaMeta *FUNC_0(IjkMediaMeta *VAR_0, size_t VAR_1)
{
    if (!VAR_0)
        return ((void*)0);

    if (VAR_1 >= VAR_0->children_count)
        return ((void*)0);

    return VAR_0->children[VAR_1];
}
