
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct perf_sample_data {int period; } ;
struct hw_perf_event {int last_period; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cpu_hw_events {struct perf_event** events; } ;


 int FUNC_0 (struct perf_event*,struct hw_perf_event*,int) ;
 int FUNC_1 (struct perf_event*,struct hw_perf_event*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct perf_event*,struct perf_sample_data*,struct pt_regs*) ;

__attribute__((used)) static void FUNC_4(struct cpu_hw_events *VAR_0,
        int VAR_1, struct perf_sample_data *VAR_2,
        struct pt_regs *VAR_3)
{
 struct perf_event *VAR_4 = VAR_0->events[VAR_1];
 struct hw_perf_event *VAR_5 = &VAR_4->hw;

 FUNC_1(VAR_4, VAR_5, VAR_1);
 VAR_2->period = VAR_4->hw.last_period;
 if (!FUNC_0(VAR_4, VAR_5, VAR_1))
  return;

 if (FUNC_3(VAR_4, VAR_2, VAR_3))
  FUNC_2(VAR_1);
}
