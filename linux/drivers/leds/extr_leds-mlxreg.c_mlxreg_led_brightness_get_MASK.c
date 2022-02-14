
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxreg_led_data {int dummy; } ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 struct mlxreg_led_data* FUNC_0 (struct led_classdev*) ;
 int FUNC_1 (struct mlxreg_led_data*) ;

__attribute__((used)) static enum led_brightness
FUNC_2(struct led_classdev *VAR_0)
{
 struct mlxreg_led_data *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1);
}
