
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_hw_events {int pmu_lock; } ;
struct hw_perf_event {int idx; unsigned int config_base; } ;
struct perf_event {int attr; int pmu; struct hw_perf_event hw; } ;
struct nds32_pmu {scalar_t__ (* set_event_filter ) (struct hw_perf_event*,int *) ;struct pmu_hw_events* (* get_hw_events ) () ;} ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct nds32_pmu*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,unsigned int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 struct pmu_hw_events* FUNC_10 () ;
 scalar_t__ FUNC_11 (struct hw_perf_event*,int *) ;
 struct nds32_pmu* FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct perf_event *VAR_0)
{
 unsigned long VAR_1;
 unsigned int VAR_2 = 0;
 struct hw_perf_event *VAR_3 = &VAR_0->hw;
 struct nds32_pmu *VAR_4 = FUNC_12(VAR_0->pmu);
 struct pmu_hw_events *VAR_5 = VAR_4->get_hw_events();
 int VAR_6 = VAR_3->idx;

 if (!FUNC_1(VAR_4, VAR_6)) {
  FUNC_6("CPU enabling wrong pfm counter IRQ enable\n");
  return;
 }





 FUNC_8(&VAR_5->pmu_lock, VAR_1);




 FUNC_2(VAR_6);




 if ((!VAR_4->set_event_filter ||
      VAR_4->set_event_filter(VAR_3, &VAR_0->attr)) &&
      FUNC_0(&VAR_0->attr)) {
  FUNC_7
  ("NDS32 performance counters do not support mode exclusion\n");
  VAR_3->config_base = 0;
 }

 VAR_2 = VAR_3->config_base;
 FUNC_5(VAR_6, VAR_2);




 FUNC_4(VAR_6);




 FUNC_3(VAR_6);

 FUNC_9(&VAR_5->pmu_lock, VAR_1);
}
