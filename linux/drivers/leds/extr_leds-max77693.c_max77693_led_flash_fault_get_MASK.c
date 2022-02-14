
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct max77693_sub_led {int flash_faults; } ;
struct led_classdev_flash {int dummy; } ;


 struct max77693_sub_led* FUNC_0 (struct led_classdev_flash*) ;

__attribute__((used)) static int FUNC_1(
    struct led_classdev_flash *VAR_0,
    u32 *VAR_1)
{
 struct max77693_sub_led *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2->flash_faults;

 return 0;
}
