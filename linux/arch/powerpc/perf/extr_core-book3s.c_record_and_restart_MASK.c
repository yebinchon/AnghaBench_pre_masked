
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct pt_regs {int dummy; } ;
struct perf_sample_data {int weight; int data_src; int * br_stack; int addr; } ;
struct TYPE_5__ {int sample_type; } ;
struct TYPE_4__ {scalar_t__ sample_period; int state; scalar_t__ last_period; int period_left; int prev_count; int idx; } ;
struct perf_event {TYPE_2__ attr; TYPE_1__ hw; int count; } ;
struct cpu_hw_events {int bhrb_stack; } ;
typedef scalar_t__ s64 ;
struct TYPE_6__ {int (* get_mem_weight ) (int *) ;int flags; int (* get_mem_data_src ) (int *,int ,struct pt_regs*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,unsigned long) ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (struct perf_event*,struct perf_sample_data*,struct pt_regs*) ;
 int FUNC_5 (struct perf_event*) ;
 int FUNC_6 (struct pt_regs*,int *) ;
 int FUNC_7 (struct perf_sample_data*,unsigned long long,scalar_t__) ;
 int FUNC_8 (struct cpu_hw_events*) ;
 int FUNC_9 (struct perf_event*,int ) ;
 TYPE_3__* VAR_7 ;
 int FUNC_10 (struct pt_regs*) ;
 int FUNC_11 (int *,int ,struct pt_regs*) ;
 int FUNC_12 (int *) ;
 struct cpu_hw_events* FUNC_13 (int *) ;
 int FUNC_14 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_15(struct perf_event *VAR_8, unsigned long VAR_9,
          struct pt_regs *VAR_10)
{
 u64 VAR_11 = VAR_8->hw.sample_period;
 s64 VAR_12, VAR_13, VAR_14;
 int VAR_15 = 0;

 if (VAR_8->hw.state & VAR_0) {
  FUNC_14(VAR_8->hw.idx, 0);
  return;
 }


 VAR_12 = FUNC_2(&VAR_8->hw.prev_count);
 VAR_13 = FUNC_0(VAR_12, VAR_9);
 FUNC_1(VAR_13, &VAR_8->count);





 VAR_9 = 0;
 VAR_14 = FUNC_2(&VAR_8->hw.period_left) - VAR_13;
 if (VAR_13 == 0)
  VAR_14++;
 if (VAR_11) {
  if (VAR_14 <= 0) {
   VAR_14 += VAR_11;
   if (VAR_14 <= 0)
    VAR_14 = VAR_11;
   VAR_15 = FUNC_10(VAR_10);
   VAR_8->hw.last_period = VAR_8->hw.sample_period;
  }
  if (VAR_14 < 0x80000000LL)
   VAR_9 = 0x80000000LL - VAR_14;
 }

 FUNC_14(VAR_8->hw.idx, VAR_9);
 FUNC_3(&VAR_8->hw.prev_count, VAR_9);
 FUNC_3(&VAR_8->hw.period_left, VAR_14);
 FUNC_5(VAR_8);




 if (VAR_15) {
  struct perf_sample_data VAR_16;

  FUNC_7(&VAR_16, ~0ULL, VAR_8->hw.last_period);

  if (VAR_8->attr.sample_type &
      (VAR_1 | VAR_4))
   FUNC_6(VAR_10, &VAR_16.addr);

  if (VAR_8->attr.sample_type & VAR_2) {
   struct cpu_hw_events *VAR_17;
   VAR_17 = FUNC_13(&VAR_6);
   FUNC_8(VAR_17);
   VAR_16.br_stack = &VAR_17->bhrb_stack;
  }

  if (VAR_8->attr.sample_type & VAR_3 &&
      VAR_7->get_mem_data_src)
   VAR_7->get_mem_data_src(&VAR_16.data_src, VAR_7->flags, VAR_10);

  if (VAR_8->attr.sample_type & VAR_5 &&
      VAR_7->get_mem_weight)
   VAR_7->get_mem_weight(&VAR_16.weight);

  if (FUNC_4(VAR_8, &VAR_16, VAR_10))
   FUNC_9(VAR_8, 0);
 }
}
