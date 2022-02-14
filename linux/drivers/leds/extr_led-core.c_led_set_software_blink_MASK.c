
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int blink_brightness; int max_brightness; unsigned long blink_delay_on; unsigned long blink_delay_off; int blink_timer; int work_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct led_classdev*) ;
 int FUNC_1 (struct led_classdev*,int) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct led_classdev *VAR_3,
       unsigned long VAR_4,
       unsigned long VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6)
  VAR_3->blink_brightness = VAR_6;
 if (!VAR_3->blink_brightness)
  VAR_3->blink_brightness = VAR_3->max_brightness;

 VAR_3->blink_delay_on = VAR_4;
 VAR_3->blink_delay_off = VAR_5;


 if (!VAR_4) {
  FUNC_1(VAR_3, VAR_1);
  return;
 }


 if (!VAR_5) {
  FUNC_1(VAR_3,
        VAR_3->blink_brightness);
  return;
 }

 FUNC_3(VAR_0, &VAR_3->work_flags);
 FUNC_2(&VAR_3->blink_timer, VAR_2 + 1);
}
