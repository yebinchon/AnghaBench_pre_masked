
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_flash_setting {int min; int max; int step; int val; } ;
struct led_classdev_flash {struct led_flash_setting timeout; } ;
struct aat1290_led_config_data {int max_flash_tm; } ;
struct aat1290_led {struct led_classdev_flash fled_cdev; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct aat1290_led *VAR_1,
    struct aat1290_led_config_data *VAR_2)
{
 struct led_classdev_flash *VAR_3 = &VAR_1->fled_cdev;
 struct led_flash_setting *VAR_4;


 VAR_4 = &VAR_3->timeout;
 VAR_4->min = VAR_2->max_flash_tm / VAR_0;
 VAR_4->max = VAR_2->max_flash_tm;
 VAR_4->step = VAR_4->min;
 VAR_4->val = VAR_4->max;
}
