
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int node; scalar_t__ _self_is_active; } ;
typedef TYPE_1__ h2o_http2_scheduler_openref_t ;


 int FUNC_0 (int *) ;

void FUNC_1(h2o_http2_scheduler_openref_t *VAR_0)
{
    if (!VAR_0->_self_is_active)
        return;
    VAR_0->_self_is_active = 0;
    FUNC_0(&VAR_0->node);
}
