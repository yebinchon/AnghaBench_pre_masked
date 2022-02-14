
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct led_flash_setting {int val; } ;
struct led_classdev {int flags; } ;
struct led_classdev_flash {struct led_flash_setting timeout; struct led_classdev led_cdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct led_classdev_flash*,int ,int ) ;
 int FUNC_1 (struct led_flash_setting*) ;
 int VAR_1 ;

int FUNC_2(struct led_classdev_flash *VAR_2, u32 VAR_3)
{
 struct led_classdev *VAR_4 = &VAR_2->led_cdev;
 struct led_flash_setting *VAR_5 = &VAR_2->timeout;

 VAR_5->val = VAR_3;
 FUNC_1(VAR_5);

 if (!(VAR_4->flags & VAR_0))
  return FUNC_0(VAR_2, VAR_1, VAR_5->val);

 return 0;
}
