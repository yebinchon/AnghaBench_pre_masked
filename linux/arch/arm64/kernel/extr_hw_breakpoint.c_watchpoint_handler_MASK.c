
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef void* u32 ;
struct pt_regs {int dummy; } ;
struct perf_event {int dummy; } ;
struct debug_info {int wps_disabled; int suspended_step; scalar_t__ bps_disabled; } ;
struct arch_hw_breakpoint_ctrl {int dummy; } ;
struct arch_hw_breakpoint {unsigned long trigger; } ;
struct TYPE_4__ {struct debug_info debug; } ;
struct TYPE_5__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct arch_hw_breakpoint* FUNC_0 (struct perf_event*) ;
 TYPE_2__* VAR_12 ;
 int FUNC_1 (void*,struct arch_hw_breakpoint_ctrl*) ;
 scalar_t__ FUNC_2 (unsigned long,scalar_t__,struct arch_hw_breakpoint_ctrl*) ;
 int FUNC_3 (struct perf_event*) ;
 scalar_t__ FUNC_4 (struct perf_event*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct pt_regs*) ;
 int FUNC_7 (struct perf_event*,struct pt_regs*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 void* FUNC_10 (int ,int) ;
 int VAR_13 ;
 scalar_t__ FUNC_11 (int ) ;
 void* FUNC_12 (int *) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (TYPE_2__*) ;
 scalar_t__ FUNC_15 (struct pt_regs*) ;
 int * VAR_14 ;

__attribute__((used)) static int FUNC_16(unsigned long VAR_15, unsigned int VAR_16,
         struct pt_regs *VAR_17)
{
 int VAR_18, VAR_19 = 0, *VAR_20, VAR_21, VAR_22 = 0;
 u64 VAR_23 = -1, VAR_24;
 u32 VAR_25;
 u64 VAR_26;
 struct perf_event *VAR_27, **VAR_28;
 struct debug_info *VAR_29;
 struct arch_hw_breakpoint *VAR_30;
 struct arch_hw_breakpoint_ctrl VAR_31;

 VAR_28 = FUNC_12(VAR_14);
 VAR_29 = &VAR_12->thread.debug;





 FUNC_8();
 for (VAR_18 = 0; VAR_18 < VAR_11; ++VAR_18) {
  VAR_27 = VAR_28[VAR_18];
  if (VAR_27 == ((void*)0))
   continue;





  VAR_21 = (VAR_16 & VAR_2) ? VAR_9 :
    VAR_8;
  if (!(VAR_21 & FUNC_3(VAR_27)))
   continue;


  VAR_26 = FUNC_10(VAR_1, VAR_18);
  VAR_25 = FUNC_10(VAR_0, VAR_18);
  FUNC_1(VAR_25, &VAR_31);
  VAR_24 = FUNC_2(VAR_15, VAR_26, &VAR_31);
  if (VAR_24 < VAR_23) {
   VAR_23 = VAR_24;
   VAR_22 = VAR_18;
  }

  if (VAR_24 != 0)
   continue;

  VAR_30 = FUNC_0(VAR_27);
  VAR_30->trigger = VAR_15;
  FUNC_7(VAR_27, VAR_17);


  if (FUNC_4(VAR_27))
   VAR_19 = 1;
 }
 if (VAR_23 > 0 && VAR_23 != -1) {

  VAR_27 = VAR_28[VAR_22];
  VAR_30 = FUNC_0(VAR_27);
  VAR_30->trigger = VAR_15;
  FUNC_7(VAR_27, VAR_17);


  if (FUNC_4(VAR_27))
   VAR_19 = 1;
 }
 FUNC_9();

 if (!VAR_19)
  return 0;





 FUNC_13(VAR_0, VAR_6, 0);

 if (FUNC_15(VAR_17)) {
  VAR_29->wps_disabled = 1;


  if (VAR_29->bps_disabled)
   return 0;

  if (FUNC_11(VAR_10))
   VAR_29->suspended_step = 1;
  else
   FUNC_14(VAR_12);
 } else {
  FUNC_13(VAR_0, VAR_7, 0);
  VAR_20 = FUNC_12(&VAR_13);

  if (*VAR_20 != VAR_4)
   return 0;

  if (FUNC_5()) {
   *VAR_20 = VAR_5;
  } else {
   *VAR_20 = VAR_3;
   FUNC_6(VAR_17);
  }
 }

 return 0;
}
