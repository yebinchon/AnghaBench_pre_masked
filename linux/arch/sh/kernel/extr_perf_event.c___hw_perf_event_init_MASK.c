
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_attr {int type; int config; } ;
struct hw_perf_event {int config; } ;
struct perf_event {int destroy; struct hw_perf_event hw; struct perf_event_attr attr; } ;
struct TYPE_2__ {int raw_event_mask; int max_events; int (* event_map ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int,int*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 () ;
 TYPE_1__* VAR_6 ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct perf_event *VAR_7)
{
 struct perf_event_attr *VAR_8 = &VAR_7->attr;
 struct hw_perf_event *VAR_9 = &VAR_7->hw;
 int VAR_10 = -1;
 int VAR_11;

 if (!FUNC_7())
  return -VAR_2;
 VAR_11 = 0;
 if (!FUNC_1(&VAR_4)) {
  FUNC_4(&VAR_5);
  if (FUNC_2(&VAR_4) == 0 &&
      FUNC_6())
   VAR_11 = -VAR_0;
  else
   FUNC_0(&VAR_4);
  FUNC_5(&VAR_5);
 }

 if (VAR_11)
  return VAR_11;

 VAR_7->destroy = VAR_3;

 switch (VAR_8->type) {
 case 128:
  VAR_10 = VAR_8->config & VAR_6->raw_event_mask;
  break;
 case 129:
  VAR_11 = FUNC_3(VAR_8->config, &VAR_10);
  if (VAR_11)
   return VAR_11;
  break;
 case 130:
  if (VAR_8->config >= VAR_6->max_events)
   return -VAR_1;

  VAR_10 = VAR_6->event_map(VAR_8->config);
  break;
 }

 if (VAR_10 == -1)
  return -VAR_1;

 VAR_9->config |= VAR_10;

 return 0;
}
