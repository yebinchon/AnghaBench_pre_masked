
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct preempt_smoke {int prng; int ncontext; struct i915_gem_context** contexts; } ;
struct i915_gem_context {int dummy; } ;


 size_t FUNC_0 (int ,int *) ;

__attribute__((used)) static struct i915_gem_context *FUNC_1(struct preempt_smoke *VAR_0)
{
 return VAR_0->contexts[FUNC_0(VAR_0->ncontext,
         &VAR_0->prng)];
}
