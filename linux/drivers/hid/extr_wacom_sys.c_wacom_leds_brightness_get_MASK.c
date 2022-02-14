
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_led {int hlv; int llv; struct wacom* wacom; } ;
struct TYPE_2__ {int max_hlv; int max_llv; } ;
struct wacom {TYPE_1__ led; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;

enum led_brightness FUNC_0(struct wacom_led *VAR_1)
{
 struct wacom *VAR_2 = VAR_1->wacom;

 if (VAR_2->led.max_hlv)
  return VAR_1->hlv * VAR_0 / VAR_2->led.max_hlv;

 if (VAR_2->led.max_llv)
  return VAR_1->llv * VAR_0 / VAR_2->led.max_llv;


 return VAR_0;
}
