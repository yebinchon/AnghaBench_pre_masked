
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hw_perf_event {size_t idx; size_t config; int state; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cpu_hw_events {scalar_t__ n_events; struct perf_event** events; } ;
struct TYPE_4__ {scalar_t__ num_counters; TYPE_1__* pmu; } ;
struct TYPE_3__ {int (* start ) (struct perf_event*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_0 (struct perf_event*,int ) ;
 struct cpu_hw_events* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct perf_event *VAR_7, int VAR_8)
{
 struct cpu_hw_events *VAR_9 = FUNC_1(&VAR_5);
 struct hw_perf_event *VAR_10 = &VAR_7->hw;

 if (VAR_9->n_events == VAR_6->num_counters)
  return -VAR_0;
 VAR_10->idx = VAR_10->config;
 VAR_9->events[VAR_10->idx] = VAR_7;
 VAR_9->n_events++;

 VAR_10->state = VAR_4 | VAR_3;

 if (VAR_8 & VAR_2)
  VAR_6->pmu->start(VAR_7, VAR_1);

 return 0;
}
