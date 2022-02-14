
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event {int idx; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cpu_hw_events {int used_mask; int ** events; } ;
struct TYPE_2__ {int num_counters; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (struct perf_event*,int ) ;
 int FUNC_3 (struct perf_event*) ;
 struct cpu_hw_events* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_3, int VAR_4)
{
 struct cpu_hw_events *VAR_5 = FUNC_4(&VAR_1);
 struct hw_perf_event *VAR_6 = &VAR_3->hw;
 int VAR_7 = VAR_6->idx;

 FUNC_0(VAR_7 < 0 || VAR_7 >= VAR_2.num_counters);

 FUNC_2(VAR_3, VAR_0);
 VAR_5->events[VAR_7] = ((void*)0);
 FUNC_1(VAR_7, VAR_5->used_mask);

 FUNC_3(VAR_3);
}
