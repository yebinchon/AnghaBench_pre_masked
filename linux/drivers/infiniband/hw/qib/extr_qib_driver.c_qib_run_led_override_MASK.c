
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct qib_pportdata {int led_override_timeoff; int led_override_timer; scalar_t__* led_override_vals; scalar_t__ led_override; int led_override_phase; struct qib_devdata* dd; } ;
struct qib_devdata {int flags; int (* f_setextled ) (struct qib_pportdata*,int) ;} ;


 int VAR_0 ;
 struct qib_pportdata* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 struct qib_pportdata* VAR_3 ;
 int FUNC_2 (struct qib_pportdata*,int) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_4)
{
 struct qib_pportdata *VAR_5 = FUNC_0(VAR_5, VAR_4,
          VAR_2);
 struct qib_devdata *VAR_6 = VAR_5->dd;
 int VAR_7;
 int VAR_8;

 if (!(VAR_6->flags & VAR_0))
  return;

 VAR_8 = VAR_5->led_override_phase++ & 1;
 VAR_5->led_override = VAR_5->led_override_vals[VAR_8];
 VAR_7 = VAR_5->led_override_timeoff;

 VAR_6->f_setextled(VAR_5, 1);




 if (VAR_5->led_override_vals[0] || VAR_5->led_override_vals[1])
  FUNC_1(&VAR_5->led_override_timer, VAR_1 + VAR_7);
}
