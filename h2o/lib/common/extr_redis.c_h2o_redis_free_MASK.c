
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; int _timeout_entry; } ;
typedef TYPE_1__ h2o_redis_client_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

void FUNC_3(h2o_redis_client_t *VAR_1)
{
    if (VAR_1->state != VAR_0)
        FUNC_0(VAR_1, ((void*)0));
    FUNC_2(&VAR_1->_timeout_entry);
    FUNC_1(VAR_1);
}
