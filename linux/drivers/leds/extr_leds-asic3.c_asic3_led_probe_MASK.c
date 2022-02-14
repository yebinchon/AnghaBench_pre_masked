
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct led_classdev {int dummy; } ;
struct asic3_led {TYPE_1__* cdev; int default_trigger; int name; } ;
struct TYPE_3__ {int default_trigger; int blink_set; int brightness_set; int flags; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct asic3_led* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_5)
{
 struct asic3_led *VAR_6 = FUNC_0(&VAR_5->dev);
 int VAR_7;

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6->cdev = FUNC_1(&VAR_5->dev, sizeof(struct led_classdev),
    VAR_1);
 if (!VAR_6->cdev) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_6->cdev->name = VAR_6->name;
 VAR_6->cdev->flags = VAR_2;
 VAR_6->cdev->brightness_set = VAR_4;
 VAR_6->cdev->blink_set = VAR_3;
 VAR_6->cdev->default_trigger = VAR_6->default_trigger;

 VAR_7 = FUNC_2(&VAR_5->dev, VAR_6->cdev);
 if (VAR_7 < 0)
  goto out;

 return 0;

out:
 (void) FUNC_3(VAR_5);
 return VAR_7;
}
