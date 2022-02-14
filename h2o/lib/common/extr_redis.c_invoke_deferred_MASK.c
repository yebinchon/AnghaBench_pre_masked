
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int cb; } ;
typedef TYPE_1__ h2o_timer_t ;
typedef int h2o_timer_cb ;
struct TYPE_7__ {int loop; } ;
typedef TYPE_2__ h2o_redis_client_t ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(h2o_redis_client_t *VAR_0, uint64_t VAR_1, h2o_timer_t *VAR_2, h2o_timer_cb VAR_3)
{
    VAR_2->cb = VAR_3;
    FUNC_0(VAR_0->loop, VAR_1, VAR_2);
}
