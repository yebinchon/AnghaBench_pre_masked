
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rapl_pmu {scalar_t__ n_active; int lock; int hrtimer; } ;
struct hw_perf_event {int state; } ;
struct perf_event {int active_entry; struct hw_perf_event hw; struct rapl_pmu* pmu_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_3, int VAR_4)
{
 struct rapl_pmu *VAR_5 = VAR_3->pmu_private;
 struct hw_perf_event *VAR_6 = &VAR_3->hw;
 unsigned long VAR_7;

 FUNC_4(&VAR_5->lock, VAR_7);


 if (!(VAR_6->state & VAR_1)) {
  FUNC_0(VAR_5->n_active <= 0);
  VAR_5->n_active--;
  if (VAR_5->n_active == 0)
   FUNC_1(&VAR_5->hrtimer);

  FUNC_2(&VAR_3->active_entry);

  FUNC_0(VAR_6->state & VAR_1);
  VAR_6->state |= VAR_1;
 }


 if ((VAR_4 & VAR_0) && !(VAR_6->state & VAR_2)) {




  FUNC_3(VAR_3);
  VAR_6->state |= VAR_2;
 }

 FUNC_5(&VAR_5->lock, VAR_7);
}
