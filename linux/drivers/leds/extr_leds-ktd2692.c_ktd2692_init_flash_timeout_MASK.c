
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_flash_setting {int max; int step; int val; int min; } ;
struct led_classdev_flash {struct led_flash_setting timeout; } ;
struct ktd2692_led_config_data {int flash_max_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct led_classdev_flash *VAR_2,
           struct ktd2692_led_config_data *VAR_3)
{
 struct led_flash_setting *VAR_4;

 VAR_4 = &VAR_2->timeout;
 VAR_4->min = VAR_0;
 VAR_4->max = VAR_3->flash_max_timeout;
 VAR_4->step = VAR_3->flash_max_timeout
   / (VAR_1 - 1);
 VAR_4->val = VAR_3->flash_max_timeout;
}
