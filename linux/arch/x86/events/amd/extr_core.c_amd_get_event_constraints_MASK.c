
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int hw; } ;
struct event_constraint {int dummy; } ;
struct cpu_hw_events {int dummy; } ;


 struct event_constraint* FUNC_0 (struct cpu_hw_events*,struct perf_event*,int *) ;
 scalar_t__ FUNC_1 (struct cpu_hw_events*) ;
 scalar_t__ FUNC_2 (int *) ;
 struct event_constraint VAR_0 ;

__attribute__((used)) static struct event_constraint *
FUNC_3(struct cpu_hw_events *VAR_1, int VAR_2,
     struct perf_event *VAR_3)
{



 if (!(FUNC_1(VAR_1) && FUNC_2(&VAR_3->hw)))
  return &VAR_0;

 return FUNC_0(VAR_1, VAR_3, ((void*)0));
}
