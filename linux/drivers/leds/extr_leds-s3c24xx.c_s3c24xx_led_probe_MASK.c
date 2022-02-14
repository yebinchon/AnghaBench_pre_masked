
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c24xx_led_platdata {int flags; int gpio; int name; int def_trigger; } ;
struct TYPE_2__ {int flags; int name; int default_trigger; int brightness_set; } ;
struct s3c24xx_gpio_led {TYPE_1__ cdev; struct s3c24xx_led_platdata* pdata; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 struct s3c24xx_led_platdata* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char*) ;
 struct s3c24xx_gpio_led* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int VAR_6 ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_7)
{
 struct s3c24xx_led_platdata *VAR_8 = FUNC_1(&VAR_7->dev);
 struct s3c24xx_gpio_led *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(&VAR_7->dev, sizeof(struct s3c24xx_gpio_led),
      VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->cdev.brightness_set = VAR_6;
 VAR_9->cdev.default_trigger = VAR_8->def_trigger;
 VAR_9->cdev.name = VAR_8->name;
 VAR_9->cdev.flags |= VAR_2;

 VAR_9->pdata = VAR_8;

 VAR_10 = FUNC_2(&VAR_7->dev, VAR_8->gpio, "S3C24XX_LED");
 if (VAR_10 < 0)
  return VAR_10;



 FUNC_7(VAR_8->gpio, VAR_5);

 if (VAR_8->flags & VAR_4)
  FUNC_5(VAR_8->gpio);
 else
  FUNC_6(VAR_8->gpio,
   VAR_8->flags & VAR_3 ? 1 : 0);



 VAR_10 = FUNC_4(&VAR_7->dev, &VAR_9->cdev);
 if (VAR_10 < 0)
  FUNC_0(&VAR_7->dev, "led_classdev_register failed\n");

 return VAR_10;
}
