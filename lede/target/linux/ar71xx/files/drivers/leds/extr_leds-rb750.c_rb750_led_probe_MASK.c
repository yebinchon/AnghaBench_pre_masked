
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rb750_led_platform_data {int num_leds; int latch_change; struct rb750_led_data* leds; } ;
struct rb750_led_drvdata {int num_leds; struct rb750_led_dev* led_devs; } ;
struct TYPE_4__ {int brightness; int brightness_set; int default_trigger; int name; } ;
struct rb750_led_dev {int active_low; TYPE_1__ cdev; int latch_change; int mask; } ;
struct rb750_led_data {int active_low; int mask; int default_trigger; int name; } ;
struct TYPE_5__ {struct rb750_led_platform_data* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rb750_led_drvdata*) ;
 struct rb750_led_drvdata* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct platform_device*,struct rb750_led_drvdata*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_5)
{
 struct rb750_led_platform_data *VAR_6;
 struct rb750_led_drvdata *VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 VAR_6 = VAR_5->dev.platform_data;
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_1(sizeof(struct rb750_led_drvdata) +
     sizeof(struct rb750_led_dev) * VAR_6->num_leds,
     VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->num_leds = VAR_6->num_leds;
 VAR_7->led_devs = (struct rb750_led_dev *) &VAR_7[1];

 for (VAR_9 = 0; VAR_9 < VAR_7->num_leds; VAR_9++) {
  struct rb750_led_dev *VAR_10 = &VAR_7->led_devs[VAR_9];
  struct rb750_led_data *VAR_11 = &VAR_6->leds[VAR_9];

  VAR_10->cdev.name = VAR_11->name;
  VAR_10->cdev.default_trigger = VAR_11->default_trigger;
  VAR_10->cdev.brightness_set = VAR_4;
  VAR_10->cdev.brightness = VAR_3;

  VAR_10->mask = VAR_11->mask;
  VAR_10->active_low = !!VAR_11->active_low;
  VAR_10->latch_change = VAR_6->latch_change;

  VAR_8 = FUNC_2(&VAR_5->dev, &VAR_10->cdev);
  if (VAR_8)
   goto err;
 }

 FUNC_4(VAR_5, VAR_7);
 return 0;

err:
 for (VAR_9 = VAR_9 - 1; VAR_9 >= 0; VAR_9--)
  FUNC_3(&VAR_7->led_devs[VAR_9].cdev);

 FUNC_0(VAR_7);
 return VAR_8;
}
