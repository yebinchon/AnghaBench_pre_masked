
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_flash_ops {scalar_t__ fault_get; scalar_t__ timeout_set; scalar_t__ flash_brightness_set; } ;
struct led_classdev {struct attribute_group const** groups; } ;
struct led_classdev_flash {struct attribute_group** sysfs_groups; struct led_flash_ops* ops; struct led_classdev led_cdev; } ;
struct attribute_group {int dummy; } ;


 struct attribute_group VAR_0 ;
 struct attribute_group VAR_1 ;
 struct attribute_group VAR_2 ;
 struct attribute_group VAR_3 ;

__attribute__((used)) static void FUNC_0(struct led_classdev_flash *VAR_4)
{
 struct led_classdev *VAR_5 = &VAR_4->led_cdev;
 const struct led_flash_ops *VAR_6 = VAR_4->ops;
 const struct attribute_group **VAR_7 = VAR_4->sysfs_groups;

 int VAR_8 = 0;

 VAR_7[VAR_8++] = &VAR_2;

 if (VAR_6->flash_brightness_set)
  VAR_7[VAR_8++] = &VAR_0;

 if (VAR_6->timeout_set)
  VAR_7[VAR_8++] = &VAR_3;

 if (VAR_6->fault_get)
  VAR_7[VAR_8++] = &VAR_1;

 VAR_5->groups = VAR_7;
}
