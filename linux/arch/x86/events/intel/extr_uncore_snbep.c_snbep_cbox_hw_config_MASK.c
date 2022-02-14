
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int config1; } ;
struct hw_perf_event_extra {int config; int idx; scalar_t__ reg; } ;
struct TYPE_6__ {int config; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_2__ attr; TYPE_3__ hw; } ;
struct intel_uncore_box {TYPE_1__* pmu; } ;
struct extra_reg {int event; int config_mask; int idx; scalar_t__ msr; } ;
struct TYPE_4__ {int pmu_idx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct extra_reg* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct intel_uncore_box *VAR_3, struct perf_event *VAR_4)
{
 struct hw_perf_event_extra *VAR_5 = &VAR_4->hw.extra_reg;
 struct extra_reg *VAR_6;
 int VAR_7 = 0;

 for (VAR_6 = VAR_2; VAR_6->msr; VAR_6++) {
  if (VAR_6->event != (VAR_4->hw.config & VAR_6->config_mask))
   continue;
  VAR_7 |= VAR_6->idx;
 }

 if (VAR_7) {
  VAR_5->reg = VAR_0 +
   VAR_1 * VAR_3->pmu->pmu_idx;
  VAR_5->config = VAR_4->attr.config1 & FUNC_0(VAR_7);
  VAR_5->idx = VAR_7;
 }
 return 0;
}
