
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
typedef enum port { ____Placeholder_port } port ;






 int FUNC_0 (struct drm_i915_private*) ;





 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static i915_reg_t
FUNC_2(struct drm_i915_private *VAR_0,
          enum port VAR_1)
{
 static const i915_reg_t VAR_2[] = {
  [132] = 133,
  [131] = 136,
  [130] = 135,
  [129] = 134,
  [128] = 136,
 };

 FUNC_1(FUNC_0(VAR_0) < 9);

 if (FUNC_1(VAR_1 < 132 || VAR_1 > 128))
  VAR_1 = 132;

 return VAR_2[VAR_1];
}
