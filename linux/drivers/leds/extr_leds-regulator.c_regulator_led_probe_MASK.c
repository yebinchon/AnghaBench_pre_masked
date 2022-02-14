
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ max_brightness; scalar_t__ name; scalar_t__ brightness; int flags; int (* brightness_set_blocking ) (TYPE_1__*,scalar_t__) ;} ;
struct regulator_led {int enabled; TYPE_1__ cdev; int mutex; struct regulator* vcc; } ;
struct regulator {int dummy; } ;
struct platform_device {int dev; } ;
struct led_regulator_platform_data {scalar_t__ name; scalar_t__ brightness; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct regulator*) ;
 int VAR_4 ;
 int FUNC_1 (struct regulator*) ;
 int FUNC_2 (int *,char*,...) ;
 struct led_regulator_platform_data* FUNC_3 (int *) ;
 struct regulator_led* FUNC_4 (int *,int,int ) ;
 struct regulator* FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_7 (struct regulator*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct platform_device*,struct regulator_led*) ;
 scalar_t__ FUNC_10 (struct regulator*) ;
 int FUNC_11 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_5)
{
 struct led_regulator_platform_data *VAR_6 =
   FUNC_3(&VAR_5->dev);
 struct regulator_led *VAR_7;
 struct regulator *VAR_8;
 int VAR_9 = 0;

 if (VAR_6 == ((void*)0)) {
  FUNC_2(&VAR_5->dev, "no platform data\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_5(&VAR_5->dev, "vled");
 if (FUNC_0(VAR_8)) {
  FUNC_2(&VAR_5->dev, "Cannot get vcc for %s\n", VAR_6->name);
  return FUNC_1(VAR_8);
 }

 VAR_7 = FUNC_4(&VAR_5->dev, sizeof(*VAR_7), VAR_3);
 if (VAR_7 == ((void*)0))
  return -VAR_2;

 VAR_7->cdev.max_brightness = FUNC_7(VAR_8);
 if (VAR_6->brightness > VAR_7->cdev.max_brightness) {
  FUNC_2(&VAR_5->dev, "Invalid default brightness %d\n",
    VAR_6->brightness);
  return -VAR_0;
 }

 VAR_7->cdev.brightness_set_blocking = FUNC_11;
 VAR_7->cdev.name = VAR_6->name;
 VAR_7->cdev.flags |= VAR_4;
 VAR_7->vcc = VAR_8;


 if (FUNC_10(VAR_7->vcc))
  VAR_7->enabled = 1;

 FUNC_8(&VAR_7->mutex);

 FUNC_9(VAR_5, VAR_7);

 VAR_9 = FUNC_6(&VAR_5->dev, &VAR_7->cdev);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_7->cdev.brightness = VAR_6->brightness;


 FUNC_11(&VAR_7->cdev, VAR_7->cdev.brightness);

 return 0;
}
