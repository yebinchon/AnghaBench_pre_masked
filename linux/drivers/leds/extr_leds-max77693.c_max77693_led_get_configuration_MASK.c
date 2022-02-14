
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77693_led_device {int iout_flash_max; int iout_torch_max; } ;
struct max77693_led_config_data {int iout_flash_max; int iout_torch_max; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct max77693_led_device*,struct max77693_led_config_data*,struct device_node**) ;
 int FUNC_1 (struct max77693_led_device*,struct max77693_led_config_data*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct max77693_led_device *VAR_0,
    struct max77693_led_config_data *VAR_1,
    struct device_node **VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_1(VAR_0, VAR_1);

 FUNC_2(VAR_0->iout_torch_max, VAR_1->iout_torch_max,
    sizeof(VAR_0->iout_torch_max));
 FUNC_2(VAR_0->iout_flash_max, VAR_1->iout_flash_max,
    sizeof(VAR_0->iout_flash_max));

 return 0;
}
