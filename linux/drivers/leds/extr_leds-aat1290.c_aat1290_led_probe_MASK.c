
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_flash_config {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct led_init_data {int devicename; int fwnode; } ;
struct led_classdev {int flags; int max_brightness; int brightness_set_blocking; } ;
struct led_classdev_flash {struct led_classdev led_cdev; int * ops; } ;
struct device_node {int dummy; } ;
struct aat1290_led_config_data {int max_brightness; } ;
struct aat1290_led {int lock; int v4l2_flash; struct led_classdev_flash fled_cdev; struct platform_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct aat1290_led*,struct aat1290_led_config_data*) ;
 int FUNC_3 (struct aat1290_led*,struct aat1290_led_config_data*,struct v4l2_flash_config*) ;
 int VAR_4 ;
 int FUNC_4 (struct aat1290_led*,struct aat1290_led_config_data*,struct device_node**) ;
 struct aat1290_led* FUNC_5 (struct device*,int,int ) ;
 int VAR_5 ;
 int FUNC_6 (struct device*,struct led_classdev_flash*,struct led_init_data*) ;
 int FUNC_7 (struct led_classdev_flash*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct device_node*) ;
 int FUNC_11 (struct platform_device*,struct aat1290_led*) ;
 int FUNC_12 (struct device*,int ,struct led_classdev_flash*,int *,struct v4l2_flash_config*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct device_node *VAR_9 = ((void*)0);
 struct aat1290_led *VAR_10;
 struct led_classdev *VAR_11;
 struct led_classdev_flash *VAR_12;
 struct led_init_data VAR_13 = {};
 struct aat1290_led_config_data VAR_14 = {};
 struct v4l2_flash_config VAR_15 = {};
 int VAR_16;

 VAR_10 = FUNC_5(VAR_8, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->pdev = VAR_7;
 FUNC_11(VAR_7, VAR_10);

 VAR_12 = &VAR_10->fled_cdev;
 VAR_12->ops = &VAR_5;
 VAR_11 = &VAR_12->led_cdev;

 VAR_16 = FUNC_4(VAR_10, &VAR_14, &VAR_9);
 if (VAR_16 < 0)
  return VAR_16;

 FUNC_9(&VAR_10->lock);


 VAR_11->brightness_set_blocking = VAR_4;
 VAR_11->max_brightness = VAR_14.max_brightness;
 VAR_11->flags |= VAR_3;

 FUNC_2(VAR_10, &VAR_14);

 VAR_13.fwnode = FUNC_10(VAR_9);
 VAR_13.devicename = VAR_0;


 VAR_16 = FUNC_6(&VAR_7->dev, VAR_12,
           &VAR_13);
 if (VAR_16 < 0)
  goto err_flash_register;

 FUNC_3(VAR_10, &VAR_14, &VAR_15);


 VAR_10->v4l2_flash = FUNC_12(VAR_8, FUNC_10(VAR_9),
       VAR_12, &VAR_6,
       &VAR_15);
 if (FUNC_0(VAR_10->v4l2_flash)) {
  VAR_16 = FUNC_1(VAR_10->v4l2_flash);
  goto error_v4l2_flash_init;
 }

 return 0;

error_v4l2_flash_init:
 FUNC_7(VAR_12);
err_flash_register:
 FUNC_8(&VAR_10->lock);

 return VAR_16;
}
