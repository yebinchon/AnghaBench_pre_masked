
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aat1290_led_config_data {scalar_t__ max_mm_current; int max_brightness; } ;
struct aat1290_led {scalar_t__* mm_current_scale; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct aat1290_led *VAR_1,
     struct aat1290_led_config_data *VAR_2)
{
 int VAR_3, VAR_4 = 0, VAR_5 = VAR_0;

 while (VAR_5 - VAR_4 > 1) {
  VAR_3 = VAR_4 + (VAR_5 - VAR_4) / 2;
  if (VAR_2->max_mm_current < VAR_1->mm_current_scale[VAR_3])
   VAR_5 = VAR_3;
  else
   VAR_4 = VAR_3;
 }

 VAR_2->max_mm_current = VAR_1->mm_current_scale[VAR_4];
 VAR_2->max_brightness = VAR_4 + 1;
}
