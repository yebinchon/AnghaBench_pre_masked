
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int flags; size_t idx; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct debug_store {int * pebs_event_reset; } ;
struct cpu_hw_events {int pebs_enabled; struct debug_store* ds; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct perf_event*) ;
 struct cpu_hw_events* FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_5)
{
 struct cpu_hw_events *VAR_6 = FUNC_1(&VAR_4);
 struct hw_perf_event *VAR_7 = &VAR_5->hw;
 struct debug_store *VAR_8 = VAR_6->ds;

 if (!FUNC_0(VAR_5))
  return;

 if (!(VAR_5->hw.flags & VAR_3))
  VAR_6->pebs_enabled |= VAR_2;

 VAR_6->pebs_enabled |= VAR_1;

 FUNC_2(VAR_0 + VAR_7->idx, VAR_8->pebs_event_reset[VAR_7->idx]);
}
