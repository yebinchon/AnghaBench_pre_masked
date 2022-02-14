
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event {int idx; int state; } ;
struct perf_event {int pmu; struct hw_perf_event hw; } ;
struct cpu_hw_events {int used_mask; } ;
struct TYPE_2__ {int num_events; int (* disable ) (struct hw_perf_event*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__* VAR_6 ;
 int FUNC_6 (struct perf_event*,int ) ;
 int FUNC_7 (struct hw_perf_event*,int) ;
 struct cpu_hw_events* FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct perf_event *VAR_7, int VAR_8)
{
 struct cpu_hw_events *VAR_9 = FUNC_8(&VAR_5);
 struct hw_perf_event *VAR_10 = &VAR_7->hw;
 int VAR_11 = VAR_10->idx;
 int VAR_12 = -VAR_0;

 FUNC_4(VAR_7->pmu);

 if (FUNC_1(VAR_11, VAR_9->used_mask)) {
  VAR_11 = FUNC_2(VAR_9->used_mask, VAR_6->num_events);
  if (VAR_11 == VAR_6->num_events)
   goto out;

  FUNC_0(VAR_11, VAR_9->used_mask);
  VAR_10->idx = VAR_11;
 }

 VAR_6->disable(VAR_10, VAR_11);

 VAR_7->hw.state = VAR_4 | VAR_3;
 if (VAR_8 & VAR_2)
  FUNC_6(VAR_7, VAR_1);

 FUNC_3(VAR_7);
 VAR_12 = 0;
out:
 FUNC_5(VAR_7->pmu);
 return VAR_12;
}
