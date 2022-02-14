
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct max77693_sub_led {int flash_timeout; } ;
struct max77693_led_device {int lock; } ;
struct led_classdev_flash {int dummy; } ;


 struct max77693_sub_led* FUNC_0 (struct led_classdev_flash*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct max77693_led_device* FUNC_3 (struct max77693_sub_led*) ;

__attribute__((used)) static int FUNC_4(
    struct led_classdev_flash *VAR_0,
    u32 VAR_1)
{
 struct max77693_sub_led *VAR_2 = FUNC_0(VAR_0);
 struct max77693_led_device *VAR_3 = FUNC_3(VAR_2);

 FUNC_1(&VAR_3->lock);
 VAR_2->flash_timeout = VAR_1;
 FUNC_2(&VAR_3->lock);

 return 0;
}
