
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event {int idx; int state; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cpu_hw_events {struct perf_event** events; } ;
struct TYPE_2__ {int (* enable ) (struct hw_perf_event*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct hw_perf_event*,int) ;
 struct cpu_hw_events* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_4, int VAR_5)
{
 struct cpu_hw_events *VAR_6 = FUNC_2(&VAR_2);
 struct hw_perf_event *VAR_7 = &VAR_4->hw;
 int VAR_8 = VAR_7->idx;

 if (FUNC_0(VAR_8 == -1))
  return;

 if (VAR_5 & VAR_0)
  FUNC_0(!(VAR_4->hw.state & VAR_1));

 VAR_6->events[VAR_8] = VAR_4;
 VAR_4->hw.state = 0;
 VAR_3->enable(VAR_7, VAR_8);
}
