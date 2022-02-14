
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int timeout; int * loop; } ;
struct TYPE_5__ {TYPE_1__ _interval_cb; } ;
typedef TYPE_2__ h2o_socketpool_t ;
typedef int h2o_loop_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int *) ;
 int VAR_1 ;

void FUNC_2(h2o_socketpool_t *VAR_2, h2o_loop_t *VAR_3)
{
    if (VAR_2->_interval_cb.loop != ((void*)0))
        return;

    VAR_2->_interval_cb.loop = VAR_3;
    FUNC_0(&VAR_2->_interval_cb.timeout, VAR_1);
    FUNC_1(VAR_3, VAR_0, &VAR_2->_interval_cb.timeout);
}
