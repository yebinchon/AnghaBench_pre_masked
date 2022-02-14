
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device {int device; struct pwm_fan_ctx* devdata; } ;
struct pwm_fan_ctx {unsigned long pwm_fan_max_state; unsigned long pwm_fan_state; int * pwm_fan_cooling_levels; } ;


 int VAR_0 ;
 int FUNC_0 (struct pwm_fan_ctx*,int ) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int
FUNC_2(struct thermal_cooling_device *VAR_1, unsigned long VAR_2)
{
 struct pwm_fan_ctx *VAR_3 = VAR_1->devdata;
 int VAR_4;

 if (!VAR_3 || (VAR_2 > VAR_3->pwm_fan_max_state))
  return -VAR_0;

 if (VAR_2 == VAR_3->pwm_fan_state)
  return 0;

 VAR_4 = FUNC_0(VAR_3, VAR_3->pwm_fan_cooling_levels[VAR_2]);
 if (VAR_4) {
  FUNC_1(&VAR_1->device, "Cannot set pwm!\n");
  return VAR_4;
 }

 VAR_3->pwm_fan_state = VAR_2;

 return VAR_4;
}
