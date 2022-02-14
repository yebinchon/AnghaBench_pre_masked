
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cec_pin {int work_pin_events_dropped; int* work_pin_events; size_t work_pin_events_wr; int kthread_waitq; int work_pin_events_dropped_cnt; int work_pin_num_events; int * work_pin_ts; TYPE_1__* adap; } ;
struct TYPE_2__ {int cec_pin_is_high; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cec_pin *VAR_2, bool VAR_3, bool VAR_4)
{
 if (!VAR_4 && VAR_3 == VAR_2->adap->cec_pin_is_high)
  return;

 VAR_2->adap->cec_pin_is_high = VAR_3;
 if (FUNC_1(&VAR_2->work_pin_num_events) < VAR_0) {
  u8 VAR_5 = VAR_3;

  if (VAR_2->work_pin_events_dropped) {
   VAR_2->work_pin_events_dropped = 0;
   VAR_5 |= VAR_1;
  }
  VAR_2->work_pin_events[VAR_2->work_pin_events_wr] = VAR_5;
  VAR_2->work_pin_ts[VAR_2->work_pin_events_wr] = FUNC_2();
  VAR_2->work_pin_events_wr =
   (VAR_2->work_pin_events_wr + 1) % VAR_0;
  FUNC_0(&VAR_2->work_pin_num_events);
 } else {
  VAR_2->work_pin_events_dropped = 1;
  VAR_2->work_pin_events_dropped_cnt++;
 }
 FUNC_3(&VAR_2->kthread_waitq);
}
