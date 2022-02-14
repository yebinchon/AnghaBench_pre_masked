
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
struct bl_trig_notifier {int notifier; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct bl_trig_notifier*) ;
 struct bl_trig_notifier* FUNC_2 (struct led_classdev*) ;

__attribute__((used)) static void FUNC_3(struct led_classdev *VAR_0)
{
 struct bl_trig_notifier *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->notifier);
 FUNC_1(VAR_1);
}
