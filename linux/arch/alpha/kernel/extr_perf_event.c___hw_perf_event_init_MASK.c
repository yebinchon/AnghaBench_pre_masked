
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_attr {scalar_t__ type; size_t config; } ;
struct hw_perf_event {int event_base; scalar_t__ sample_period; int period_left; scalar_t__ last_period; int idx; scalar_t__ config_base; } ;
struct perf_event {int destroy; struct perf_event* group_leader; struct hw_perf_event hw; struct perf_event_attr attr; } ;
struct TYPE_2__ {size_t max_events; int* event_map; scalar_t__* pmc_max_period; scalar_t__ num_pmcs; int (* raw_event_valid ) (size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct perf_event**,unsigned long*,int) ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (struct perf_event*,scalar_t__,struct perf_event**,unsigned long*,int*) ;
 int VAR_8 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (size_t) ;

__attribute__((used)) static int FUNC_4(struct perf_event *VAR_9)
{
 struct perf_event_attr *VAR_10 = &VAR_9->attr;
 struct hw_perf_event *VAR_11 = &VAR_9->hw;
 struct perf_event *VAR_12[VAR_2];
 unsigned long VAR_13[VAR_2];
 int VAR_14[VAR_2];
 int VAR_15;
 int VAR_16;




 if (VAR_10->type == VAR_3) {
  if (VAR_10->config >= VAR_7->max_events)
   return -VAR_0;
  VAR_15 = VAR_7->event_map[VAR_10->config];
 } else if (VAR_10->type == VAR_4) {
  return -VAR_1;
 } else if (VAR_10->type == VAR_5) {
  if (!VAR_7->raw_event_valid(VAR_10->config))
   return -VAR_0;
  VAR_15 = VAR_10->config;
 } else {
  return -VAR_1;
 }

 if (VAR_15 < 0) {
  return VAR_15;
 }
 VAR_11->event_base = VAR_15;





 VAR_16 = 0;
 if (VAR_9->group_leader != VAR_9) {
  VAR_16 = FUNC_1(VAR_9->group_leader,
    VAR_7->num_pmcs - 1,
    VAR_12, VAR_13, VAR_14);
  if (VAR_16 < 0)
   return -VAR_0;
 }
 VAR_13[VAR_16] = VAR_11->event_base;
 VAR_12[VAR_16] = VAR_9;

 if (FUNC_0(VAR_12, VAR_13, VAR_16 + 1))
  return -VAR_0;


 VAR_11->config_base = 0;
 VAR_11->idx = VAR_6;

 VAR_9->destroy = VAR_8;
 if (!VAR_11->sample_period) {
  VAR_11->sample_period = VAR_7->pmc_max_period[0];
  VAR_11->last_period = VAR_11->sample_period;
  FUNC_2(&VAR_11->period_left, VAR_11->sample_period);
 }

 return 0;
}
