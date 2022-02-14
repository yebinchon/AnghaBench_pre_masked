
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {int * pmu; } ;
struct intel_uncore_box {TYPE_1__* pmu; } ;
struct TYPE_2__ {int pmu; } ;



__attribute__((used)) static bool FUNC_0(struct intel_uncore_box *VAR_0, struct perf_event *VAR_1)
{
 return &VAR_0->pmu->pmu == VAR_1->pmu;
}
