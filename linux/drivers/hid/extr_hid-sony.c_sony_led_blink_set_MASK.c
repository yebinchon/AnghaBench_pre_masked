
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct sony_sc {int led_count; void** led_delay_on; void** led_delay_off; struct led_classdev** leds; } ;
struct led_classdev {TYPE_1__* dev; } ;
struct hid_device {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hid_device*,char*) ;
 struct sony_sc* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct sony_sc*,int ) ;
 struct hid_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct led_classdev *VAR_2, unsigned long *VAR_3,
    unsigned long *VAR_4)
{
 struct device *VAR_5 = VAR_2->dev->parent;
 struct hid_device *VAR_6 = FUNC_3(VAR_5);
 struct sony_sc *VAR_7 = FUNC_1(VAR_6);
 int VAR_8;
 u8 VAR_9, VAR_10;

 if (!VAR_7) {
  FUNC_0(VAR_6, "No device data\n");
  return -VAR_0;
 }


 if (*VAR_3 > 2550)
  *VAR_3 = 2550;
 if (*VAR_4 > 2550)
  *VAR_4 = 2550;


 if (!*VAR_3 && !*VAR_4)
  *VAR_3 = *VAR_4 = 500;

 VAR_9 = *VAR_3 / 10;
 VAR_10 = *VAR_4 / 10;

 for (VAR_8 = 0; VAR_8 < VAR_7->led_count; VAR_8++) {
  if (VAR_2 == VAR_7->leds[VAR_8])
   break;
 }


 if (VAR_8 >= VAR_7->led_count)
  return -VAR_0;


 if (VAR_9 != VAR_7->led_delay_on[VAR_8] ||
  VAR_10 != VAR_7->led_delay_off[VAR_8]) {
  VAR_7->led_delay_on[VAR_8] = VAR_9;
  VAR_7->led_delay_off[VAR_8] = VAR_10;
  FUNC_2(VAR_7, VAR_1);
 }

 return 0;
}
