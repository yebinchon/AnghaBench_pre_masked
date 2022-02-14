
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int work_flags; int blink_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct led_classdev*,unsigned long*,unsigned long*) ;

void FUNC_3(struct led_classdev *VAR_3,
     unsigned long *VAR_4,
     unsigned long *VAR_5)
{
 FUNC_1(&VAR_3->blink_timer);

 FUNC_0(VAR_2, &VAR_3->work_flags);
 FUNC_0(VAR_0, &VAR_3->work_flags);
 FUNC_0(VAR_1, &VAR_3->work_flags);

 FUNC_2(VAR_3, VAR_4, VAR_5);
}
