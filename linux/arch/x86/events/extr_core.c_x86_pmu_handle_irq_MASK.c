
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct pt_regs {int dummy; } ;
struct perf_sample_data {int dummy; } ;
struct TYPE_3__ {int last_period; } ;
struct perf_event {TYPE_1__ hw; } ;
struct cpu_hw_events {struct perf_event** events; int active_mask; } ;
struct TYPE_4__ {int num_counters; int cntval_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct perf_event*,struct perf_sample_data*,struct pt_regs*) ;
 int FUNC_3 (struct perf_sample_data*,int ,int ) ;
 int FUNC_4 (int,int ) ;
 struct cpu_hw_events* FUNC_5 (int *) ;
 int FUNC_6 (struct perf_event*) ;
 unsigned long long FUNC_7 (struct perf_event*) ;
 TYPE_2__ VAR_4 ;
 int FUNC_8 (struct perf_event*,int ) ;

int FUNC_9(struct pt_regs *VAR_5)
{
 struct perf_sample_data VAR_6;
 struct cpu_hw_events *VAR_7;
 struct perf_event *VAR_8;
 int VAR_9, VAR_10 = 0;
 u64 VAR_11;

 VAR_7 = FUNC_5(&VAR_3);
 FUNC_0(VAR_1, VAR_0);

 for (VAR_9 = 0; VAR_9 < VAR_4.num_counters; VAR_9++) {
  if (!FUNC_4(VAR_9, VAR_7->active_mask))
   continue;

  VAR_8 = VAR_7->events[VAR_9];

  VAR_11 = FUNC_7(VAR_8);
  if (VAR_11 & (1ULL << (VAR_4.cntval_bits - 1)))
   continue;




  VAR_10++;
  FUNC_3(&VAR_6, 0, VAR_8->hw.last_period);

  if (!FUNC_6(VAR_8))
   continue;

  if (FUNC_2(VAR_8, &VAR_6, VAR_5))
   FUNC_8(VAR_8, 0);
 }

 if (VAR_10)
  FUNC_1(VAR_2);

 return VAR_10;
}
