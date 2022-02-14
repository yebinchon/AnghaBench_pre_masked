
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct pt_regs {int dummy; } ;
struct perf_event {int dummy; } ;
struct debug_info {int bps_disabled; int suspended_step; scalar_t__ wps_disabled; } ;
struct arch_hw_breakpoint_ctrl {int len; } ;
struct TYPE_7__ {int trigger; } ;
struct TYPE_5__ {struct debug_info debug; } ;
struct TYPE_6__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 TYPE_4__* FUNC_0 (struct perf_event*) ;
 TYPE_2__* VAR_10 ;
 int FUNC_1 (void*,struct arch_hw_breakpoint_ctrl*) ;
 int FUNC_2 (struct pt_regs*) ;
 scalar_t__ FUNC_3 (struct perf_event*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct pt_regs*) ;
 int FUNC_6 (struct perf_event*,struct pt_regs*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 void* FUNC_9 (int ,int) ;
 int VAR_11 ;
 scalar_t__ FUNC_10 (int ) ;
 void* FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_15(unsigned long VAR_12, unsigned int VAR_13,
         struct pt_regs *VAR_14)
{
 int VAR_15, VAR_16 = 0, *VAR_17;
 u32 VAR_18;
 u64 VAR_19, VAR_20;
 struct perf_event *VAR_21, **VAR_22;
 struct debug_info *VAR_23;
 struct arch_hw_breakpoint_ctrl VAR_24;

 VAR_22 = FUNC_11(VAR_8);
 VAR_19 = FUNC_2(VAR_14);
 VAR_23 = &VAR_10->thread.debug;

 for (VAR_15 = 0; VAR_15 < VAR_9; ++VAR_15) {
  FUNC_7();

  VAR_21 = VAR_22[VAR_15];

  if (VAR_21 == ((void*)0))
   goto unlock;


  VAR_20 = FUNC_9(VAR_1, VAR_15);
  if (VAR_20 != (VAR_19 & ~0x3))
   goto unlock;


  VAR_18 = FUNC_9(VAR_0, VAR_15);
  FUNC_1(VAR_18, &VAR_24);
  if (!((1 << (VAR_19 & 0x3)) & VAR_24.len))
   goto unlock;

  FUNC_0(VAR_21)->trigger = VAR_19;
  FUNC_6(VAR_21, VAR_14);


  if (FUNC_3(VAR_21))
   VAR_16 = 1;
unlock:
  FUNC_8();
 }

 if (!VAR_16)
  return 0;

 if (FUNC_14(VAR_14)) {
  VAR_23->bps_disabled = 1;
  FUNC_12(VAR_0, VAR_5, 0);


  if (VAR_23->wps_disabled)
   return 0;

  if (FUNC_10(VAR_7))
   VAR_23->suspended_step = 1;
  else
   FUNC_13(VAR_10);
 } else {
  FUNC_12(VAR_0, VAR_6, 0);
  VAR_17 = FUNC_11(&VAR_11);

  if (*VAR_17 != VAR_3)
   return 0;

  if (FUNC_4()) {
   *VAR_17 = VAR_4;
  } else {
   *VAR_17 = VAR_2;
   FUNC_5(VAR_14);
  }
 }

 return 0;
}
