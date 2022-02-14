
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int dummy; } ;
struct cpu_hw_events {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct cpu_hw_events*) ;
 struct cpu_hw_events* FUNC_2 (int *) ;

void FUNC_3(struct perf_event_context *VAR_1, bool VAR_2)
{
 struct cpu_hw_events *VAR_3 = FUNC_2(&VAR_0);

 if (!VAR_2 && FUNC_1(VAR_3))
  FUNC_0();
}
