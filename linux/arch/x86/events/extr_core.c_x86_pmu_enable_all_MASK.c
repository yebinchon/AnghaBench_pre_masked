
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hw_perf_event {int dummy; } ;
struct cpu_hw_events {int active_mask; TYPE_1__** events; } ;
struct TYPE_4__ {int num_counters; } ;
struct TYPE_3__ {struct hw_perf_event hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct hw_perf_event*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 struct cpu_hw_events* FUNC_2 (int *) ;
 TYPE_2__ VAR_2 ;

void FUNC_3(int VAR_3)
{
 struct cpu_hw_events *VAR_4 = FUNC_2(&VAR_1);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2.num_counters; VAR_5++) {
  struct hw_perf_event *VAR_6 = &VAR_4->events[VAR_5]->hw;

  if (!FUNC_1(VAR_5, VAR_4->active_mask))
   continue;

  FUNC_0(VAR_6, VAR_0);
 }
}
