
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmu_hw_events {struct perf_event** events; } ;
struct hw_perf_event {size_t idx; int state; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct TYPE_2__ {int hw_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (struct perf_event*,int ) ;
 int FUNC_1 (struct perf_event*) ;
 struct pmu_hw_events* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct perf_event *VAR_5, int VAR_6)
{
 struct pmu_hw_events *VAR_7 = FUNC_2(VAR_4.hw_events);
 struct hw_perf_event *VAR_8 = &VAR_5->hw;

 VAR_7->events[VAR_8->idx] = VAR_5;

 VAR_8->state = VAR_3 | VAR_2;

 if (VAR_6 & VAR_1)
  FUNC_0(VAR_5, VAR_0);

 FUNC_1(VAR_5);

 return 0;
}
