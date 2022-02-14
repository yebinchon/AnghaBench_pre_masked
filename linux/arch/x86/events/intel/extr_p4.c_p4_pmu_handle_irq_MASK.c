
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct pt_regs {int dummy; } ;
struct perf_sample_data {int dummy; } ;
struct hw_perf_event {int idx; int last_period; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cpu_hw_events {struct perf_event** events; int running; int active_mask; } ;
struct TYPE_2__ {int num_counters; int cntval_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hw_perf_event*) ;
 scalar_t__ FUNC_5 (struct perf_event*,struct perf_sample_data*,struct pt_regs*) ;
 int FUNC_6 (struct perf_sample_data*,int ,int ) ;
 int FUNC_7 (int,int ) ;
 struct cpu_hw_events* FUNC_8 (int *) ;
 int FUNC_9 (struct perf_event*) ;
 unsigned long long FUNC_10 (struct perf_event*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_11 (struct perf_event*,int ) ;

__attribute__((used)) static int FUNC_12(struct pt_regs *VAR_5)
{
 struct perf_sample_data VAR_6;
 struct cpu_hw_events *VAR_7;
 struct perf_event *VAR_8;
 struct hw_perf_event *VAR_9;
 int VAR_10, VAR_11 = 0;
 u64 VAR_12;

 VAR_7 = FUNC_8(&VAR_3);

 for (VAR_10 = 0; VAR_10 < VAR_4.num_counters; VAR_10++) {
  int VAR_13;

  if (!FUNC_7(VAR_10, VAR_7->active_mask)) {

   if (FUNC_1(VAR_10, VAR_7->running))
    VAR_11++;
   continue;
  }

  VAR_8 = VAR_7->events[VAR_10];
  VAR_9 = &VAR_8->hw;

  FUNC_0(VAR_9->idx != VAR_10);


  VAR_13 = FUNC_4(VAR_9);

  VAR_12 = FUNC_10(VAR_8);
  if (!VAR_13 && (VAR_12 & (1ULL << (VAR_4.cntval_bits - 1))))
   continue;

  VAR_11 += VAR_13;


  FUNC_6(&VAR_6, 0, VAR_9->last_period);

  if (!FUNC_9(VAR_8))
   continue;


  if (FUNC_5(VAR_8, &VAR_6, VAR_5))
   FUNC_11(VAR_8, 0);
 }

 if (VAR_11)
  FUNC_3(VAR_2);
 FUNC_2(VAR_1, VAR_0);

 return VAR_11;
}
