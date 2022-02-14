
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int config; } ;
struct perf_event {TYPE_3__ hw; } ;
struct intel_uncore_pmu {int pmu_idx; TYPE_2__* type; } ;
struct intel_uncore_box {struct intel_uncore_pmu* pmu; } ;
struct TYPE_5__ {TYPE_1__* freerunning; } ;
struct TYPE_4__ {unsigned int counter_base; unsigned int counter_offset; int box_offset; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static inline
unsigned int FUNC_2(struct intel_uncore_box *VAR_0,
     struct perf_event *VAR_1)
{
 unsigned int VAR_2 = FUNC_1(VAR_1->hw.config);
 unsigned int VAR_3 = FUNC_0(VAR_1->hw.config);
 struct intel_uncore_pmu *VAR_4 = VAR_0->pmu;

 return VAR_4->type->freerunning[VAR_2].counter_base +
        VAR_4->type->freerunning[VAR_2].counter_offset * VAR_3 +
        VAR_4->type->freerunning[VAR_2].box_offset * VAR_4->pmu_idx;
}
