
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_gem_context {struct i915_address_space* vm; } ;
struct i915_address_space {int dummy; } ;


 struct i915_address_space* FUNC_0 (struct i915_gem_context*,struct i915_address_space*) ;
 int FUNC_1 (struct i915_address_space*) ;

__attribute__((used)) static void FUNC_2(struct i915_gem_context *VAR_0,
      struct i915_address_space *VAR_1)
{
 if (VAR_1 == VAR_0->vm)
  return;

 VAR_1 = FUNC_0(VAR_0, VAR_1);
 if (VAR_1)
  FUNC_1(VAR_1);
}
