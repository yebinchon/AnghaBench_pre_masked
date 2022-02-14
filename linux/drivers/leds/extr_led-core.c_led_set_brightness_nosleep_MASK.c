
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int flags; int brightness; int max_brightness; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int FUNC_0 (struct led_classdev*,int ) ;
 int FUNC_1 (int,int ) ;

void FUNC_2(struct led_classdev *VAR_1,
    enum led_brightness VAR_2)
{
 VAR_1->brightness = FUNC_1(VAR_2, VAR_1->max_brightness);

 if (VAR_1->flags & VAR_0)
  return;

 FUNC_0(VAR_1, VAR_1->brightness);
}
