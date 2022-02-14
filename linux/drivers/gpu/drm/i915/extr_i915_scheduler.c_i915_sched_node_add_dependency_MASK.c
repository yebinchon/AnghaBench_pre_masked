
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_sched_node {int dummy; } ;
struct i915_dependency {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i915_sched_node*,struct i915_sched_node*,struct i915_dependency*,int) ;
 struct i915_dependency* FUNC_1 () ;
 int FUNC_2 (struct i915_dependency*) ;

int FUNC_3(struct i915_sched_node *VAR_3,
       struct i915_sched_node *VAR_4)
{
 struct i915_dependency *VAR_5;

 VAR_5 = FUNC_1();
 if (!VAR_5)
  return -VAR_0;

 if (!FUNC_0(VAR_3, VAR_4, VAR_5,
           VAR_2 |
           VAR_1))
  FUNC_2(VAR_5);

 return 0;
}
