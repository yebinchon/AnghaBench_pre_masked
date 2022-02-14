
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sony_sc {int quirks; int led_count; int* led_state; scalar_t__* led_delay_off; scalar_t__* led_delay_on; struct led_classdev** leds; } ;
struct led_classdev {TYPE_1__* dev; } ;
struct hid_device {int dummy; } ;
struct device {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {struct device* parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct hid_device*,char*) ;
 struct sony_sc* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct sony_sc*) ;
 struct hid_device* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct led_classdev *VAR_1,
        enum led_brightness VAR_2)
{
 struct device *VAR_3 = VAR_1->dev->parent;
 struct hid_device *VAR_4 = FUNC_3(VAR_3);
 struct sony_sc *VAR_5;

 int VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_4);
 if (!VAR_5) {
  FUNC_0(VAR_4, "No device data\n");
  return;
 }
 VAR_7 = !!(VAR_5->quirks & VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_5->led_count; VAR_6++) {
  if (VAR_1 == VAR_5->leds[VAR_6] && (VAR_7 ||
   (VAR_2 != VAR_5->led_state[VAR_6] ||
   VAR_5->led_delay_on[VAR_6] ||
   VAR_5->led_delay_off[VAR_6]))) {

   VAR_5->led_state[VAR_6] = VAR_2;


   VAR_5->led_delay_on[VAR_6] = 0;
   VAR_5->led_delay_off[VAR_6] = 0;

   FUNC_2(VAR_5);
   break;
  }
 }
}
