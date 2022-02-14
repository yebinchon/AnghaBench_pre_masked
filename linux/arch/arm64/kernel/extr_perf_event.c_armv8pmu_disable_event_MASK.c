
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_hw_events {int pmu_lock; } ;
struct perf_event {int pmu; } ;
struct arm_pmu {int hw_events; } ;


 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct pmu_hw_events* FUNC_4 (int ) ;
 struct arm_pmu* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_0)
{
 unsigned long VAR_1;
 struct arm_pmu *VAR_2 = FUNC_5(VAR_0->pmu);
 struct pmu_hw_events *VAR_3 = FUNC_4(VAR_2->hw_events);




 FUNC_2(&VAR_3->pmu_lock, VAR_1);




 FUNC_0(VAR_0);




 FUNC_1(VAR_0);

 FUNC_3(&VAR_3->pmu_lock, VAR_1);
}
