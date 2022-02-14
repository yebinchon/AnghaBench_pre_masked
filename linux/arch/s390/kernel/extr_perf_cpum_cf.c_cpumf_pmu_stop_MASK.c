
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int state; size_t config_base; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cpu_cf_events {int state; int * ctr_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (struct perf_event*) ;
 struct cpu_cf_events* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_4, int VAR_5)
{
 struct cpu_cf_events *VAR_6 = FUNC_3(&VAR_3);
 struct hw_perf_event *VAR_7 = &VAR_4->hw;

 if (!(VAR_7->state & VAR_1)) {




  if (!FUNC_0(&VAR_6->ctr_set[VAR_7->config_base]))
   FUNC_1(&VAR_6->state, VAR_7->config_base);
  VAR_4->hw.state |= VAR_1;
 }

 if ((VAR_5 & VAR_0) && !(VAR_7->state & VAR_2)) {
  FUNC_2(VAR_4);
  VAR_4->hw.state |= VAR_2;
 }
}
