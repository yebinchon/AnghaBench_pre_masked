
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int work_flags; scalar_t__ blink_delay_off; scalar_t__ blink_delay_on; int blink_timer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct led_classdev *VAR_1)
{
 FUNC_1(&VAR_1->blink_timer);
 VAR_1->blink_delay_on = 0;
 VAR_1->blink_delay_off = 0;
 FUNC_0(VAR_0, &VAR_1->work_flags);
}
