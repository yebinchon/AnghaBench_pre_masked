
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_hw_events {struct perf_event** events; } ;
struct hw_perf_event {int idx; int state; } ;
struct perf_event {int pmu; struct hw_perf_event hw; } ;
struct nds32_pmu {int (* get_event_idx ) (struct pmu_hw_events*,struct perf_event*) ;int (* disable ) (struct perf_event*) ;struct pmu_hw_events* (* get_hw_events ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct perf_event*,int ) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct pmu_hw_events* FUNC_4 () ;
 int FUNC_5 (struct pmu_hw_events*,struct perf_event*) ;
 int FUNC_6 (struct perf_event*) ;
 struct nds32_pmu* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct perf_event *VAR_4, int VAR_5)
{
 struct nds32_pmu *VAR_6 = FUNC_7(VAR_4->pmu);
 struct pmu_hw_events *VAR_7 = VAR_6->get_hw_events();
 struct hw_perf_event *VAR_8 = &VAR_4->hw;
 int VAR_9;
 int VAR_10 = 0;

 FUNC_2(VAR_4->pmu);


 VAR_9 = VAR_6->get_event_idx(VAR_7, VAR_4);
 if (VAR_9 < 0) {
  VAR_10 = VAR_9;
  goto out;
 }





 VAR_4->hw.idx = VAR_9;
 VAR_6->disable(VAR_4);
 VAR_7->events[VAR_9] = VAR_4;

 VAR_8->state = VAR_2 | VAR_3;
 if (VAR_5 & VAR_1)
  FUNC_0(VAR_4, VAR_0);


 FUNC_1(VAR_4);

out:
 FUNC_3(VAR_4->pmu);
 return VAR_10;
}
