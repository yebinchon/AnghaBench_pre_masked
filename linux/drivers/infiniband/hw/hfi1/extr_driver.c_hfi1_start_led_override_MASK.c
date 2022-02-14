
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ expires; } ;
struct hfi1_pportdata {int led_override_phase; int led_override_timer_active; TYPE_2__ led_override_timer; void** led_override_vals; TYPE_1__* dd; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ VAR_1 ;
 void* FUNC_2 (unsigned int) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;

void FUNC_6(struct hfi1_pportdata *VAR_3, unsigned int VAR_4,
        unsigned int VAR_5)
{
 if (!(VAR_3->dd->flags & VAR_0))
  return;


 VAR_3->led_override_vals[0] = FUNC_2(VAR_5);
 VAR_3->led_override_vals[1] = FUNC_2(VAR_4);


 VAR_3->led_override_phase = 1;





 if (!FUNC_4(&VAR_3->led_override_timer)) {
  FUNC_5(&VAR_3->led_override_timer, VAR_2, 0);
  VAR_3->led_override_timer.expires = VAR_1 + 1;
  FUNC_0(&VAR_3->led_override_timer);
  FUNC_1(&VAR_3->led_override_timer_active, 1);

  FUNC_3();
 }
}
