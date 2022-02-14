
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pwm_fan_ctx {scalar_t__* pwm_fan_cooling_levels; int pwm_fan_max_state; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct device*,char*,...) ;
 scalar_t__* FUNC_1 (struct device*,int,int,int ) ;
 int FUNC_2 (struct device_node*,char*,int *) ;
 int FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*,char*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_4,
           struct pwm_fan_ctx *VAR_5)
{
 struct device_node *VAR_6 = VAR_4->of_node;
 int VAR_7, VAR_8, VAR_9;

 if (!FUNC_2(VAR_6, "cooling-levels", ((void*)0)))
  return 0;

 VAR_9 = FUNC_3(VAR_6, "cooling-levels");
 if (VAR_9 <= 0) {
  FUNC_0(VAR_4, "Wrong data!\n");
  return VAR_9 ? : -VAR_0;
 }

 VAR_7 = VAR_9;
 VAR_5->pwm_fan_cooling_levels = FUNC_1(VAR_4, VAR_7, sizeof(u32),
         VAR_2);
 if (!VAR_5->pwm_fan_cooling_levels)
  return -VAR_1;

 VAR_9 = FUNC_4(VAR_6, "cooling-levels",
      VAR_5->pwm_fan_cooling_levels, VAR_7);
 if (VAR_9) {
  FUNC_0(VAR_4, "Property 'cooling-levels' cannot be read!\n");
  return VAR_9;
 }

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if (VAR_5->pwm_fan_cooling_levels[VAR_8] > VAR_3) {
   FUNC_0(VAR_4, "PWM fan state[%d]:%d > %d\n", VAR_8,
    VAR_5->pwm_fan_cooling_levels[VAR_8], VAR_3);
   return -VAR_0;
  }
 }

 VAR_5->pwm_fan_max_state = VAR_7 - 1;

 return 0;
}
