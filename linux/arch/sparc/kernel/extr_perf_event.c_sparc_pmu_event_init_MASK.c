
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_map {int dummy; } ;
struct perf_event_attr {int type; unsigned long config; int exclude_hv; int exclude_kernel; int exclude_user; } ;
struct hw_perf_event {unsigned long event_base; scalar_t__ sample_period; int period_left; scalar_t__ last_period; int idx; int config_base; } ;
struct perf_event {int destroy; struct perf_event* group_leader; struct hw_perf_event hw; struct perf_event_attr attr; } ;
struct TYPE_2__ {unsigned long max_events; scalar_t__ max_hw_events; int hv_bit; int priv_bit; int user_bit; int irq_bit; struct perf_event_map* (* event_map ) (unsigned long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct perf_event_map const*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;



 int VAR_6 ;
 int FUNC_1 (struct perf_event_map const*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct perf_event**,int,int) ;
 int FUNC_4 (struct perf_event*,scalar_t__,struct perf_event**,unsigned long*,int*) ;
 scalar_t__ FUNC_5 (struct perf_event*) ;
 int VAR_7 ;
 int FUNC_6 (int *,scalar_t__) ;
 int VAR_8 ;
 unsigned long FUNC_7 (struct perf_event_map const*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (struct perf_event**,unsigned long*,int) ;
 struct perf_event_map* FUNC_10 (unsigned long) ;
 TYPE_1__* VAR_9 ;
 struct perf_event_map* FUNC_11 (unsigned long) ;

__attribute__((used)) static int FUNC_12(struct perf_event *VAR_10)
{
 struct perf_event_attr *VAR_11 = &VAR_10->attr;
 struct perf_event *VAR_12[VAR_4];
 struct hw_perf_event *VAR_13 = &VAR_10->hw;
 unsigned long VAR_14[VAR_4];
 int VAR_15[VAR_4];
 const struct perf_event_map *VAR_16;
 int VAR_17;

 if (FUNC_2(&VAR_8) < 0)
  return -VAR_1;


 if (FUNC_5(VAR_10))
  return -VAR_3;

 switch (VAR_11->type) {
 case 130:
  if (VAR_11->config >= VAR_9->max_events)
   return -VAR_0;
  VAR_16 = VAR_9->event_map(VAR_11->config);
  break;

 case 129:
  VAR_16 = FUNC_10(VAR_11->config);
  if (FUNC_0(VAR_16))
   return FUNC_1(VAR_16);
  break;

 case 128:
  VAR_16 = ((void*)0);
  break;

 default:
  return -VAR_2;

 }

 if (VAR_16) {
  VAR_13->event_base = FUNC_7(VAR_16);
 } else {




  VAR_13->event_base = VAR_11->config;
 }


 VAR_13->config_base = VAR_9->irq_bit;
 if (!VAR_11->exclude_user)
  VAR_13->config_base |= VAR_9->user_bit;
 if (!VAR_11->exclude_kernel)
  VAR_13->config_base |= VAR_9->priv_bit;
 if (!VAR_11->exclude_hv)
  VAR_13->config_base |= VAR_9->hv_bit;

 VAR_17 = 0;
 if (VAR_10->group_leader != VAR_10) {
  VAR_17 = FUNC_4(VAR_10->group_leader,
       VAR_9->max_hw_events - 1,
       VAR_12, VAR_14, VAR_15);
  if (VAR_17 < 0)
   return -VAR_0;
 }
 VAR_14[VAR_17] = VAR_13->event_base;
 VAR_12[VAR_17] = VAR_10;

 if (FUNC_3(VAR_12, VAR_17, 1))
  return -VAR_0;

 if (FUNC_9(VAR_12, VAR_14, VAR_17 + 1))
  return -VAR_0;

 VAR_13->idx = VAR_6;




 FUNC_8();
 VAR_10->destroy = VAR_7;

 if (!VAR_13->sample_period) {
  VAR_13->sample_period = VAR_5;
  VAR_13->last_period = VAR_13->sample_period;
  FUNC_6(&VAR_13->period_left, VAR_13->sample_period);
 }

 return 0;
}
