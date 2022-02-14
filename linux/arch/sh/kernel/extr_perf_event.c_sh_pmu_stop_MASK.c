
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event {int idx; int state; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cpu_hw_events {int ** events; } ;
struct TYPE_2__ {int (* disable ) (struct hw_perf_event*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct perf_event*,struct hw_perf_event*,int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (struct hw_perf_event*,int) ;
 struct cpu_hw_events* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_5, int VAR_6)
{
 struct cpu_hw_events *VAR_7 = FUNC_2(&VAR_3);
 struct hw_perf_event *VAR_8 = &VAR_5->hw;
 int VAR_9 = VAR_8->idx;

 if (!(VAR_5->hw.state & VAR_1)) {
  VAR_4->disable(VAR_8, VAR_9);
  VAR_7->events[VAR_9] = ((void*)0);
  VAR_5->hw.state |= VAR_1;
 }

 if ((VAR_6 & VAR_0) && !(VAR_5->hw.state & VAR_2)) {
  FUNC_0(VAR_5, &VAR_5->hw, VAR_9);
  VAR_5->hw.state |= VAR_2;
 }
}
