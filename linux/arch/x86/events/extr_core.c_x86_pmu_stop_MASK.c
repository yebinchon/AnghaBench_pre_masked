
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event {size_t idx; int state; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cpu_hw_events {int ** events; int active_mask; } ;
struct TYPE_2__ {int (* disable ) (struct perf_event*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (size_t,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct perf_event*) ;
 scalar_t__ FUNC_3 (size_t,int ) ;
 struct cpu_hw_events* FUNC_4 (int *) ;
 int FUNC_5 (struct perf_event*) ;
 TYPE_1__ VAR_4 ;

void FUNC_6(struct perf_event *VAR_5, int VAR_6)
{
 struct cpu_hw_events *VAR_7 = FUNC_4(&VAR_3);
 struct hw_perf_event *VAR_8 = &VAR_5->hw;

 if (FUNC_3(VAR_8->idx, VAR_7->active_mask)) {
  VAR_4.disable(VAR_5);
  FUNC_1(VAR_8->idx, VAR_7->active_mask);
  VAR_7->events[VAR_8->idx] = ((void*)0);
  FUNC_0(VAR_8->state & VAR_1);
  VAR_8->state |= VAR_1;
 }

 if ((VAR_6 & VAR_0) && !(VAR_8->state & VAR_2)) {




  FUNC_5(VAR_5);
  VAR_8->state |= VAR_2;
 }
}
