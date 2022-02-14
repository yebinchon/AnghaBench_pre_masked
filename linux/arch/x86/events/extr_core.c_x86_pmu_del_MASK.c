
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct cpu_hw_events {int txn_flags; int n_events; int n_added; int ** event_constraint; struct perf_event** event_list; } ;
struct TYPE_2__ {int (* del ) (struct perf_event*) ;int (* put_event_constraints ) (struct cpu_hw_events*,struct perf_event*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct cpu_hw_events*,struct perf_event*) ;
 int FUNC_3 (struct perf_event*) ;
 struct cpu_hw_events* FUNC_4 (int *) ;
 TYPE_1__ VAR_3 ;
 int FUNC_5 (struct perf_event*,int ) ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_4, int VAR_5)
{
 struct cpu_hw_events *VAR_6 = FUNC_4(&VAR_2);
 int VAR_7;
 if (VAR_6->txn_flags & VAR_1)
  goto do_del;




 FUNC_5(VAR_4, VAR_0);

 for (VAR_7 = 0; VAR_7 < VAR_6->n_events; VAR_7++) {
  if (VAR_4 == VAR_6->event_list[VAR_7])
   break;
 }

 if (FUNC_0(VAR_7 == VAR_6->n_events))
  return;


 if (VAR_7 >= VAR_6->n_events - VAR_6->n_added)
  --VAR_6->n_added;

 if (VAR_3.put_event_constraints)
  VAR_3.put_event_constraints(VAR_6, VAR_4);


 while (++VAR_7 < VAR_6->n_events) {
  VAR_6->event_list[VAR_7-1] = VAR_6->event_list[VAR_7];
  VAR_6->event_constraint[VAR_7-1] = VAR_6->event_constraint[VAR_7];
 }
 VAR_6->event_constraint[VAR_7-1] = ((void*)0);
 --VAR_6->n_events;

 FUNC_1(VAR_4);

do_del:
 if (VAR_3.del) {




  VAR_3.del(VAR_4);
 }
}
