
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u32 ;
struct pt_regs {int dummy; } ;
struct TYPE_3__ {unsigned long bp_addr; } ;
struct perf_event {TYPE_1__ attr; } ;
struct arch_hw_breakpoint_ctrl {int len; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct arch_hw_breakpoint {unsigned long trigger; TYPE_2__ ctrl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct arch_hw_breakpoint* FUNC_1 (struct perf_event*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (unsigned long,struct arch_hw_breakpoint_ctrl*) ;
 int FUNC_4 (struct perf_event*,int ) ;
 int FUNC_5 (struct perf_event*) ;
 int FUNC_6 (struct pt_regs*) ;
 scalar_t__ FUNC_7 (struct perf_event*) ;
 int FUNC_8 (struct perf_event*,struct pt_regs*) ;
 int FUNC_9 (char*,unsigned long) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 unsigned long FUNC_12 (scalar_t__) ;
 struct perf_event** FUNC_13 (int ) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_14(unsigned long VAR_10, unsigned int VAR_11,
          struct pt_regs *VAR_12)
{
 int VAR_13, VAR_14;
 u32 VAR_15, VAR_16, VAR_17;
 struct perf_event *VAR_18, **VAR_19;
 struct arch_hw_breakpoint *VAR_20;
 struct arch_hw_breakpoint_ctrl VAR_21;

 VAR_19 = FUNC_13(VAR_9);

 for (VAR_13 = 0; VAR_13 < VAR_7; ++VAR_13) {
  FUNC_10();

  VAR_18 = VAR_19[VAR_13];

  if (VAR_18 == ((void*)0))
   goto unlock;

  VAR_20 = FUNC_1(VAR_18);






  if (VAR_8 < VAR_3) {
   FUNC_0(VAR_13 > 0);
   VAR_20->trigger = VAR_18->attr.bp_addr;
  } else {
   if (VAR_20->ctrl.len == VAR_2)
    VAR_17 = 0x7;
   else
    VAR_17 = 0x3;


   VAR_15 = FUNC_12(VAR_1 + VAR_13);
   if (VAR_15 != (VAR_10 & ~VAR_17))
    goto unlock;


   VAR_16 = FUNC_12(VAR_0 + VAR_13);
   FUNC_3(VAR_16, &VAR_21);
   if (!((1 << (VAR_10 & VAR_17)) & VAR_21.len))
    goto unlock;


   if (FUNC_2()) {
    VAR_14 = (VAR_11 & VAR_4) ?
       VAR_6 : VAR_5;
    if (!(VAR_14 & FUNC_5(VAR_18)))
     goto unlock;
   }


   VAR_20->trigger = VAR_10;
  }

  FUNC_9("watchpoint fired: address = 0x%x\n", VAR_20->trigger);
  FUNC_8(VAR_18, VAR_12);






  if (FUNC_7(VAR_18))
   FUNC_4(VAR_18, FUNC_6(VAR_12));

unlock:
  FUNC_11();
 }
}
