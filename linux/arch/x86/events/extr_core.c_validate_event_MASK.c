
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct event_constraint {int weight; } ;
struct cpu_hw_events {int dummy; } ;
struct TYPE_2__ {int (* put_event_constraints ) (struct cpu_hw_events*,struct perf_event*) ;struct event_constraint* (* get_event_constraints ) (struct cpu_hw_events*,int ,struct perf_event*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cpu_hw_events*) ;
 int FUNC_1 (struct cpu_hw_events*) ;
 struct cpu_hw_events* FUNC_2 () ;
 int FUNC_3 (struct cpu_hw_events*) ;
 struct event_constraint* FUNC_4 (struct cpu_hw_events*,int ,struct perf_event*) ;
 int FUNC_5 (struct cpu_hw_events*,struct perf_event*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_6(struct perf_event *VAR_2)
{
 struct cpu_hw_events *VAR_3;
 struct event_constraint *VAR_4;
 int VAR_5 = 0;

 VAR_3 = FUNC_2();
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = VAR_1.get_event_constraints(VAR_3, 0, VAR_2);

 if (!VAR_4 || !VAR_4->weight)
  VAR_5 = -VAR_0;

 if (VAR_1.put_event_constraints)
  VAR_1.put_event_constraints(VAR_3, VAR_2);

 FUNC_3(VAR_3);

 return VAR_5;
}
