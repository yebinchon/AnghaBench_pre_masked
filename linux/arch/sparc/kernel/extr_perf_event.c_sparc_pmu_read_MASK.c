
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int dummy; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cpu_hw_events {int dummy; } ;


 int FUNC_0 (struct cpu_hw_events*,struct perf_event*) ;
 int VAR_0 ;
 int FUNC_1 (struct perf_event*,struct hw_perf_event*,int) ;
 struct cpu_hw_events* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_1)
{
 struct cpu_hw_events *VAR_2 = FUNC_2(&VAR_0);
 int VAR_3 = FUNC_0(VAR_2, VAR_1);
 struct hw_perf_event *VAR_4 = &VAR_1->hw;

 FUNC_1(VAR_1, VAR_4, VAR_3);
}
