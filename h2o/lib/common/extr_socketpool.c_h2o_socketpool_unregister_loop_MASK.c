
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * loop; int timeout; } ;
struct TYPE_5__ {TYPE_1__ _interval_cb; } ;
typedef TYPE_2__ h2o_socketpool_t ;
typedef int h2o_loop_t ;


 int FUNC_0 (int *) ;

void FUNC_1(h2o_socketpool_t *VAR_0, h2o_loop_t *VAR_1)
{
    if (VAR_0->_interval_cb.loop != VAR_1)
        return;
    FUNC_0(&VAR_0->_interval_cb.timeout);
    VAR_0->_interval_cb.loop = ((void*)0);
}
