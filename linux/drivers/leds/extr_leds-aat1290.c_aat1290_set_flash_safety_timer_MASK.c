
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_flash_setting {unsigned int step; } ;
struct led_classdev_flash {struct led_flash_setting timeout; } ;
struct aat1290_led {struct led_classdev_flash fled_cdev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct aat1290_led*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct aat1290_led *VAR_2,
     unsigned int VAR_3)
{
 struct led_classdev_flash *VAR_4 = &VAR_2->fled_cdev;
 struct led_flash_setting *VAR_5 = &VAR_4->timeout;
 int VAR_6 = VAR_1 -
    (VAR_3 / VAR_5->step) + 1;

 FUNC_0(VAR_2, VAR_0,
       VAR_6);
}
