
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_hw_events {int pmu_lock; } ;
struct hw_perf_event {int idx; } ;
struct perf_event {int pmu; struct hw_perf_event hw; } ;
struct nds32_pmu {struct pmu_hw_events* (* get_hw_events ) () ;} ;


 int FUNC_0 (struct nds32_pmu*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct pmu_hw_events* FUNC_6 () ;
 struct nds32_pmu* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct perf_event *VAR_0)
{
 unsigned long VAR_1;
 struct hw_perf_event *VAR_2 = &VAR_0->hw;
 struct nds32_pmu *VAR_3 = FUNC_7(VAR_0->pmu);
 struct pmu_hw_events *VAR_4 = VAR_3->get_hw_events();
 int VAR_5 = VAR_2->idx;

 if (!FUNC_0(VAR_3, VAR_5)) {
  FUNC_3("CPU disabling wrong pfm counter IRQ enable %d\n", VAR_5);
  return;
 }




 FUNC_4(&VAR_4->pmu_lock, VAR_1);




 FUNC_1(VAR_5);




 FUNC_2(VAR_5);

 FUNC_5(&VAR_4->pmu_lock, VAR_1);
}
