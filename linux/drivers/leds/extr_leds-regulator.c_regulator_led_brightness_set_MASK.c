
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_brightness; int dev; } ;
struct regulator_led {int mutex; TYPE_1__ cdev; int vcc; } ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct regulator_led*) ;
 int FUNC_6 (struct regulator_led*) ;
 int FUNC_7 (int ,int,int) ;
 struct regulator_led* FUNC_8 (struct led_classdev*) ;

__attribute__((used)) static int FUNC_9(struct led_classdev *VAR_1,
      enum led_brightness VAR_2)
{
 struct regulator_led *VAR_3 = FUNC_8(VAR_1);
 int VAR_4;
 int VAR_5 = 0;

 FUNC_3(&VAR_3->mutex);

 if (VAR_2 == VAR_0) {
  FUNC_5(VAR_3);
  goto out;
 }

 if (VAR_3->cdev.max_brightness > 1) {
  VAR_4 = FUNC_2(VAR_3->vcc, VAR_2);
  FUNC_0(VAR_3->cdev.dev, "brightness: %d voltage: %d\n",
    VAR_2, VAR_4);

  VAR_5 = FUNC_7(VAR_3->vcc, VAR_4, VAR_4);
  if (VAR_5 != 0)
   FUNC_1(VAR_3->cdev.dev, "Failed to set voltage %d: %d\n",
    VAR_4, VAR_5);
 }

 FUNC_6(VAR_3);

out:
 FUNC_4(&VAR_3->mutex);
 return VAR_5;
}
