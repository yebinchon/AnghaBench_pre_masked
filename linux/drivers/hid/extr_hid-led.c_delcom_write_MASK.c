
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
struct hidled_led {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int FUNC_0 (struct hidled_led*) ;
 int FUNC_1 (struct hidled_led*) ;
 struct hidled_led* FUNC_2 (struct led_classdev*) ;

__attribute__((used)) static int FUNC_3(struct led_classdev *VAR_0, enum led_brightness VAR_1)
{
 struct hidled_led *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;






 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_2);
}
