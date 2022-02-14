
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long long u64 ;
struct perf_event_attr {scalar_t__ type; scalar_t__ config; } ;
struct hw_perf_event {long long config; int sample_period; int period_left; int last_period; } ;
struct perf_event {struct perf_event_attr attr; struct hw_perf_event hw; } ;
struct TYPE_2__ {scalar_t__ max_events; long long (* event_map ) (scalar_t__) ;int max_period; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long,scalar_t__) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct hw_perf_event*,struct perf_event*) ;
 long long FUNC_4 (scalar_t__) ;
 TYPE_1__ VAR_4 ;
 int FUNC_5 (scalar_t__,struct perf_event*) ;

int FUNC_6(struct perf_event *VAR_5)
{
 struct perf_event_attr *VAR_6 = &VAR_5->attr;
 struct hw_perf_event *VAR_7 = &VAR_5->hw;
 u64 VAR_8;

 if (!FUNC_1(VAR_5)) {
  VAR_7->sample_period = VAR_4.max_period;
  VAR_7->last_period = VAR_7->sample_period;
  FUNC_2(&VAR_7->period_left, VAR_7->sample_period);
 }

 if (VAR_6->type == VAR_3)
  return FUNC_5(VAR_5->attr.config, VAR_5);

 if (VAR_6->type == VAR_2)
  return FUNC_3(VAR_7, VAR_5);

 if (VAR_6->config >= VAR_4.max_events)
  return -VAR_0;

 VAR_6->config = FUNC_0((unsigned long)VAR_6->config, VAR_4.max_events);




 VAR_8 = VAR_4.event_map(VAR_6->config);

 if (VAR_8 == 0)
  return -VAR_1;

 if (VAR_8 == -1LL)
  return -VAR_0;

 VAR_7->config |= VAR_8;

 return 0;
}
