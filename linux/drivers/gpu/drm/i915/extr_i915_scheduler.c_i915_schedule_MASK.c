
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_sched_attr {int dummy; } ;
struct i915_request {int sched; } ;


 int FUNC_0 (int *,struct i915_sched_attr const*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct i915_request *VAR_1, const struct i915_sched_attr *VAR_2)
{
 FUNC_1(&VAR_0);
 FUNC_0(&VAR_1->sched, VAR_2);
 FUNC_2(&VAR_0);
}
