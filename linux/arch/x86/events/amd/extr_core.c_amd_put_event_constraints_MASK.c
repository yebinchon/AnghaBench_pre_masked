
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int hw; } ;
struct cpu_hw_events {int dummy; } ;


 int FUNC_0 (struct cpu_hw_events*,struct perf_event*) ;
 scalar_t__ FUNC_1 (struct cpu_hw_events*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cpu_hw_events *VAR_0,
          struct perf_event *VAR_1)
{
 if (FUNC_1(VAR_0) && FUNC_2(&VAR_1->hw))
  FUNC_0(VAR_0, VAR_1);
}
