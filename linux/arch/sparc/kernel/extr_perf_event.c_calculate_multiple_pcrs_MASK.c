
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int idx; int state; int config_base; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cpu_hw_events {int n_events; int* current_idx; int * pcr; struct perf_event** event; int n_added; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct perf_event*,int ) ;

__attribute__((used)) static void FUNC_1(struct cpu_hw_events *VAR_3)
{
 int VAR_4;

 if (!VAR_3->n_added)
  goto out;

 for (VAR_4 = 0; VAR_4 < VAR_3->n_events; VAR_4++) {
  struct perf_event *VAR_5 = VAR_3->event[VAR_4];
  struct hw_perf_event *VAR_6 = &VAR_5->hw;
  int VAR_7 = VAR_6->idx;

  if (VAR_3->current_idx[VAR_4] != VAR_2)
   continue;

  VAR_3->current_idx[VAR_4] = VAR_7;

  if (VAR_5->hw.state & VAR_1)
   continue;

  FUNC_0(VAR_5, VAR_0);
 }
out:
 for (VAR_4 = 0; VAR_4 < VAR_3->n_events; VAR_4++) {
  struct perf_event *VAR_8 = VAR_3->event[VAR_4];
  int VAR_9 = VAR_8->hw.idx;

  VAR_3->pcr[VAR_9] |= VAR_8->hw.config_base;
 }
}
