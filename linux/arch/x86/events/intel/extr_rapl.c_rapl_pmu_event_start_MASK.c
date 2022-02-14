
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rapl_pmu {int lock; } ;
struct perf_event {struct rapl_pmu* pmu_private; } ;


 int FUNC_0 (struct rapl_pmu*,struct perf_event*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_0, int VAR_1)
{
 struct rapl_pmu *VAR_2 = VAR_0->pmu_private;
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);
 FUNC_0(VAR_2, VAR_0);
 FUNC_2(&VAR_2->lock, VAR_3);
}
