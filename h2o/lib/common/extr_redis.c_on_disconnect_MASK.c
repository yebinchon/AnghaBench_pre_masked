
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_1__ redisAsyncContext ;
typedef int h2o_redis_client_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__ const*) ;

__attribute__((used)) static void FUNC_2(const redisAsyncContext *VAR_0, int VAR_1)
{
    h2o_redis_client_t *VAR_2 = (h2o_redis_client_t *)VAR_0->data;
    if (VAR_2 == ((void*)0))
        return;

    FUNC_0(VAR_2, FUNC_1(VAR_0));
}
