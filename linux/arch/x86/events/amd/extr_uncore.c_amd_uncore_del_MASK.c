
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int idx; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct amd_uncore {int num_counters; int * events; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event*,int ) ;
 struct perf_event* FUNC_1 (int *,struct perf_event*,int *) ;
 struct amd_uncore* FUNC_2 (struct perf_event*) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_1, int VAR_2)
{
 int VAR_3;
 struct amd_uncore *VAR_4 = FUNC_2(VAR_1);
 struct hw_perf_event *VAR_5 = &VAR_1->hw;

 FUNC_0(VAR_1, VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_4->num_counters; VAR_3++) {
  if (FUNC_1(&VAR_4->events[VAR_3], VAR_1, ((void*)0)) == VAR_1)
   break;
 }

 VAR_5->idx = -1;
}
