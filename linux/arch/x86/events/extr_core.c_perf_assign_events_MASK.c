
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t event; int counter; int unassigned; } ;
struct perf_sched {TYPE_1__ state; } ;
struct event_constraint {int dummy; } ;


 int FUNC_0 (struct perf_sched*) ;
 int FUNC_1 (struct perf_sched*,struct event_constraint**,int,int,int,int) ;
 scalar_t__ FUNC_2 (struct perf_sched*) ;

int FUNC_3(struct event_constraint **VAR_0, int VAR_1,
   int VAR_2, int VAR_3, int VAR_4, int *VAR_5)
{
 struct perf_sched VAR_6;

 FUNC_1(&VAR_6, VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 do {
  if (!FUNC_0(&VAR_6))
   break;
  if (VAR_5)
   VAR_5[VAR_6.state.event] = VAR_6.state.counter;
 } while (FUNC_2(&VAR_6));

 return VAR_6.state.unassigned;
}
