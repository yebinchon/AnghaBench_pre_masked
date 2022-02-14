
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_gem_context {int hw_id_pin_count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct i915_gem_context *VAR_0)
{
 FUNC_0(FUNC_2(&VAR_0->hw_id_pin_count) == 0u);
 FUNC_1(&VAR_0->hw_id_pin_count);
}
