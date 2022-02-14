
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event_extra {int alloc; } ;
struct TYPE_2__ {struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_1__ hw; } ;
struct intel_uncore_extra_reg {int ref; } ;
struct intel_uncore_box {struct intel_uncore_extra_reg* shared_regs; } ;


 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (struct intel_uncore_box*) ;

__attribute__((used)) static void FUNC_2(struct intel_uncore_box *VAR_0, struct perf_event *VAR_1)
{
 struct hw_perf_event_extra *VAR_2 = &VAR_1->hw.extra_reg;
 struct intel_uncore_extra_reg *VAR_3 = &VAR_0->shared_regs[0];
 int VAR_4;

 if (FUNC_1(VAR_0))
  return;

 for (VAR_4 = 0; VAR_4 < 5; VAR_4++) {
  if (VAR_2->alloc & (0x1 << VAR_4))
   FUNC_0(1 << (VAR_4 * 6), &VAR_3->ref);
 }
 VAR_2->alloc = 0;
}
