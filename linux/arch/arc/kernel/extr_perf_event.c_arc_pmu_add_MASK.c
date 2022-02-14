
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event {int idx; int state; int prev_count; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct arc_pmu_cpu {struct perf_event** act_counter; int * used_mask; } ;
struct TYPE_2__ {int n_counters; int max_period; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,int *) ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct perf_event*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct perf_event*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct perf_event*) ;
 struct arc_pmu_cpu* FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static int FUNC_10(struct perf_event *VAR_13, int VAR_14)
{
 struct arc_pmu_cpu *VAR_15 = FUNC_7(&VAR_12);
 struct hw_perf_event *VAR_16 = &VAR_13->hw;
 int VAR_17 = VAR_16->idx;

 VAR_17 = FUNC_2(VAR_15->used_mask[0]);
 if (VAR_17 == VAR_11->n_counters)
  return -VAR_6;

 FUNC_0(VAR_17, VAR_15->used_mask);
 VAR_16->idx = VAR_17;

 FUNC_9(VAR_3, VAR_17);

 VAR_15->act_counter[VAR_17] = VAR_13;

 if (FUNC_3(VAR_13)) {

  FUNC_9(VAR_5,
         FUNC_5(VAR_11->max_period));
  FUNC_9(VAR_4,
         FUNC_8(VAR_11->max_period));
 }

 FUNC_9(VAR_0, 0);
 FUNC_9(VAR_2, 0);
 FUNC_9(VAR_1, 0);
 FUNC_4(&VAR_16->prev_count, 0);

 VAR_16->state = VAR_10 | VAR_9;
 if (VAR_14 & VAR_8)
  FUNC_1(VAR_13, VAR_7);

 FUNC_6(VAR_13);

 return 0;
}
