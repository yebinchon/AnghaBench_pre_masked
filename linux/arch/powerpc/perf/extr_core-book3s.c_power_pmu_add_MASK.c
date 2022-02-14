
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int branch_sample_type; } ;
struct TYPE_4__ {int state; int config; int event_base; } ;
struct perf_event {int pmu; TYPE_2__ attr; TYPE_1__ hw; } ;
struct cpu_hw_events {int n_events; int txn_flags; int bhrb_filter; int n_added; int * events; int * flags; struct perf_event** event; } ;
struct TYPE_6__ {int n_counter; int (* bhrb_filter_map ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct perf_event**,int *,int,int) ;
 int VAR_5 ;
 int FUNC_1 (struct perf_event*) ;
 scalar_t__ FUNC_2 (struct perf_event*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct cpu_hw_events*,int *,int *,int) ;
 int FUNC_8 (struct perf_event*) ;
 TYPE_3__* VAR_6 ;
 int FUNC_9 (int ) ;
 struct cpu_hw_events* FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct perf_event *VAR_7, int VAR_8)
{
 struct cpu_hw_events *VAR_9;
 unsigned long VAR_10;
 int VAR_11;
 int VAR_12 = -VAR_0;

 FUNC_4(VAR_10);
 FUNC_5(VAR_7->pmu);





 VAR_9 = FUNC_10(&VAR_5);
 VAR_11 = VAR_9->n_events;
 if (VAR_11 >= VAR_6->n_counter)
  goto out;
 VAR_9->event[VAR_11] = VAR_7;
 VAR_9->events[VAR_11] = VAR_7->hw.config;
 VAR_9->flags[VAR_11] = VAR_7->hw.event_base;







 if (!(VAR_8 & VAR_1))
  VAR_7->hw.state = VAR_2 | VAR_3;
 else
  VAR_7->hw.state = 0;






 if (VAR_9->txn_flags & VAR_4)
  goto nocheck;

 if (FUNC_0(VAR_9->event, VAR_9->flags, VAR_11, 1))
  goto out;
 if (FUNC_7(VAR_9, VAR_9->events, VAR_9->flags, VAR_11 + 1))
  goto out;
 VAR_7->hw.config = VAR_9->events[VAR_11];

nocheck:
 FUNC_1(VAR_7);

 ++VAR_9->n_events;
 ++VAR_9->n_added;

 VAR_12 = 0;
 out:
 if (FUNC_2(VAR_7)) {
  FUNC_8(VAR_7);
  VAR_9->bhrb_filter = VAR_6->bhrb_filter_map(
     VAR_7->attr.branch_sample_type);
 }

 FUNC_6(VAR_7->pmu);
 FUNC_3(VAR_10);
 return VAR_12;
}
