
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int event_base; } ;
struct perf_event {TYPE_1__ hw; } ;
struct cpu_hw_events {int n_events; int txn_flags; int n_added; int * events; struct perf_event** event; int * current_idx; } ;
struct TYPE_4__ {int max_hw_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct perf_event**,int,int) ;
 int VAR_7 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (struct perf_event**,int *,int) ;
 TYPE_2__* VAR_8 ;
 struct cpu_hw_events* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct perf_event *VAR_9, int VAR_10)
{
 struct cpu_hw_events *VAR_11 = FUNC_4(&VAR_7);
 int VAR_12, VAR_13 = -VAR_0;
 unsigned long VAR_14;

 FUNC_2(VAR_14);

 VAR_12 = VAR_11->n_events;
 if (VAR_12 >= VAR_8->max_hw_events)
  goto out;

 VAR_11->event[VAR_12] = VAR_9;
 VAR_11->events[VAR_12] = VAR_9->hw.event_base;
 VAR_11->current_idx[VAR_12] = VAR_6;

 VAR_9->hw.state = VAR_4 | VAR_3;
 if (!(VAR_10 & VAR_1))
  VAR_9->hw.state |= VAR_2;






 if (VAR_11->txn_flags & VAR_5)
  goto nocheck;

 if (FUNC_0(VAR_11->event, VAR_12, 1))
  goto out;
 if (FUNC_3(VAR_11->event, VAR_11->events, VAR_12 + 1))
  goto out;

nocheck:
 VAR_11->n_events++;
 VAR_11->n_added++;

 VAR_13 = 0;
out:
 FUNC_1(VAR_14);
 return VAR_13;
}
