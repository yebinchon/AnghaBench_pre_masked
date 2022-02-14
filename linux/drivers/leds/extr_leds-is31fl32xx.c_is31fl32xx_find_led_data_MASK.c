
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct is31fl32xx_priv {size_t num_leds; struct is31fl32xx_led_data* leds; } ;
struct is31fl32xx_led_data {scalar_t__ channel; } ;



__attribute__((used)) static struct is31fl32xx_led_data *FUNC_0(
     struct is31fl32xx_priv *VAR_0,
     u8 VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_leds; VAR_2++) {
  if (VAR_0->leds[VAR_2].channel == VAR_1)
   return &VAR_0->leds[VAR_2];
 }

 return ((void*)0);
}
