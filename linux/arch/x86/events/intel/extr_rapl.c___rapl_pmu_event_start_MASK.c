
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rapl_pmu {int n_active; int active_list; } ;
struct TYPE_2__ {int state; int prev_count; } ;
struct perf_event {TYPE_1__ hw; int active_entry; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct rapl_pmu*) ;

__attribute__((used)) static void FUNC_5(struct rapl_pmu *VAR_1,
       struct perf_event *VAR_2)
{
 if (FUNC_0(!(VAR_2->hw.state & VAR_0)))
  return;

 VAR_2->hw.state = 0;

 FUNC_1(&VAR_2->active_entry, &VAR_1->active_list);

 FUNC_2(&VAR_2->hw.prev_count, FUNC_3(VAR_2));

 VAR_1->n_active++;
 if (VAR_1->n_active == 1)
  FUNC_4(VAR_1);
}
