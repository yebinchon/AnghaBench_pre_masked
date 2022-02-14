
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int config; } ;
struct perf_event {TYPE_1__ hw; } ;
struct intel_uncore_box {TYPE_4__* pmu; } ;
struct TYPE_8__ {TYPE_3__* type; } ;
struct TYPE_7__ {TYPE_2__* freerunning; } ;
struct TYPE_6__ {int num_counters; } ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct intel_uncore_box *VAR_0,
      struct perf_event *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_1->hw.config);

 return VAR_0->pmu->type->freerunning[VAR_2].num_counters;
}
