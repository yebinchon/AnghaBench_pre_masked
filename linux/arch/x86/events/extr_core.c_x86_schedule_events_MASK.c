
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hw_perf_event {int idx; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct event_constraint {int flags; unsigned long* idxmsk; int weight; } ;
struct cpu_hw_events {int n_events; int txn_flags; struct event_constraint** event_constraint; struct perf_event** event_list; TYPE_1__* excl_cntrs; int is_fake; scalar_t__ n_txn; } ;
struct TYPE_4__ {int num_counters; int (* stop_scheduling ) (struct cpu_hw_events*) ;int (* put_event_constraints ) (struct cpu_hw_events*,struct perf_event*) ;int (* commit_scheduling ) (struct cpu_hw_events*,int,int) ;struct event_constraint* (* get_event_constraints ) (struct cpu_hw_events*,int,struct perf_event*) ;int (* start_scheduling ) (struct cpu_hw_events*) ;} ;
struct TYPE_3__ {int exclusive_present; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int,unsigned long*) ;
 int FUNC_4 (unsigned long*,int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (struct event_constraint**,int,int,int,int,int*) ;
 int FUNC_9 (struct cpu_hw_events*) ;
 struct event_constraint* FUNC_10 (struct cpu_hw_events*,int,struct perf_event*) ;
 int FUNC_11 (struct cpu_hw_events*,int,int) ;
 int FUNC_12 (struct cpu_hw_events*,struct perf_event*) ;
 int FUNC_13 (struct cpu_hw_events*) ;
 scalar_t__ FUNC_14 (int,unsigned long*) ;
 TYPE_2__ VAR_4 ;

int FUNC_15(struct cpu_hw_events *VAR_5, int VAR_6, int *VAR_7)
{
 struct event_constraint *VAR_8;
 unsigned long VAR_9[FUNC_0(VAR_3)];
 struct perf_event *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15 = 0;
 struct hw_perf_event *VAR_16;

 FUNC_4(VAR_9, VAR_3);
 VAR_11 = VAR_5->n_events;
 if (VAR_5->txn_flags & VAR_1)
  VAR_11 -= VAR_5->n_txn;

 if (VAR_4.start_scheduling)
  VAR_4.start_scheduling(VAR_5);

 for (VAR_12 = 0, VAR_13 = VAR_3, VAR_14 = 0; VAR_12 < VAR_6; VAR_12++) {
  VAR_8 = VAR_5->event_constraint[VAR_12];





  FUNC_2((VAR_8 && VAR_12 >= VAR_11) || (!VAR_8 && VAR_12 < VAR_11));






  if (!VAR_8 || (VAR_8->flags & VAR_2)) {
   VAR_8 = VAR_4.get_event_constraints(VAR_5, VAR_12, VAR_5->event_list[VAR_12]);
   VAR_5->event_constraint[VAR_12] = VAR_8;
  }

  VAR_13 = FUNC_7(VAR_13, VAR_8->weight);
  VAR_14 = FUNC_6(VAR_14, VAR_8->weight);
 }




 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  VAR_16 = &VAR_5->event_list[VAR_12]->hw;
  VAR_8 = VAR_5->event_constraint[VAR_12];


  if (VAR_16->idx == -1)
   break;


  if (!FUNC_14(VAR_16->idx, VAR_8->idxmsk))
   break;


  if (FUNC_14(VAR_16->idx, VAR_9))
   break;

  FUNC_3(VAR_16->idx, VAR_9);
  if (VAR_7)
   VAR_7[VAR_12] = VAR_16->idx;
 }


 if (VAR_12 != VAR_6) {
  int VAR_17 = VAR_4.num_counters;
  if (FUNC_5() && !VAR_5->is_fake &&
      FUNC_1(VAR_5->excl_cntrs->exclusive_present))
   VAR_17 /= 2;

  VAR_15 = FUNC_8(VAR_5->event_constraint, VAR_6, VAR_13,
          VAR_14, VAR_17, VAR_7);
 }
 if (!VAR_15 && VAR_7) {
  for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
   VAR_10 = VAR_5->event_list[VAR_12];
   if (VAR_4.commit_scheduling)
    VAR_4.commit_scheduling(VAR_5, VAR_12, VAR_7[VAR_12]);
  }
 } else {
  for (VAR_12 = VAR_11; VAR_12 < VAR_6; VAR_12++) {
   VAR_10 = VAR_5->event_list[VAR_12];




   if (VAR_4.put_event_constraints)
    VAR_4.put_event_constraints(VAR_5, VAR_10);

   VAR_5->event_constraint[VAR_12] = ((void*)0);
  }
 }

 if (VAR_4.stop_scheduling)
  VAR_4.stop_scheduling(VAR_5);

 return VAR_15 ? -VAR_0 : 0;
}
