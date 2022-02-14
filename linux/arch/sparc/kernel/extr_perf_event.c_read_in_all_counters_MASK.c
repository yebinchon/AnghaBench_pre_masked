
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ idx; int state; } ;
struct perf_event {TYPE_1__ hw; } ;
struct cpu_hw_events {int n_events; scalar_t__* current_idx; struct perf_event** event; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct perf_event*,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct cpu_hw_events *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->n_events; VAR_4++) {
  struct perf_event *VAR_5 = VAR_3->event[VAR_4];

  if (VAR_3->current_idx[VAR_4] != VAR_2 &&
      VAR_3->current_idx[VAR_4] != VAR_5->hw.idx) {
   FUNC_0(VAR_5, &VAR_5->hw,
      VAR_3->current_idx[VAR_4]);
   VAR_3->current_idx[VAR_4] = VAR_2;
   if (VAR_5->hw.state & VAR_1)
    VAR_5->hw.state |= VAR_0;
  }
 }
}
