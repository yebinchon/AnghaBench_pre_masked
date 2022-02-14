
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_flash_setting {scalar_t__ max; scalar_t__ val; int step; int min; } ;
struct led_classdev_flash {struct led_flash_setting timeout; struct led_flash_setting brightness; } ;
struct max77693_sub_led {int fled_id; struct led_classdev_flash fled_cdev; } ;
struct max77693_led_device {scalar_t__ iout_joint; } ;
struct max77693_led_config_data {scalar_t__* flash_timeout_max; scalar_t__* iout_flash_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 struct max77693_led_device* FUNC_0 (struct max77693_sub_led*) ;

__attribute__((used)) static void FUNC_1(struct max77693_sub_led *VAR_6,
     struct max77693_led_config_data *VAR_7)
{
 struct led_classdev_flash *VAR_8 = &VAR_6->fled_cdev;
 struct max77693_led_device *VAR_9 = FUNC_0(VAR_6);
 int VAR_10 = VAR_6->fled_id;
 struct led_flash_setting *VAR_11;


 VAR_11 = &VAR_8->brightness;
 VAR_11->min = VAR_0;
 VAR_11->max = VAR_9->iout_joint ?
  VAR_7->iout_flash_max[VAR_4] +
  VAR_7->iout_flash_max[VAR_5] :
  VAR_7->iout_flash_max[VAR_10];
 VAR_11->step = VAR_1;
 VAR_11->val = VAR_11->max;


 VAR_11 = &VAR_8->timeout;
 VAR_11->min = VAR_2;
 VAR_11->max = VAR_7->flash_timeout_max[VAR_10];
 VAR_11->step = VAR_3;
 VAR_11->val = VAR_11->max;
}
