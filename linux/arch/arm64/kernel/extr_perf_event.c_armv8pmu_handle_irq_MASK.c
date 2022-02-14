
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
struct arm_pmu {int num_events; int (* disable ) (struct perf_event*) ;int hw_events; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct arm_pmu*) ;
 int FUNC_6 (struct arm_pmu*) ;
 struct pt_regs* FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (struct perf_event*,struct perf_sample_data*,struct pt_regs*) ;
 int FUNC_10 (struct perf_sample_data*,int ,int ) ;
 int FUNC_11 (struct perf_event*) ;
 struct pmu_hw_events* FUNC_12 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_13(struct arm_pmu *VAR_2)
{
 u32 VAR_3;
 struct perf_sample_data VAR_4;
 struct pmu_hw_events *VAR_5 = FUNC_12(VAR_2->hw_events);
 struct pt_regs *VAR_6;
 int VAR_7;




 VAR_3 = FUNC_3();




 if (!FUNC_4(VAR_3))
  return VAR_1;




 VAR_6 = FUNC_7();





 FUNC_6(VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_2->num_events; ++VAR_7) {
  struct perf_event *VAR_8 = VAR_5->events[VAR_7];
  struct hw_perf_event *VAR_9;


  if (!VAR_8)
   continue;





  if (!FUNC_2(VAR_3, VAR_7))
   continue;

  VAR_9 = &VAR_8->hw;
  FUNC_1(VAR_8);
  FUNC_10(&VAR_4, 0, VAR_9->last_period);
  if (!FUNC_0(VAR_8))
   continue;

  if (FUNC_9(VAR_8, &VAR_4, VAR_6))
   VAR_2->disable(VAR_8);
 }
 FUNC_5(VAR_2);
 FUNC_8();

 return VAR_0;
}
