
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmu_hw_events {int dummy; } ;
struct pmu {int dummy; } ;
struct TYPE_2__ {int enable_on_exec; } ;
struct perf_event {scalar_t__ state; TYPE_1__ attr; struct pmu* pmu; } ;
struct nds32_pmu {scalar_t__ (* get_event_idx ) (struct pmu_hw_events*,struct perf_event*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct perf_event*) ;
 scalar_t__ FUNC_1 (struct pmu_hw_events*,struct perf_event*) ;
 struct nds32_pmu* FUNC_2 (struct pmu*) ;

__attribute__((used)) static int
FUNC_3(struct pmu *VAR_1, struct pmu_hw_events *VAR_2,
        struct perf_event *VAR_3)
{
 struct nds32_pmu *VAR_4 = FUNC_2(VAR_3->pmu);

 if (FUNC_0(VAR_3))
  return 1;

 if (VAR_3->pmu != VAR_1)
  return 0;

 if (VAR_3->state < VAR_0)
  return 1;

 if (VAR_3->state == VAR_0 && !VAR_3->attr.enable_on_exec)
  return 1;

 return VAR_4->get_event_idx(VAR_2, VAR_3) >= 0;
}
