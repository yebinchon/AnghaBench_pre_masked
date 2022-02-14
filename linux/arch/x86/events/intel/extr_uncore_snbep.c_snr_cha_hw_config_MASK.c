
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int config1; } ;
struct hw_perf_event_extra {int config; scalar_t__ idx; scalar_t__ reg; } ;
struct TYPE_6__ {struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_1__ attr; TYPE_2__ hw; } ;
struct intel_uncore_box {TYPE_4__* pmu; } ;
struct TYPE_8__ {int pmu_idx; TYPE_3__* type; } ;
struct TYPE_7__ {int msr_offset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct intel_uncore_box *VAR_2, struct perf_event *VAR_3)
{
 struct hw_perf_event_extra *VAR_4 = &VAR_3->hw.extra_reg;

 VAR_4->reg = VAR_1 +
      VAR_2->pmu->type->msr_offset * VAR_2->pmu->pmu_idx;
 VAR_4->config = VAR_3->attr.config1 & VAR_0;
 VAR_4->idx = 0;

 return 0;
}
