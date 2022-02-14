
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_gem_context {int hw_id_pin_count; } ;


 int FUNC_0 (struct i915_gem_context*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct i915_gem_context *VAR_0)
{
 if (FUNC_1(&VAR_0->hw_id_pin_count))
  return 0;

 return FUNC_0(VAR_0);
}
