
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int config1; } ;
struct hw_perf_event_extra {int config; int idx; scalar_t__ reg; } ;
struct TYPE_4__ {int config; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_3__ attr; TYPE_1__ hw; } ;
struct intel_uncore_box {TYPE_2__* pmu; } ;
struct extra_reg {int event; int config_mask; int idx; scalar_t__ msr; } ;
struct TYPE_5__ {int pmu_idx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 struct extra_reg* VAR_5 ;

__attribute__((used)) static int FUNC_1(struct intel_uncore_box *VAR_6,
        struct perf_event *VAR_7)
{
 struct hw_perf_event_extra *VAR_8 = &VAR_7->hw.extra_reg;
 struct extra_reg *VAR_9;
 int VAR_10 = 0;

 for (VAR_9 = VAR_5; VAR_9->msr; VAR_9++) {
  if (VAR_9->event != (VAR_7->hw.config & VAR_9->config_mask))
   continue;
  VAR_10 |= VAR_9->idx;
 }

 if (VAR_10) {
  VAR_8->reg = VAR_0 +
       VAR_1 * VAR_6->pmu->pmu_idx;
  VAR_8->config = VAR_7->attr.config1 & FUNC_0(VAR_10);

  VAR_8->config |= VAR_4;
  VAR_8->config |= VAR_2;
  VAR_8->config |= VAR_3;
  VAR_8->idx = VAR_10;
 }
 return 0;
}
