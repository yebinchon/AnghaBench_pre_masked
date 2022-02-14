
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int work_flags; } ;
struct heartbeat_trig_data {int timer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct heartbeat_trig_data*) ;
 struct heartbeat_trig_data* FUNC_3 (struct led_classdev*) ;

__attribute__((used)) static void FUNC_4(struct led_classdev *VAR_1)
{
 struct heartbeat_trig_data *VAR_2 =
  FUNC_3(VAR_1);

 FUNC_1(&VAR_2->timer);
 FUNC_2(VAR_2);
 FUNC_0(VAR_0, &VAR_1->work_flags);
}
