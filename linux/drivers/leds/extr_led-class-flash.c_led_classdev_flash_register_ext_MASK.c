
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_init_data {int dummy; } ;
struct led_flash_ops {int strobe_set; } ;
struct led_classdev {int flags; int flash_resume; int brightness_set_blocking; } ;
struct led_classdev_flash {struct led_flash_ops* ops; struct led_classdev led_cdev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct led_classdev*,struct led_init_data*) ;
 int FUNC_1 (struct led_classdev_flash*) ;
 int VAR_2 ;

int FUNC_2(struct device *VAR_3,
        struct led_classdev_flash *VAR_4,
        struct led_init_data *VAR_5)
{
 struct led_classdev *VAR_6;
 const struct led_flash_ops *VAR_7;
 int VAR_8;

 if (!VAR_4)
  return -VAR_0;

 VAR_6 = &VAR_4->led_cdev;

 if (VAR_6->flags & VAR_1) {
  if (!VAR_6->brightness_set_blocking)
   return -VAR_0;

  VAR_7 = VAR_4->ops;
  if (!VAR_7 || !VAR_7->strobe_set)
   return -VAR_0;

  VAR_6->flash_resume = VAR_2;


  FUNC_1(VAR_4);
 }


 VAR_8 = FUNC_0(VAR_3, VAR_6, VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 return 0;
}
