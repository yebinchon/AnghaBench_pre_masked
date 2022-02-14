
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hw_perf_event {size_t idx; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cpu_hw_events {int n_events; int ** events; } ;
struct TYPE_4__ {TYPE_1__* pmu; } ;
struct TYPE_3__ {int (* stop ) (struct perf_event*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct perf_event*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (struct perf_event*,int ) ;
 struct cpu_hw_events* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_3, int VAR_4)
{
 struct cpu_hw_events *VAR_5 = FUNC_2(&VAR_1);
 struct hw_perf_event *VAR_6 = &VAR_3->hw;

 VAR_5->events[VAR_6->idx] = ((void*)0);
 VAR_5->n_events--;
 VAR_2->pmu->stop(VAR_3, VAR_0);
 FUNC_0(VAR_3);
}
