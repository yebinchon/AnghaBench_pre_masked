
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmu_hw_events {int ** events; } ;
struct hw_perf_event {size_t idx; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct TYPE_2__ {int hw_events; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct perf_event*,int ) ;
 int FUNC_1 (struct perf_event*) ;
 struct pmu_hw_events* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_2, int VAR_3)
{
 struct pmu_hw_events *VAR_4 = FUNC_2(VAR_1.hw_events);
 struct hw_perf_event *VAR_5 = &VAR_2->hw;

 FUNC_0(VAR_2, VAR_0);

 VAR_4->events[VAR_5->idx] = ((void*)0);

 FUNC_1(VAR_2);
}
