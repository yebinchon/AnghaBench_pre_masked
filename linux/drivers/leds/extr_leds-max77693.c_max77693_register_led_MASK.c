
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_flash_config {int dummy; } ;
struct led_classdev_flash {int dummy; } ;
struct max77693_sub_led {int v4l2_flash; struct led_classdev_flash fled_cdev; } ;
struct max77693_led_device {TYPE_1__* pdev; } ;
struct max77693_led_config_data {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,struct led_classdev_flash*) ;
 int FUNC_3 (struct led_classdev_flash*) ;
 int FUNC_4 (struct max77693_sub_led*,struct max77693_led_config_data*,struct v4l2_flash_config*) ;
 int FUNC_5 (struct device_node*) ;
 struct max77693_led_device* FUNC_6 (struct max77693_sub_led*) ;
 int FUNC_7 (struct device*,int ,struct led_classdev_flash*,int *,struct v4l2_flash_config*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_8(struct max77693_sub_led *VAR_1,
     struct max77693_led_config_data *VAR_2,
     struct device_node *VAR_3)
{
 struct max77693_led_device *VAR_4 = FUNC_6(VAR_1);
 struct led_classdev_flash *VAR_5 = &VAR_1->fled_cdev;
 struct device *VAR_6 = &VAR_4->pdev->dev;
 struct v4l2_flash_config VAR_7 = {};
 int VAR_8;


 VAR_8 = FUNC_2(VAR_6, VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_4(VAR_1, VAR_2, &VAR_7);


 VAR_1->v4l2_flash = FUNC_7(VAR_6, FUNC_5(VAR_3),
           VAR_5, &VAR_0,
           &VAR_7);
 if (FUNC_0(VAR_1->v4l2_flash)) {
  VAR_8 = FUNC_1(VAR_1->v4l2_flash);
  goto err_v4l2_flash_init;
 }

 return 0;

err_v4l2_flash_init:
 FUNC_3(VAR_5);
 return VAR_8;
}
