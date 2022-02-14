
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxreg_led_data {int base_color; } ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 struct mlxreg_led_data* FUNC_0 (struct led_classdev*) ;
 int FUNC_1 (struct mlxreg_led_data*,int ) ;

__attribute__((used)) static int
FUNC_2(struct led_classdev *VAR_1, enum led_brightness VAR_2)
{
 struct mlxreg_led_data *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2)
  return FUNC_1(VAR_3, VAR_3->base_color);
 else
  return FUNC_1(VAR_3, VAR_0);
}
