
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event {int state; int event_base; } ;
struct perf_event {int pmu; struct hw_perf_event hw; } ;
struct cpu_hw_events {int n_events; int n_added; int * evtype; struct perf_event** event; int * current_idx; } ;
struct TYPE_2__ {int num_pmcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct perf_event**,int *,int) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct cpu_hw_events* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct perf_event *VAR_7, int VAR_8)
{
 struct cpu_hw_events *VAR_9 = FUNC_5(&VAR_6);
 struct hw_perf_event *VAR_10 = &VAR_7->hw;
 int VAR_11;
 int VAR_12;
 unsigned long VAR_13;
 FUNC_3(VAR_7->pmu);
 FUNC_2(VAR_13);


 VAR_12 = -VAR_0;


 VAR_11 = VAR_9->n_events;
 if (VAR_11 < VAR_5->num_pmcs) {
  VAR_9->event[VAR_11] = VAR_7;
  VAR_9->evtype[VAR_11] = VAR_7->hw.event_base;
  VAR_9->current_idx[VAR_11] = VAR_4;

  if (!FUNC_0(VAR_9->event, VAR_9->evtype, VAR_11+1)) {
   VAR_9->n_events++;
   VAR_9->n_added++;
   VAR_12 = 0;
  }
 }

 VAR_10->state = VAR_3;
 if (!(VAR_8 & VAR_1))
  VAR_10->state |= VAR_2;

 FUNC_1(VAR_13);
 FUNC_4(VAR_7->pmu);

 return VAR_12;
}
