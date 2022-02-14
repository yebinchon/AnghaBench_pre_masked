
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmu {int dummy; } ;
struct hw_perf_event {int idx; int state; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cpu_hw_events {int n_added; int enabled; int n_events; struct perf_event** event_list; } ;
struct TYPE_2__ {int (* enable_all ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct hw_perf_event*,struct cpu_hw_events*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 struct cpu_hw_events* FUNC_4 (int *) ;
 int FUNC_5 (struct perf_event*,struct cpu_hw_events*,int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 (struct perf_event*,int ) ;
 int FUNC_8 (struct perf_event*,int ) ;

__attribute__((used)) static void FUNC_9(struct pmu *VAR_6)
{
 struct cpu_hw_events *VAR_7 = FUNC_4(&VAR_4);
 struct perf_event *VAR_8;
 struct hw_perf_event *VAR_9;
 int VAR_10, VAR_11 = VAR_7->n_added;

 if (!FUNC_6())
  return;

 if (VAR_7->enabled)
  return;

 if (VAR_7->n_added) {
  int VAR_12 = VAR_7->n_events - VAR_7->n_added;






  for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
   VAR_8 = VAR_7->event_list[VAR_10];
   VAR_9 = &VAR_8->hw;







   if (VAR_9->idx == -1 ||
       FUNC_1(VAR_9, VAR_7, VAR_10))
    continue;





   if (VAR_9->state & VAR_3)
    VAR_9->state |= VAR_2;

   FUNC_8(VAR_8, VAR_1);
  }




  for (VAR_10 = 0; VAR_10 < VAR_7->n_events; VAR_10++) {
   VAR_8 = VAR_7->event_list[VAR_10];
   VAR_9 = &VAR_8->hw;

   if (!FUNC_1(VAR_9, VAR_7, VAR_10))
    FUNC_5(VAR_8, VAR_7, VAR_10);
   else if (VAR_10 < VAR_12)
    continue;

   if (VAR_9->state & VAR_2)
    continue;

   FUNC_7(VAR_8, VAR_0);
  }
  VAR_7->n_added = 0;
  FUNC_2();
 }

 VAR_7->enabled = 1;
 FUNC_0();

 VAR_5.enable_all(VAR_11);
}
