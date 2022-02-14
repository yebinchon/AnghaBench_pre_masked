
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct led_classdev {TYPE_1__* dev; } ;
struct hid_device {int dummy; } ;
struct device {int dummy; } ;
struct bigben_device {int led_state; struct led_classdev** leds; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {struct device* parent; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hid_device*,char*) ;
 struct bigben_device* FUNC_2 (struct hid_device*) ;
 struct hid_device* FUNC_3 (struct device*) ;

__attribute__((used)) static enum led_brightness FUNC_4(struct led_classdev *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev->parent;
 struct hid_device *VAR_5 = FUNC_3(VAR_4);
 struct bigben_device *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 if (!VAR_6) {
  FUNC_1(VAR_5, "no device data\n");
  return VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_3 == VAR_6->leds[VAR_7])
   return (VAR_6->led_state & FUNC_0(VAR_7)) ? VAR_1 : VAR_0;
 }

 return VAR_0;
}
