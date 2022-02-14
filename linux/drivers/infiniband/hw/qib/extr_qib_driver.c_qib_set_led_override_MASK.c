
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ expires; } ;
struct qib_pportdata {unsigned int* led_override_vals; int led_override_timeoff; int led_override_timer_active; TYPE_1__ led_override_timer; struct qib_devdata* dd; } ;
struct qib_devdata {int flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

void FUNC_5(struct qib_pportdata *VAR_6, unsigned int VAR_7)
{
 struct qib_devdata *VAR_8 = VAR_6->dd;
 int VAR_9, VAR_10;

 if (!(VAR_8->flags & VAR_3))
  return;


 VAR_9 = VAR_0;
 VAR_10 = (VAR_7 & VAR_1) >> VAR_2;

 if (VAR_10) {

  VAR_6->led_override_vals[0] = VAR_7 & 0xF;
  VAR_6->led_override_vals[1] = (VAR_7 >> 4) & 0xF;
  VAR_9 = (VAR_0 << 4)/VAR_10;
 } else {

  VAR_6->led_override_vals[0] = VAR_7 & 0xF;
  VAR_6->led_override_vals[1] = VAR_7 & 0xF;
 }
 VAR_6->led_override_timeoff = VAR_9;





 if (FUNC_2(&VAR_6->led_override_timer_active) == 1) {

  FUNC_4(&VAR_6->led_override_timer, VAR_5, 0);
  VAR_6->led_override_timer.expires = VAR_4 + 1;
  FUNC_0(&VAR_6->led_override_timer);
 } else {
  if (VAR_6->led_override_vals[0] || VAR_6->led_override_vals[1])
   FUNC_3(&VAR_6->led_override_timer, VAR_4 + 1);
  FUNC_1(&VAR_6->led_override_timer_active);
 }
}
