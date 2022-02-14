
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct perf_sample_data {int dummy; } ;
struct hw_perf_event {int last_period; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cpu_hw_events {int n_events; int* current_idx; int idx_mask; struct perf_event** event; } ;
struct TYPE_2__ {unsigned long num_pmcs; scalar_t__* pmc_max_period; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct perf_event*,struct hw_perf_event*,int) ;
 int FUNC_2 (struct perf_event*,struct hw_perf_event*,int,scalar_t__) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (struct perf_event*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (struct perf_event*,struct perf_sample_data*,struct pt_regs*) ;
 int FUNC_5 (struct perf_sample_data*,int ,int ) ;
 int FUNC_6 (char*,int) ;
 struct cpu_hw_events* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_6,
     struct pt_regs *VAR_7)
{
 struct cpu_hw_events *VAR_8;
 struct perf_sample_data VAR_9;
 struct perf_event *VAR_10;
 struct hw_perf_event *VAR_11;
 int VAR_12, VAR_13;

 FUNC_0(VAR_5);
 VAR_8 = FUNC_7(&VAR_3);






 FUNC_9(VAR_0, VAR_8->idx_mask);


 if (FUNC_8(VAR_6 >= VAR_2->num_pmcs)) {

  VAR_4++;
  FUNC_6("PMI: silly index %ld\n", VAR_6);
  FUNC_9(VAR_1, VAR_8->idx_mask);
  return;
 }

 VAR_12 = VAR_6;

 for (VAR_13 = 0; VAR_13 < VAR_8->n_events; VAR_13++) {
  if (VAR_8->current_idx[VAR_13] == VAR_12)
   break;
 }

 if (FUNC_8(VAR_13 == VAR_8->n_events)) {

  FUNC_9(VAR_1, VAR_8->idx_mask);
  return;
 }

 VAR_10 = VAR_8->event[VAR_13];

 if (FUNC_8(!VAR_10)) {

  VAR_4++;
  FUNC_6("PMI: No event at index %d!\n", VAR_12);
  FUNC_9(VAR_1, VAR_8->idx_mask);
  return;
 }

 VAR_11 = &VAR_10->hw;
 FUNC_2(VAR_10, VAR_11, VAR_12, VAR_2->pmc_max_period[VAR_12]+1);
 FUNC_5(&VAR_9, 0, VAR_11->last_period);

 if (FUNC_1(VAR_10, VAR_11, VAR_12)) {
  if (FUNC_4(VAR_10, &VAR_9, VAR_7)) {



   FUNC_3(VAR_10, 0);
  }
 }
 FUNC_9(VAR_1, VAR_8->idx_mask);

 return;
}
