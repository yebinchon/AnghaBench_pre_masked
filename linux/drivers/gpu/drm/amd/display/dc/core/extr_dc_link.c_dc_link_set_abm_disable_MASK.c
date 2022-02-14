
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dc_link {TYPE_1__* ctx; } ;
struct dc {TYPE_2__* res_pool; } ;
struct abm {TYPE_3__* funcs; } ;
struct TYPE_6__ {int (* set_abm_immediate_disable ) (struct abm*) ;int * set_backlight_level_pwm; } ;
struct TYPE_5__ {struct abm* abm; } ;
struct TYPE_4__ {struct dc* dc; } ;


 int FUNC_0 (struct abm*) ;

bool FUNC_1(const struct dc_link *VAR_0)
{
 struct dc *VAR_1 = VAR_0->ctx->dc;
 struct abm *VAR_2 = VAR_1->res_pool->abm;

 if ((VAR_2 == ((void*)0)) || (VAR_2->funcs->set_backlight_level_pwm == ((void*)0)))
  return 0;

 VAR_2->funcs->set_abm_immediate_disable(VAR_2);

 return 1;
}
