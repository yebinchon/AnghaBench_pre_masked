
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u64 ;
struct xtensa_pmu_events {struct perf_event** event; int used_mask; } ;
struct pt_regs {int dummy; } ;
struct perf_sample_data {int dummy; } ;
struct hw_perf_event {int last_period; } ;
struct perf_event {struct hw_perf_event hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int VAR_3 ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 unsigned int FUNC_2 (int ,unsigned int,unsigned int) ;
 int FUNC_3 (int ) ;
 struct pt_regs* FUNC_4 () ;
 scalar_t__ FUNC_5 (struct perf_event*,struct perf_sample_data*,struct pt_regs*) ;
 int FUNC_6 (struct perf_sample_data*,int ,int ) ;
 int FUNC_7 (int,int ) ;
 struct xtensa_pmu_events* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct perf_event*,struct hw_perf_event*,unsigned int) ;
 int FUNC_10 (struct perf_event*,struct hw_perf_event*,unsigned int) ;
 int VAR_4 ;
 int FUNC_11 (struct perf_event*,int ) ;

irqreturn_t FUNC_12(int VAR_5, void *VAR_6)
{
 irqreturn_t VAR_7 = VAR_1;
 struct xtensa_pmu_events *VAR_8 = FUNC_8(&VAR_4);
 unsigned VAR_9;

 for (VAR_9 = FUNC_1(VAR_8->used_mask, VAR_2);
      VAR_9 < VAR_2;
      VAR_9 = FUNC_2(VAR_8->used_mask, VAR_2, VAR_9 + 1)) {
  uint32_t VAR_10 = FUNC_3(FUNC_0(VAR_9));
  struct perf_event *VAR_11 = VAR_8->event[VAR_9];
  struct hw_perf_event *VAR_12 = &VAR_11->hw;
  u64 VAR_13;

  if (!(VAR_10 & VAR_3))
   continue;

  FUNC_7(VAR_10, FUNC_0(VAR_9));
  FUNC_10(VAR_11, VAR_12, VAR_9);
  VAR_13 = VAR_12->last_period;
  if (FUNC_9(VAR_11, VAR_12, VAR_9)) {
   struct perf_sample_data VAR_14;
   struct pt_regs *VAR_15 = FUNC_4();

   FUNC_6(&VAR_14, 0, VAR_13);
   if (FUNC_5(VAR_11, &VAR_14, VAR_15))
    FUNC_11(VAR_11, 0);
  }

  VAR_7 = VAR_0;
 }
 return VAR_7;
}
