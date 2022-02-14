
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int (* blink_set ) (struct led_classdev*,unsigned long*,unsigned long*) ;int work_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct led_classdev*,unsigned long,unsigned long) ;
 int FUNC_1 (struct led_classdev*,unsigned long*,unsigned long*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct led_classdev *VAR_1,
       unsigned long *VAR_2,
       unsigned long *VAR_3)
{
 if (!FUNC_2(VAR_0, &VAR_1->work_flags) &&
     VAR_1->blink_set &&
     !VAR_1->blink_set(VAR_1, VAR_2, VAR_3))
  return;


 if (!*VAR_2 && !*VAR_3)
  *VAR_2 = *VAR_3 = 500;

 FUNC_0(VAR_1, *VAR_2, *VAR_3);
}
