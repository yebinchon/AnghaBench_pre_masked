
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sony_sc {int led_count; int* led_state; struct led_classdev** leds; } ;
struct led_classdev {TYPE_1__* dev; } ;
struct hid_device {int dummy; } ;
struct device {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {struct device* parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct hid_device*,char*) ;
 struct sony_sc* FUNC_1 (struct hid_device*) ;
 struct hid_device* FUNC_2 (struct device*) ;

__attribute__((used)) static enum led_brightness FUNC_3(struct led_classdev *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev->parent;
 struct hid_device *VAR_3 = FUNC_2(VAR_2);
 struct sony_sc *VAR_4;

 int VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4) {
  FUNC_0(VAR_3, "No device data\n");
  return VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->led_count; VAR_5++) {
  if (VAR_1 == VAR_4->leds[VAR_5])
   return VAR_4->led_state[VAR_5];
 }

 return VAR_0;
}
