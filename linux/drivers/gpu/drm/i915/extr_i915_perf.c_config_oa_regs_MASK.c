
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i915_oa_reg {int value; int addr; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct drm_i915_private *VAR_0,
      const struct i915_oa_reg *VAR_1,
      u32 VAR_2)
{
 u32 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  const struct i915_oa_reg *VAR_4 = VAR_1 + VAR_3;

  FUNC_0(VAR_4->addr, VAR_4->value);
 }
}
