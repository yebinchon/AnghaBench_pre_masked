
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_fan_ctx {int pwm_fan_max_state; unsigned long* pwm_fan_cooling_levels; int pwm_fan_state; } ;



__attribute__((used)) static void FUNC_0(struct pwm_fan_ctx *VAR_0, unsigned long VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->pwm_fan_max_state; ++VAR_2)
  if (VAR_1 < VAR_0->pwm_fan_cooling_levels[VAR_2 + 1])
   break;

 VAR_0->pwm_fan_state = VAR_2;
}
