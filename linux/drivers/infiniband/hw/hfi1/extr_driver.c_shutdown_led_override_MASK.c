
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_pportdata {int led_override_timer_active; int led_override_timer; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct hfi1_devdata*,int ,int ) ;

void FUNC_6(struct hfi1_pportdata *VAR_1)
{
 struct hfi1_devdata *VAR_2 = VAR_1->dd;






 FUNC_3();
 if (FUNC_0(&VAR_1->led_override_timer_active)) {
  FUNC_2(&VAR_1->led_override_timer);
  FUNC_1(&VAR_1->led_override_timer_active, 0);

  FUNC_4();
 }


 FUNC_5(VAR_2, VAR_0, 0);
}
