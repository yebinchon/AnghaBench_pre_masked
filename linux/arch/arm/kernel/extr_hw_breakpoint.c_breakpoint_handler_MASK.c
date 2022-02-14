
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pt_regs {int ARM_pc; } ;
struct perf_event {int overflow_handler; } ;
struct arch_hw_breakpoint_ctrl {int len; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;
struct arch_hw_breakpoint {int trigger; TYPE_1__ step_ctrl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct arch_hw_breakpoint* FUNC_0 (struct perf_event*) ;
 int FUNC_1 (int,struct arch_hw_breakpoint_ctrl*) ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (struct perf_event*,int) ;
 int FUNC_4 (struct perf_event*,struct pt_regs*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;
 struct perf_event** FUNC_9 (int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(unsigned long VAR_4, struct pt_regs *VAR_5)
{
 int VAR_6;
 u32 VAR_7, VAR_8, VAR_9;
 struct perf_event *VAR_10, **VAR_11;
 struct arch_hw_breakpoint *VAR_12;
 struct arch_hw_breakpoint_ctrl VAR_13;

 VAR_11 = FUNC_9(VAR_2);


 VAR_9 = VAR_5->ARM_pc;


 for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
  FUNC_6();

  VAR_10 = VAR_11[VAR_6];

  if (VAR_10 == ((void*)0))
   goto unlock;

  VAR_12 = FUNC_0(VAR_10);


  VAR_8 = FUNC_8(VAR_1 + VAR_6);
  if (VAR_8 != (VAR_9 & ~0x3))
   goto mismatch;


  VAR_7 = FUNC_8(VAR_0 + VAR_6);
  FUNC_1(VAR_7, &VAR_13);
  if ((1 << (VAR_9 & 0x3)) & VAR_13.len) {
   VAR_12->trigger = VAR_9;
   FUNC_5("breakpoint fired: address = 0x%x\n", VAR_9);
   FUNC_4(VAR_10, VAR_5);
   if (!VAR_10->overflow_handler)
    FUNC_3(VAR_10, VAR_9);
   goto unlock;
  }

mismatch:

  if (VAR_12->step_ctrl.enabled)
   FUNC_2(VAR_10);
unlock:
  FUNC_7();
 }


 FUNC_10(VAR_9);
}
