
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int parent; } ;
struct platform_device {TYPE_4__ dev; } ;
struct led_platform_data {int num_leds; TYPE_1__* leds; } ;
struct da9052_pdata {struct led_platform_data* pled; } ;
struct TYPE_7__ {int brightness; int max_brightness; int brightness_set_blocking; int name; } ;
struct da9052_led {int led_index; TYPE_2__ cdev; void* da9052; } ;
struct da9052 {int dev; } ;
struct TYPE_6__ {int flags; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*) ;
 int VAR_5 ;
 int FUNC_1 (struct da9052_led*,int ) ;
 int FUNC_2 (TYPE_4__*,char*,...) ;
 void* FUNC_3 (int ) ;
 struct da9052_pdata* FUNC_4 (int ) ;
 struct da9052_led* FUNC_5 (TYPE_4__*,int,int,int ) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct platform_device*,struct da9052_led*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_6)
{
 struct da9052_pdata *VAR_7;
 struct da9052 *VAR_8;
 struct led_platform_data *VAR_9;
 struct da9052_led *VAR_10 = ((void*)0);
 int VAR_11 = -VAR_1;
 int VAR_12;

 VAR_8 = FUNC_3(VAR_6->dev.parent);
 VAR_7 = FUNC_4(VAR_8->dev);
 if (VAR_7 == ((void*)0)) {
  FUNC_2(&VAR_6->dev, "No platform data\n");
  goto err;
 }

 VAR_9 = VAR_7->pled;
 if (VAR_9 == ((void*)0)) {
  FUNC_2(&VAR_6->dev, "No platform data for LED\n");
  goto err;
 }

 VAR_10 = FUNC_5(&VAR_6->dev,
      VAR_9->num_leds, sizeof(struct da9052_led),
      VAR_3);
 if (!VAR_10) {
  VAR_11 = -VAR_2;
  goto err;
 }

 for (VAR_12 = 0; VAR_12 < VAR_9->num_leds; VAR_12++) {
  VAR_10[VAR_12].cdev.name = VAR_9->leds[VAR_12].name;
  VAR_10[VAR_12].cdev.brightness_set_blocking = VAR_5;
  VAR_10[VAR_12].cdev.brightness = VAR_4;
  VAR_10[VAR_12].cdev.max_brightness = VAR_0;
  VAR_10[VAR_12].led_index = VAR_9->leds[VAR_12].flags;
  VAR_10[VAR_12].da9052 = FUNC_3(VAR_6->dev.parent);

  VAR_11 = FUNC_6(VAR_6->dev.parent, &VAR_10[VAR_12].cdev);
  if (VAR_11) {
   FUNC_2(&VAR_6->dev, "Failed to register led %d\n",
    VAR_10[VAR_12].led_index);
   goto err_register;
  }

  VAR_11 = FUNC_1(&VAR_10[VAR_12],
        VAR_10[VAR_12].cdev.brightness);
  if (VAR_11) {
   FUNC_2(&VAR_6->dev, "Unable to init led %d\n",
    VAR_10[VAR_12].led_index);
   continue;
  }
 }
 VAR_11 = FUNC_0(VAR_10->da9052);
 if (VAR_11) {
  FUNC_2(&VAR_6->dev, "Failed to configure GPIO LED%d\n", VAR_11);
  goto err_register;
 }

 FUNC_8(VAR_6, VAR_10);

 return 0;

err_register:
 for (VAR_12 = VAR_12 - 1; VAR_12 >= 0; VAR_12--)
  FUNC_7(&VAR_10[VAR_12].cdev);
err:
 return VAR_11;
}
