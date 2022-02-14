
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;
struct cpu_hw_events {int pebs_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct perf_event*) ;
 struct cpu_hw_events* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct perf_event *VAR_2)
{
 struct cpu_hw_events *VAR_3 = FUNC_1(&VAR_1);

 if (!FUNC_0(VAR_2))
  return;

 if (!(VAR_3->pebs_enabled & ~VAR_0))
  VAR_3->pebs_enabled &= ~VAR_0;
}
