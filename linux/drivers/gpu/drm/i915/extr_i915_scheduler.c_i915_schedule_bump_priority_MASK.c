
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int priority; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct i915_request {TYPE_2__ sched; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,unsigned int) ;
 int VAR_1 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct i915_request *VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(VAR_3 & ~VAR_0);
 if (FUNC_1(VAR_2->sched.attr.priority) & VAR_3)
  return;

 FUNC_3(&VAR_1, VAR_4);
 FUNC_2(&VAR_2->sched, VAR_3);
 FUNC_4(&VAR_1, VAR_4);
}
