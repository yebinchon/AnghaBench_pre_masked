
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ function; } ;
struct qib_pportdata {TYPE_1__ symerr_clear_timer; int led_override_timer_active; TYPE_1__ led_override_timer; TYPE_1__ hol_timer; } ;
struct qib_devdata {int num_pports; struct qib_pportdata* pport; TYPE_1__ intrchk_timer; TYPE_1__ stats_timer; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct qib_devdata *VAR_0)
{
 struct qib_pportdata *VAR_1;
 int VAR_2;

 if (VAR_0->stats_timer.function)
  FUNC_1(&VAR_0->stats_timer);
 if (VAR_0->intrchk_timer.function)
  FUNC_1(&VAR_0->intrchk_timer);
 for (VAR_2 = 0; VAR_2 < VAR_0->num_pports; ++VAR_2) {
  VAR_1 = VAR_0->pport + VAR_2;
  if (VAR_1->hol_timer.function)
   FUNC_1(&VAR_1->hol_timer);
  if (VAR_1->led_override_timer.function) {
   FUNC_1(&VAR_1->led_override_timer);
   FUNC_0(&VAR_1->led_override_timer_active, 0);
  }
  if (VAR_1->symerr_clear_timer.function)
   FUNC_1(&VAR_1->symerr_clear_timer);
 }
}
