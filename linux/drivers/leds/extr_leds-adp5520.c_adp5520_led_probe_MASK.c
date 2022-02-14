
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct led_info {int flags; int default_trigger; int name; } ;
struct adp5520_leds_platform_data {int num_leds; struct led_info* leds; } ;
struct TYPE_6__ {int brightness; int brightness_set_blocking; int default_trigger; int name; } ;
struct adp5520_led {int flags; int id; TYPE_1__ cdev; int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct platform_device*) ;
 int VAR_7 ;
 int FUNC_1 (struct adp5520_led*) ;
 int FUNC_2 (TYPE_3__*,char*,...) ;
 struct adp5520_leds_platform_data* FUNC_3 (TYPE_3__*) ;
 struct adp5520_led* FUNC_4 (TYPE_3__*,int,int,int ) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct platform_device*,struct adp5520_led*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_8)
{
 struct adp5520_leds_platform_data *VAR_9 = FUNC_3(&VAR_8->dev);
 struct adp5520_led *VAR_10, *VAR_11;
 struct led_info *VAR_12;
 int VAR_13, VAR_14;

 if (VAR_9 == ((void*)0)) {
  FUNC_2(&VAR_8->dev, "missing platform data\n");
  return -VAR_3;
 }

 if (VAR_9->num_leds > VAR_0) {
  FUNC_2(&VAR_8->dev, "can't handle more than %d LEDS\n",
     VAR_0);
  return -VAR_2;
 }

 VAR_10 = FUNC_4(&VAR_8->dev, VAR_9->num_leds, sizeof(*VAR_10),
    VAR_5);
 if (!VAR_10)
  return -VAR_4;

 VAR_13 = FUNC_0(VAR_8);
 if (VAR_13) {
  FUNC_2(&VAR_8->dev, "failed to write\n");
  return VAR_13;
 }

 for (VAR_14 = 0; VAR_14 < VAR_9->num_leds; ++VAR_14) {
  VAR_12 = &VAR_9->leds[VAR_14];
  VAR_11 = &VAR_10[VAR_14];

  VAR_11->cdev.name = VAR_12->name;
  VAR_11->cdev.default_trigger = VAR_12->default_trigger;
  VAR_11->cdev.brightness_set_blocking = VAR_7;
  VAR_11->cdev.brightness = VAR_6;

  if (VAR_12->flags & VAR_1)
   VAR_11->flags = VAR_12->flags;
  else
   VAR_11->flags = VAR_14 + 1;

  VAR_11->id = VAR_11->flags & VAR_1;

  VAR_11->master = VAR_8->dev.parent;

  VAR_13 = FUNC_5(VAR_11->master, &VAR_11->cdev);
  if (VAR_13) {
   FUNC_2(&VAR_8->dev, "failed to register LED %d\n",
    VAR_11->id);
   goto err;
  }

  VAR_13 = FUNC_1(VAR_11);
  if (VAR_13) {
   FUNC_2(&VAR_8->dev, "failed to write\n");
   VAR_14++;
   goto err;
  }
 }

 FUNC_7(VAR_8, VAR_10);
 return 0;

err:
 if (VAR_14 > 0) {
  for (VAR_14 = VAR_14 - 1; VAR_14 >= 0; VAR_14--)
   FUNC_6(&VAR_10[VAR_14].cdev);
 }

 return VAR_13;
}
