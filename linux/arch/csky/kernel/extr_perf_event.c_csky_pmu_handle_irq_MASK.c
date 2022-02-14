
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct pmu_hw_events {struct perf_event** events; } ;
struct perf_sample_data {int dummy; } ;
struct hw_perf_event {int last_period; } ;
struct perf_event {struct hw_perf_event hw; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int pmu; int hw_events; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct perf_event*,struct hw_perf_event*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct perf_event*) ;
 int FUNC_6 (struct perf_event*) ;
 struct pt_regs* FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (struct perf_event*,struct perf_sample_data*,struct pt_regs*) ;
 int FUNC_10 (struct perf_sample_data*,int ,int ) ;
 struct pmu_hw_events* FUNC_11 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_5, void *VAR_6)
{
 struct perf_sample_data VAR_7;
 struct pmu_hw_events *VAR_8 = FUNC_11(VAR_4.hw_events);
 struct pt_regs *VAR_9;
 int VAR_10;




 if (!FUNC_1(VAR_1))
  return VAR_3;




 VAR_9 = FUNC_7();

 FUNC_3(&VAR_4.pmu);

 for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10) {
  struct perf_event *VAR_11 = VAR_8->events[VAR_10];
  struct hw_perf_event *VAR_12;


  if (!VAR_11)
   continue;




  if (!(FUNC_1(VAR_1) & FUNC_0(VAR_10)))
   continue;

  VAR_12 = &VAR_11->hw;
  FUNC_2(VAR_11, &VAR_11->hw);
  FUNC_10(&VAR_7, 0, VAR_12->last_period);
  FUNC_5(VAR_11);

  if (FUNC_9(VAR_11, &VAR_7, VAR_9))
   FUNC_6(VAR_11);
 }

 FUNC_4(&VAR_4.pmu);
 FUNC_8();

 return VAR_2;
}
