
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct intel_uncore_box {TYPE_2__* pmu; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int num_freerunning_types; } ;



__attribute__((used)) static inline int FUNC_0(struct intel_uncore_box *VAR_0,
            struct perf_event *VAR_1)
{
 return VAR_0->pmu->type->num_freerunning_types;
}
