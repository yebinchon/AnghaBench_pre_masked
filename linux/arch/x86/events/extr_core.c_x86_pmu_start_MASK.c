
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int idx; int state; } ;
struct perf_event {TYPE_1__ hw; } ;
struct cpu_hw_events {int running; int active_mask; struct perf_event** events; } ;
struct TYPE_4__ {int (* enable ) (struct perf_event*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (struct perf_event*) ;
 struct cpu_hw_events* FUNC_4 (int *) ;
 int FUNC_5 (struct perf_event*) ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_5, int VAR_6)
{
 struct cpu_hw_events *VAR_7 = FUNC_4(&VAR_3);
 int VAR_8 = VAR_5->hw.idx;

 if (FUNC_0(!(VAR_5->hw.state & VAR_1)))
  return;

 if (FUNC_0(VAR_8 == -1))
  return;

 if (VAR_6 & VAR_0) {
  FUNC_0(!(VAR_5->hw.state & VAR_2));
  FUNC_5(VAR_5);
 }

 VAR_5->hw.state = 0;

 VAR_7->events[VAR_8] = VAR_5;
 FUNC_1(VAR_8, VAR_7->active_mask);
 FUNC_1(VAR_8, VAR_7->running);
 VAR_4.enable(VAR_5);
 FUNC_2(VAR_5);
}
