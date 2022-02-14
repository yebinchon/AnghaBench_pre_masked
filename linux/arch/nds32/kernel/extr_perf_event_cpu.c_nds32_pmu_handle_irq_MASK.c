
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int dummy; } ;
struct pmu_hw_events {struct perf_event** events; } ;
struct perf_sample_data {int dummy; } ;
struct hw_perf_event {int last_period; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct nds32_pmu {int num_events; int (* disable ) (struct perf_event*) ;struct pmu_hw_events* (* get_hw_events ) () ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct pt_regs* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct perf_event*) ;
 int FUNC_6 (struct perf_event*) ;
 int FUNC_7 (struct nds32_pmu*) ;
 int FUNC_8 (struct nds32_pmu*) ;
 scalar_t__ FUNC_9 (struct perf_event*,struct perf_sample_data*,struct pt_regs*) ;
 int FUNC_10 (struct perf_sample_data*,int ,int ) ;
 struct pmu_hw_events* FUNC_11 () ;
 int FUNC_12 (struct perf_event*) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_2, void *VAR_3)
{
 u32 VAR_4;
 struct perf_sample_data VAR_5;
 struct nds32_pmu *VAR_6 = (struct nds32_pmu *)VAR_3;
 struct pmu_hw_events *VAR_7 = VAR_6->get_hw_events();
 struct pt_regs *VAR_8;
 int VAR_9;



 VAR_4 = FUNC_3();




 if (!FUNC_4(VAR_4))
  return VAR_1;




 VAR_8 = FUNC_0();

 FUNC_8(VAR_6);
 for (VAR_9 = 0; VAR_9 < VAR_6->num_events; ++VAR_9) {
  struct perf_event *VAR_10 = VAR_7->events[VAR_9];
  struct hw_perf_event *VAR_11;


  if (!VAR_10)
   continue;





  if (!FUNC_2(VAR_4, VAR_9))
   continue;

  VAR_11 = &VAR_10->hw;
  FUNC_6(VAR_10);
  FUNC_10(&VAR_5, 0, VAR_11->last_period);
  if (!FUNC_5(VAR_10))
   continue;

  if (FUNC_9(VAR_10, &VAR_5, VAR_8))
   VAR_6->disable(VAR_10);
 }
 FUNC_7(VAR_6);







 FUNC_1();

 return VAR_0;
}
