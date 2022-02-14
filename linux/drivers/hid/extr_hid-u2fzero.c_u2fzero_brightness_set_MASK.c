
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int brightness; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int FUNC_0 (struct led_classdev*) ;

__attribute__((used)) static int FUNC_1(struct led_classdev *VAR_1,
      enum led_brightness VAR_2)
{
 VAR_1->brightness = VAR_0;
 if (VAR_2)
  return FUNC_0(VAR_1);
 else
  return 0;
}
