
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_led {int dummy; } ;
struct wacom_group_leds {unsigned int count; struct wacom_led* leds; } ;
struct TYPE_2__ {unsigned int count; struct wacom_group_leds* groups; } ;
struct wacom {TYPE_1__ led; } ;



struct wacom_led *FUNC_0(struct wacom *VAR_0, unsigned int VAR_1,
     unsigned int VAR_2)
{
 struct wacom_group_leds *VAR_3;

 if (VAR_1 >= VAR_0->led.count)
  return ((void*)0);

 VAR_3 = &VAR_0->led.groups[VAR_1];

 if (!VAR_3->leds)
  return ((void*)0);

 VAR_2 %= VAR_3->count;

 return &VAR_3->leds[VAR_2];
}
