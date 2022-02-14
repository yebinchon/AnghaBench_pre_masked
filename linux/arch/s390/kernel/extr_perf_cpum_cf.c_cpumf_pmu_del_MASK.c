
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t config_base; } ;
struct perf_event {TYPE_1__ hw; } ;
struct cpu_cf_events {int state; int * ctr_set; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct perf_event*,int ) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (struct perf_event*) ;
 struct cpu_cf_events* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_2, int VAR_3)
{
 struct cpu_cf_events *VAR_4 = FUNC_4(&VAR_1);

 FUNC_1(VAR_2, VAR_0);
 if (!FUNC_0(&VAR_4->ctr_set[VAR_2->hw.config_base]))
  FUNC_2(&VAR_4->state, VAR_2->hw.config_base);

 FUNC_3(VAR_2);
}
