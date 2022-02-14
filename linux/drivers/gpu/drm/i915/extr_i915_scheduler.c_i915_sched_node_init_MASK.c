
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int priority; } ;
struct i915_sched_node {scalar_t__ flags; scalar_t__ semaphores; TYPE_1__ attr; int link; int waiters_list; int signalers_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct i915_sched_node *VAR_1)
{
 FUNC_0(&VAR_1->signalers_list);
 FUNC_0(&VAR_1->waiters_list);
 FUNC_0(&VAR_1->link);
 VAR_1->attr.priority = VAR_0;
 VAR_1->semaphores = 0;
 VAR_1->flags = 0;
}
