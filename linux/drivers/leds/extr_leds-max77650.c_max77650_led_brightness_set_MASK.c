
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77650_led {int regA; int map; } ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct max77650_led* FUNC_0 (struct led_classdev*) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct led_classdev *VAR_5,
           enum led_brightness VAR_6)
{
 struct max77650_led *VAR_7 = FUNC_0(VAR_5);
 int VAR_8, VAR_9;

 VAR_9 = VAR_1 | VAR_4;

 if (VAR_6 == VAR_0)
  VAR_8 = VAR_2;
 else
  VAR_8 = VAR_3 | VAR_6;

 return FUNC_1(VAR_7->map, VAR_7->regA, VAR_9, VAR_8);
}
