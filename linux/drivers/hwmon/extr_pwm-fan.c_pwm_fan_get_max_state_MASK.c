
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device {struct pwm_fan_ctx* devdata; } ;
struct pwm_fan_ctx {unsigned long pwm_fan_max_state; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct thermal_cooling_device *VAR_1,
     unsigned long *VAR_2)
{
 struct pwm_fan_ctx *VAR_3 = VAR_1->devdata;

 if (!VAR_3)
  return -VAR_0;

 *VAR_2 = VAR_3->pwm_fan_max_state;

 return 0;
}
