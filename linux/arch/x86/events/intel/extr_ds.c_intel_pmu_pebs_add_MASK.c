
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int flags; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cpu_hw_events {int n_pebs_via_pt; int n_large_pebs; int n_pebs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cpu_hw_events*) ;
 int FUNC_1 (int,struct cpu_hw_events*,struct perf_event*,int) ;
 struct cpu_hw_events* FUNC_2 (int *) ;

void FUNC_3(struct perf_event *VAR_3)
{
 struct cpu_hw_events *VAR_4 = FUNC_2(&VAR_2);
 struct hw_perf_event *VAR_5 = &VAR_3->hw;
 bool VAR_6 = FUNC_0(VAR_4);

 VAR_4->n_pebs++;
 if (VAR_5->flags & VAR_0)
  VAR_4->n_large_pebs++;
 if (VAR_5->flags & VAR_1)
  VAR_4->n_pebs_via_pt++;

 FUNC_1(VAR_6, VAR_4, VAR_3, 1);
}
