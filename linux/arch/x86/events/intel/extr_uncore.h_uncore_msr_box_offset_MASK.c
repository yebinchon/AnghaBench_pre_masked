
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_uncore_pmu {size_t pmu_idx; TYPE_1__* type; } ;
struct intel_uncore_box {struct intel_uncore_pmu* pmu; } ;
struct TYPE_2__ {int* msr_offsets; int msr_offset; } ;



__attribute__((used)) static inline unsigned FUNC_0(struct intel_uncore_box *VAR_0)
{
 struct intel_uncore_pmu *VAR_1 = VAR_0->pmu;
 return VAR_1->type->msr_offsets ?
  VAR_1->type->msr_offsets[VAR_1->pmu_idx] :
  VAR_1->type->msr_offset * VAR_1->pmu_idx;
}
