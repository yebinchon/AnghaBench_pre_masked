
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int config2; int config1; } ;
struct hw_perf_event_extra {int config; scalar_t__ idx; int reg; } ;
struct hw_perf_event {int config; struct hw_perf_event_extra branch_reg; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_2__ attr; struct hw_perf_event hw; } ;
struct intel_uncore_box {TYPE_1__* pmu; } ;
struct TYPE_3__ {scalar_t__ pmu_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct intel_uncore_box *VAR_4, struct perf_event *VAR_5)
{
 struct hw_perf_event *VAR_6 = &VAR_5->hw;
 struct hw_perf_event_extra *VAR_7 = &VAR_6->extra_reg;
 struct hw_perf_event_extra *VAR_8 = &VAR_6->branch_reg;


 if ((VAR_6->config & VAR_0) !=
     VAR_3)
  return 0;

 if (VAR_4->pmu->pmu_idx == 0)
  VAR_7->reg = VAR_1;
 else
  VAR_7->reg = VAR_2;
 VAR_7->idx = 0;
 VAR_7->config = VAR_5->attr.config1;
 VAR_8->config = VAR_5->attr.config2;
 return 0;
}
