
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct hfi1_pportdata {int led_override_phase; unsigned long* led_override_vals; int led_override_timer; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int flags; } ;


 int VAR_0 ;
 struct hfi1_pportdata* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 struct hfi1_pportdata* VAR_3 ;
 int FUNC_2 (struct hfi1_devdata*,int) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_4)
{
 struct hfi1_pportdata *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_2);
 struct hfi1_devdata *VAR_6 = VAR_5->dd;
 unsigned long VAR_7;
 int VAR_8;

 if (!(VAR_6->flags & VAR_0))
  return;

 VAR_8 = VAR_5->led_override_phase & 1;

 FUNC_2(VAR_6, VAR_8);

 VAR_7 = VAR_5->led_override_vals[VAR_8];


 VAR_5->led_override_phase = !VAR_5->led_override_phase;

 FUNC_1(&VAR_5->led_override_timer, VAR_1 + VAR_7);
}
