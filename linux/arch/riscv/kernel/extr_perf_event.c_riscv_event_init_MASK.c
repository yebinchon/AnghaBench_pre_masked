
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_attr {int type; int config; } ;
struct hw_perf_event {int config; int idx; } ;
struct perf_event {int (* destroy ) (struct perf_event*) ;struct perf_event_attr attr; struct hw_perf_event hw; } ;
struct TYPE_2__ {int (* map_hw_event ) (int ) ;int (* map_cache_event ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (struct perf_event*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct perf_event*) ;

__attribute__((used)) static int FUNC_8(struct perf_event *VAR_5)
{
 struct perf_event_attr *VAR_6 = &VAR_5->attr;
 struct hw_perf_event *VAR_7 = &VAR_5->hw;
 int VAR_8;
 int VAR_9;

 if (FUNC_1(&VAR_3) == 1) {
  VAR_8 = FUNC_3();

  if (VAR_8) {
   FUNC_2("PMC hardware not available\n");
   FUNC_0(&VAR_3);
   return -VAR_0;
  }
 }

 switch (VAR_5->attr.type) {
 case 130:
  VAR_9 = VAR_4->map_hw_event(VAR_6->config);
  break;
 case 129:
  VAR_9 = VAR_4->map_cache_event(VAR_6->config);
  break;
 case 128:
  return -VAR_2;
 default:
  return -VAR_1;
 }

 VAR_5->destroy = FUNC_4;
 if (VAR_9 < 0) {
  VAR_5->destroy(VAR_5);
  return VAR_9;
 }
 VAR_7->config = VAR_9;
 VAR_7->idx = -1;

 return 0;
}
