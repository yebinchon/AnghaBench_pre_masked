
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event_extra {int alloc; int idx; } ;
struct TYPE_2__ {struct hw_perf_event_extra branch_reg; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_1__ hw; } ;
struct intel_uncore_box {int dummy; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct intel_uncore_box*,int ) ;
 scalar_t__ FUNC_2 (struct intel_uncore_box*) ;

__attribute__((used)) static void FUNC_3(struct intel_uncore_box *VAR_0, struct perf_event *VAR_1)
{
 struct hw_perf_event_extra *VAR_2 = &VAR_1->hw.extra_reg;
 struct hw_perf_event_extra *VAR_3 = &VAR_1->hw.branch_reg;

 if (FUNC_2(VAR_0))
  return;

 if (VAR_2->alloc & 0x1)
  FUNC_1(VAR_0, FUNC_0(VAR_2->idx, 0, 8));
 if (VAR_2->alloc & 0x2)
  FUNC_1(VAR_0, FUNC_0(VAR_2->idx, 1, 8));
 VAR_2->alloc = 0;

 if (VAR_3->alloc) {
  FUNC_1(VAR_0, VAR_3->idx);
  VAR_3->alloc = 0;
 }
}
