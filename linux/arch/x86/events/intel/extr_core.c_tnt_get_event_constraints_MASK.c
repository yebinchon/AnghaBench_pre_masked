
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int config; } ;
struct TYPE_3__ {int precise_ip; } ;
struct perf_event {TYPE_2__ hw; TYPE_1__ attr; } ;
struct event_constraint {int dummy; } ;
struct cpu_hw_events {int dummy; } ;


 scalar_t__ FUNC_0 (int *,int ) ;
 struct event_constraint VAR_0 ;
 int VAR_1 ;
 struct event_constraint VAR_2 ;
 struct event_constraint* FUNC_1 (struct cpu_hw_events*,int,struct perf_event*) ;

__attribute__((used)) static struct event_constraint *
FUNC_2(struct cpu_hw_events *VAR_3, int VAR_4,
     struct perf_event *VAR_5)
{
 struct event_constraint *VAR_6;





 if (VAR_5->attr.precise_ip == 3) {

  if (FUNC_0(&VAR_1, VAR_5->hw.config))
   return &VAR_2;

  return &VAR_0;
 }

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);

 return VAR_6;
}
