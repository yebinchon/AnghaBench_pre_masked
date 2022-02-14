
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rapl_pmu {int lock; } ;
struct hw_perf_event {int state; } ;
struct perf_event {struct hw_perf_event hw; struct rapl_pmu* pmu_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rapl_pmu*,struct perf_event*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct perf_event *VAR_3, int VAR_4)
{
 struct rapl_pmu *VAR_5 = VAR_3->pmu_private;
 struct hw_perf_event *VAR_6 = &VAR_3->hw;
 unsigned long VAR_7;

 FUNC_1(&VAR_5->lock, VAR_7);

 VAR_6->state = VAR_2 | VAR_1;

 if (VAR_4 & VAR_0)
  FUNC_0(VAR_5, VAR_3);

 FUNC_2(&VAR_5->lock, VAR_7);

 return 0;
}
