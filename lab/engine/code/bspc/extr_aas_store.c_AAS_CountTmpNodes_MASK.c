
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__** children; } ;
typedef TYPE_1__ tmp_node_t ;



int FUNC_0(tmp_node_t *VAR_0)
{
 if (!VAR_0) return 0;
 return FUNC_0(VAR_0->children[0]) +
    FUNC_0(VAR_0->children[1]) + 1;
}
