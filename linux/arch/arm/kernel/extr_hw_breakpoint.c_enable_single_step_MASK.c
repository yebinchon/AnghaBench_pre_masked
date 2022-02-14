
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct perf_event {int dummy; } ;
struct TYPE_4__ {int mismatch; int enabled; int privilege; int type; int len; } ;
struct TYPE_3__ {int privilege; } ;
struct arch_hw_breakpoint {int trigger; TYPE_2__ step_ctrl; TYPE_1__ ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 struct arch_hw_breakpoint* FUNC_2 (struct perf_event*) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_2, u32 VAR_3)
{
 struct arch_hw_breakpoint *VAR_4 = FUNC_2(VAR_2);

 FUNC_1(VAR_2);
 VAR_4->step_ctrl.mismatch = 1;
 VAR_4->step_ctrl.len = VAR_1;
 VAR_4->step_ctrl.type = VAR_0;
 VAR_4->step_ctrl.privilege = VAR_4->ctrl.privilege;
 VAR_4->step_ctrl.enabled = 1;
 VAR_4->trigger = VAR_3;
 FUNC_0(VAR_2);
}
