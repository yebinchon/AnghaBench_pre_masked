
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transient_trig_data {int restore_state; int timer; } ;
struct led_classdev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct transient_trig_data*) ;
 struct transient_trig_data* FUNC_2 (struct led_classdev*) ;
 int FUNC_3 (struct led_classdev*,int ) ;

__attribute__((used)) static void FUNC_4(struct led_classdev *VAR_0)
{
 struct transient_trig_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->timer);
 FUNC_3(VAR_0, VAR_1->restore_state);
 FUNC_1(VAR_1);
}
