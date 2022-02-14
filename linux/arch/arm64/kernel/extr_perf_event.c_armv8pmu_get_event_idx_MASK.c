
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_hw_events {int used_mask; } ;
struct hw_perf_event {unsigned long config_base; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct arm_pmu {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct pmu_hw_events*,struct arm_pmu*) ;
 int FUNC_2 (struct pmu_hw_events*,struct arm_pmu*) ;
 int FUNC_3 (int,int ) ;
 struct arm_pmu* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct pmu_hw_events *VAR_3,
      struct perf_event *VAR_4)
{
 struct arm_pmu *VAR_5 = FUNC_4(VAR_4->pmu);
 struct hw_perf_event *VAR_6 = &VAR_4->hw;
 unsigned long VAR_7 = VAR_6->config_base & VAR_2;


 if (VAR_7 == VAR_1) {
  if (!FUNC_3(VAR_0, VAR_3->used_mask))
   return VAR_0;
 }




 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_3, VAR_5);
 else
  return FUNC_2(VAR_3, VAR_5);
}
