
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct led_flash_setting {int val; } ;
struct led_classdev_flash {struct led_flash_setting brightness; } ;


 int FUNC_0 (struct led_classdev_flash*,int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct led_classdev_flash*,int ) ;

int FUNC_2(struct led_classdev_flash *VAR_1)
{
 struct led_flash_setting *VAR_2 = &VAR_1->brightness;
 u32 VAR_3;

 if (FUNC_1(VAR_1, VAR_0)) {
  int VAR_4 = FUNC_0(VAR_1, VAR_0,
      &VAR_3);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_2->val = VAR_3;
 }

 return 0;
}
