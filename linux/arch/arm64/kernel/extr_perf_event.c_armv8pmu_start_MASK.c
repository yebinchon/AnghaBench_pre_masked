
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_hw_events {int pmu_lock; } ;
struct arm_pmu {int hw_events; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct pmu_hw_events* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct arm_pmu *VAR_1)
{
 unsigned long VAR_2;
 struct pmu_hw_events *VAR_3 = FUNC_4(VAR_1->hw_events);

 FUNC_2(&VAR_3->pmu_lock, VAR_2);

 FUNC_1(FUNC_0() | VAR_0);
 FUNC_3(&VAR_3->pmu_lock, VAR_2);
}
