
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event {int state; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cpu_hw_events {int n_events; int txn_flags; int n_added; int n_txn; int assign; } ;
struct TYPE_2__ {int (* schedule_events ) (struct cpu_hw_events*,int,int*) ;int (* add ) (struct perf_event*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cpu_hw_events*,struct perf_event*,int) ;
 int VAR_6 ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (struct cpu_hw_events*,int,int*) ;
 int FUNC_3 (struct perf_event*) ;
 struct cpu_hw_events* FUNC_4 (int *) ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static int FUNC_5(struct perf_event *VAR_8, int VAR_9)
{
 struct cpu_hw_events *VAR_10 = FUNC_4(&VAR_6);
 struct hw_perf_event *VAR_11;
 int VAR_12[VAR_5];
 int VAR_13, VAR_14, VAR_15;

 VAR_11 = &VAR_8->hw;

 VAR_14 = VAR_10->n_events;
 VAR_15 = VAR_13 = FUNC_0(VAR_10, VAR_8, 0);
 if (VAR_15 < 0)
  goto out;

 VAR_11->state = VAR_3 | VAR_2;
 if (!(VAR_9 & VAR_0))
  VAR_11->state |= VAR_1;
 if (VAR_10->txn_flags & VAR_4)
  goto done_collect;

 VAR_15 = VAR_7.schedule_events(VAR_10, VAR_13, VAR_12);
 if (VAR_15)
  goto out;




 FUNC_1(VAR_10->assign, VAR_12, VAR_13*sizeof(int));

done_collect:




 VAR_10->n_events = VAR_13;
 VAR_10->n_added += VAR_13 - VAR_14;
 VAR_10->n_txn += VAR_13 - VAR_14;

 if (VAR_7.add) {




  VAR_7.add(VAR_8);
 }

 VAR_15 = 0;
out:
 return VAR_15;
}
