
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; int type; } ;
struct hw_perf_event {int idx; unsigned long config_base; int sample_period; int last_period; int period_left; scalar_t__ event_base; scalar_t__ config; } ;
struct perf_event {struct perf_event* group_leader; TYPE_1__ attr; struct hw_perf_event hw; int pmu; } ;
struct nds32_pmu {int (* map_event ) (struct perf_event*) ;int max_period; scalar_t__ (* set_event_filter ) (struct hw_perf_event*,TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct perf_event*) ;
 scalar_t__ FUNC_4 (struct hw_perf_event*,TYPE_1__*) ;
 struct nds32_pmu* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct perf_event*) ;

__attribute__((used)) static int FUNC_7(struct perf_event *VAR_2)
{
 struct nds32_pmu *VAR_3 = FUNC_5(VAR_2->pmu);
 struct hw_perf_event *VAR_4 = &VAR_2->hw;
 int VAR_5;

 VAR_5 = VAR_3->map_event(VAR_2);

 if (VAR_5 < 0) {
  FUNC_2("event %x:%llx not supported\n", VAR_2->attr.type,
    VAR_2->attr.config);
  return VAR_5;
 }







 VAR_4->idx = -1;
 VAR_4->config_base = 0;
 VAR_4->config = 0;
 VAR_4->event_base = 0;




 if ((!VAR_3->set_event_filter ||
      VAR_3->set_event_filter(VAR_4, &VAR_2->attr)) &&
     FUNC_0(&VAR_2->attr)) {
  FUNC_2
   ("NDS performance counters do not support mode exclusion\n");
  return -VAR_1;
 }




 VAR_4->config_base |= (unsigned long)VAR_5;

 if (!VAR_4->sample_period) {






  VAR_4->sample_period = VAR_3->max_period >> 1;
  VAR_4->last_period = VAR_4->sample_period;
  FUNC_1(&VAR_4->period_left, VAR_4->sample_period);
 }

 if (VAR_2->group_leader != VAR_2) {
  if (FUNC_6(VAR_2) != 0)
   return -VAR_0;
 }

 return 0;
}
