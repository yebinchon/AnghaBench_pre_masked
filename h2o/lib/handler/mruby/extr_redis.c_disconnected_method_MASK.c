
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; } ;
struct st_h2o_mruby_redis_client_t {TYPE_1__ super; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 struct st_h2o_mruby_redis_client_t* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static mrb_value FUNC_2(mrb_state *VAR_1, mrb_value VAR_2)
{
    struct st_h2o_mruby_redis_client_t *VAR_3 = FUNC_0(VAR_2);
    return FUNC_1(VAR_3->super.state == VAR_0);
}
