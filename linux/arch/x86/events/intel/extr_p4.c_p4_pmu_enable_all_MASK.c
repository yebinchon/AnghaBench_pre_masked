
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct cpu_hw_events {int active_mask; struct perf_event** events; } ;
struct TYPE_2__ {int num_counters; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (int,int ) ;
 struct cpu_hw_events* FUNC_2 (int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_3(int VAR_2)
{
 struct cpu_hw_events *VAR_3 = FUNC_2(&VAR_0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1.num_counters; VAR_4++) {
  struct perf_event *VAR_5 = VAR_3->events[VAR_4];
  if (!FUNC_1(VAR_4, VAR_3->active_mask))
   continue;
  FUNC_0(VAR_5);
 }
}
