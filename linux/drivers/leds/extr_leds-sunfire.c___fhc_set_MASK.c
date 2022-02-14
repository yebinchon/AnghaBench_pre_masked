
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sunfire_led {int reg; } ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;



 struct sunfire_led* FUNC_0 (struct led_classdev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct led_classdev *VAR_0,
        enum led_brightness VAR_1, u32 VAR_2)
{
 struct sunfire_led *VAR_3 = FUNC_0(VAR_0);
 u32 VAR_4 = FUNC_1(VAR_3->reg);

 switch (VAR_2) {
 case 128:
  if (VAR_1)
   VAR_4 &= ~VAR_2;
  else
   VAR_4 |= VAR_2;
  break;

 default:
  if (VAR_1)
   VAR_4 |= VAR_2;
  else
   VAR_4 &= ~VAR_2;
  break;
 }
 FUNC_2(VAR_4, VAR_3->reg);
}
