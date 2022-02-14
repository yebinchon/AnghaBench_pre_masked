
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int precise_ip; } ;
struct perf_event {TYPE_1__ attr; } ;
struct event_constraint {int dummy; } ;
struct cpu_hw_events {int dummy; } ;


 struct event_constraint VAR_0 ;
 struct event_constraint* FUNC_0 (struct cpu_hw_events*,int,struct perf_event*) ;

__attribute__((used)) static struct event_constraint *
FUNC_1(struct cpu_hw_events *VAR_1, int VAR_2,
     struct perf_event *VAR_3)
{
 struct event_constraint *VAR_4;


 if (VAR_3->attr.precise_ip == 3)
  return &VAR_0;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

 return VAR_4;
}
