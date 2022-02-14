
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct led_classdev {int flags; int name; int brightness_set_blocking; int max_brightness; } ;
struct led_classdev_flash {int * ops; struct led_classdev led_cdev; } ;
struct ktd2692_led_config_data {int max_brightness; } ;
struct ktd2692_context {int lock; struct led_classdev_flash fled_cdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 struct ktd2692_context* FUNC_1 (int *,int,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct led_classdev_flash*,struct ktd2692_led_config_data*) ;
 int FUNC_3 (struct ktd2692_led_config_data*) ;
 int VAR_5 ;
 int FUNC_4 (struct ktd2692_context*,int *,struct ktd2692_led_config_data*) ;
 int FUNC_5 (struct ktd2692_context*) ;
 int FUNC_6 (int *,struct led_classdev_flash*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct platform_device*,struct ktd2692_context*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_6)
{
 struct ktd2692_context *VAR_7;
 struct led_classdev *VAR_8;
 struct led_classdev_flash *VAR_9;
 struct ktd2692_led_config_data VAR_10;
 int VAR_11;

 VAR_7 = FUNC_1(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_9 = &VAR_7->fled_cdev;
 VAR_8 = &VAR_9->led_cdev;

 VAR_11 = FUNC_4(VAR_7, &VAR_6->dev, &VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_2(VAR_9, &VAR_10);
 FUNC_3(&VAR_10);

 VAR_9->ops = &VAR_4;

 VAR_8->max_brightness = VAR_10.max_brightness;
 VAR_8->brightness_set_blocking = VAR_5;
 VAR_8->flags |= VAR_2 | VAR_3;

 FUNC_8(&VAR_7->lock);

 FUNC_9(VAR_6, VAR_7);

 VAR_11 = FUNC_6(&VAR_6->dev, VAR_9);
 if (VAR_11) {
  FUNC_0(&VAR_6->dev, "can't register LED %s\n", VAR_8->name);
  FUNC_7(&VAR_7->lock);
  return VAR_11;
 }

 FUNC_5(VAR_7);

 return 0;
}
