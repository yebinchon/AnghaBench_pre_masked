
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int config; } ;
struct perf_event {TYPE_1__ hw; } ;
struct event_constraint {unsigned int idxmsk64; } ;
struct cpu_hw_events {int dummy; } ;


 int VAR_0 ;
 struct event_constraint VAR_1 ;
 struct event_constraint VAR_2 ;
 struct event_constraint* FUNC_0 (struct cpu_hw_events*,int,struct perf_event*) ;

__attribute__((used)) static struct event_constraint *
FUNC_1(struct cpu_hw_events *VAR_3, int VAR_4,
     struct perf_event *VAR_5)
{
 struct event_constraint *VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);


 if (VAR_5->hw.config & VAR_0) {
  if (VAR_6->idxmsk64 & (1U << 2))
   return &VAR_1;
  return &VAR_2;
 }

 return VAR_6;
}
