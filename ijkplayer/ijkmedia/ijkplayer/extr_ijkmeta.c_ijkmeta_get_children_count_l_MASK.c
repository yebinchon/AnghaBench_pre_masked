
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t children_count; int children; } ;
typedef TYPE_1__ IjkMediaMeta ;



size_t FUNC_0(IjkMediaMeta *VAR_0)
{
    if (!VAR_0 || !VAR_0->children)
        return 0;

    return VAR_0->children_count;
}
