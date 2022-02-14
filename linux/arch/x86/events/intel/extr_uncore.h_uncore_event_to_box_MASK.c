
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {struct intel_uncore_box* pmu_private; } ;
struct intel_uncore_box {int dummy; } ;



__attribute__((used)) static inline struct intel_uncore_box *FUNC_0(struct perf_event *VAR_0)
{
 return VAR_0->pmu_private;
}
