
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int redis; } ;
struct st_h2o_mruby_redis_client_t {int super; TYPE_1__ refs; } ;
typedef int mrb_state ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(mrb_state *VAR_0, void *VAR_1)
{
    struct st_h2o_mruby_redis_client_t *VAR_2 = VAR_1;

    VAR_2->refs.redis = FUNC_1();
    FUNC_0(&VAR_2->super);
}
