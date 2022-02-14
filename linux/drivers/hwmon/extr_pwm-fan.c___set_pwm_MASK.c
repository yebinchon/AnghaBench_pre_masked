
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pwm_state {int enabled; int duty_cycle; } ;
struct pwm_fan_ctx {unsigned long pwm_value; int lock; TYPE_2__* pwm; } ;
struct TYPE_4__ {unsigned long period; } ;
struct TYPE_5__ {TYPE_1__ args; } ;


 int FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,struct pwm_state*) ;
 int FUNC_4 (TYPE_2__*,struct pwm_state*) ;

__attribute__((used)) static int FUNC_5(struct pwm_fan_ctx *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;
 int VAR_4 = 0;
 struct pwm_state VAR_5 = { };

 FUNC_1(&VAR_1->lock);
 if (VAR_1->pwm_value == VAR_2)
  goto exit_set_pwm_err;

 FUNC_4(VAR_1->pwm, &VAR_5);
 VAR_3 = VAR_1->pwm->args.period;
 VAR_5.duty_cycle = FUNC_0(VAR_2 * (VAR_3 - 1), VAR_0);
 VAR_5.enabled = VAR_2 ? 1 : 0;

 VAR_4 = FUNC_3(VAR_1->pwm, &VAR_5);
 if (!VAR_4)
  VAR_1->pwm_value = VAR_2;
exit_set_pwm_err:
 FUNC_2(&VAR_1->lock);
 return VAR_4;
}
