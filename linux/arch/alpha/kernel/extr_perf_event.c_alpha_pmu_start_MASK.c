
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int state; unsigned long idx; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cpu_hw_events {unsigned long idx_mask; scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct perf_event*,struct hw_perf_event*,unsigned long) ;
 int VAR_4 ;
 struct cpu_hw_events* FUNC_2 (int *) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_5, int VAR_6)
{
 struct hw_perf_event *VAR_7 = &VAR_5->hw;
 struct cpu_hw_events *VAR_8 = FUNC_2(&VAR_4);

 if (FUNC_0(!(VAR_7->state & VAR_2)))
  return;

 if (VAR_6 & VAR_1) {
  FUNC_0(!(VAR_7->state & VAR_3));
  FUNC_1(VAR_5, VAR_7, VAR_7->idx);
 }

 VAR_7->state = 0;

 VAR_8->idx_mask |= 1UL<<VAR_7->idx;
 if (VAR_8->enabled)
  FUNC_3(VAR_0, (1UL<<VAR_7->idx));
}
