
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_context {int engine; } ;
struct i915_vma {int private; } ;


 int FUNC_0 (struct i915_vma*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct intel_context *VAR_0, struct i915_vma *VAR_1)
{
 FUNC_0(VAR_1);
 FUNC_2(VAR_1->private);
 FUNC_1(VAR_0->engine);
}
