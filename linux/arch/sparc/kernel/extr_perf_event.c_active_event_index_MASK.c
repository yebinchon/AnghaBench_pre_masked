
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;
struct cpu_hw_events {int n_events; int* current_idx; struct perf_event** event; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct cpu_hw_events *VAR_0,
         struct perf_event *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->n_events; VAR_2++) {
  if (VAR_0->event[VAR_2] == VAR_1)
   break;
 }
 FUNC_0(VAR_2 == VAR_0->n_events);
 return VAR_0->current_idx[VAR_2];
}
