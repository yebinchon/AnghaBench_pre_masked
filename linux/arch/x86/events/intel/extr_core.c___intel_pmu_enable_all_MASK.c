
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; } ;
struct perf_event {TYPE_1__ hw; } ;
struct cpu_hw_events {int intel_ctrl_guest_mask; struct perf_event** events; int active_mask; } ;
struct TYPE_4__ {int intel_ctrl; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (size_t,int ) ;
 struct cpu_hw_events* FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void FUNC_7(int VAR_4, bool VAR_5)
{
 struct cpu_hw_events *VAR_6 = FUNC_5(&VAR_2);

 FUNC_3();
 FUNC_2(VAR_5);
 FUNC_6(VAR_1,
   VAR_3.intel_ctrl & ~VAR_6->intel_ctrl_guest_mask);

 if (FUNC_4(VAR_0, VAR_6->active_mask)) {
  struct perf_event *VAR_7 =
   VAR_6->events[VAR_0];

  if (FUNC_0(!VAR_7))
   return;

  FUNC_1(VAR_7->hw.config);
 }
}
