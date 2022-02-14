
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {scalar_t__ idx; int state; int config_base; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cpu_hw_events {scalar_t__ n_added; int n_events; scalar_t__* current_idx; int idx_mask; struct perf_event** event; int config; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct perf_event*,struct hw_perf_event*,int) ;
 int FUNC_1 (struct perf_event*,struct hw_perf_event*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct cpu_hw_events *VAR_2)
{
 int VAR_3;

 if (VAR_2->n_added == 0)
  return;


 for (VAR_3 = 0; VAR_3 < VAR_2->n_events; VAR_3++) {
  struct perf_event *VAR_4 = VAR_2->event[VAR_3];

  if (VAR_2->current_idx[VAR_3] != VAR_1 &&
   VAR_2->current_idx[VAR_3] != VAR_4->hw.idx) {
   FUNC_1(VAR_4, &VAR_4->hw, VAR_2->current_idx[VAR_3], 0);
   VAR_2->current_idx[VAR_3] = VAR_1;
  }
 }


 VAR_2->idx_mask = 0;
 for (VAR_3 = 0; VAR_3 < VAR_2->n_events; VAR_3++) {
  struct perf_event *VAR_5 = VAR_2->event[VAR_3];
  struct hw_perf_event *VAR_6 = &VAR_5->hw;
  int VAR_7 = VAR_6->idx;

  if (VAR_2->current_idx[VAR_3] == VAR_1) {
   FUNC_0(VAR_5, VAR_6, VAR_7);
   VAR_2->current_idx[VAR_3] = VAR_7;
  }

  if (!(VAR_6->state & VAR_0))
   VAR_2->idx_mask |= (1<<VAR_2->current_idx[VAR_3]);
 }
 VAR_2->config = VAR_2->event[0]->hw.config_base;
}
