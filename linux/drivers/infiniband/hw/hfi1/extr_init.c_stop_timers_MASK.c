
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ function; } ;
struct hfi1_pportdata {int led_override_timer_active; TYPE_1__ led_override_timer; } ;
struct hfi1_devdata {int num_pports; struct hfi1_pportdata* pport; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct hfi1_devdata *VAR_0)
{
 struct hfi1_pportdata *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_pports; ++VAR_2) {
  VAR_1 = VAR_0->pport + VAR_2;
  if (VAR_1->led_override_timer.function) {
   FUNC_1(&VAR_1->led_override_timer);
   FUNC_0(&VAR_1->led_override_timer_active, 0);
  }
 }
}
