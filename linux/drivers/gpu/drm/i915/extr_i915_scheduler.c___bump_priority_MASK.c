
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_sched_attr {unsigned int priority; } ;
struct i915_sched_node {struct i915_sched_attr attr; } ;


 int FUNC_0 (struct i915_sched_node*,struct i915_sched_attr*) ;

__attribute__((used)) static void FUNC_1(struct i915_sched_node *VAR_0, unsigned int VAR_1)
{
 struct i915_sched_attr VAR_2 = VAR_0->attr;

 VAR_2.priority |= VAR_1;
 FUNC_0(VAR_0, &VAR_2);
}
