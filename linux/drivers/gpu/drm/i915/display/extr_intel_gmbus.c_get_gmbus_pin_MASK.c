
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmbus_pin {int dummy; } ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ VAR_0 ;
 struct gmbus_pin const* VAR_1 ;
 struct gmbus_pin const* VAR_2 ;
 struct gmbus_pin const* VAR_3 ;
 struct gmbus_pin const* VAR_4 ;
 struct gmbus_pin const* VAR_5 ;
 struct gmbus_pin const* VAR_6 ;

__attribute__((used)) static const struct gmbus_pin *FUNC_5(struct drm_i915_private *VAR_7,
          unsigned int VAR_8)
{
 if (FUNC_1(VAR_7) >= VAR_0)
  return &VAR_5[VAR_8];
 else if (FUNC_0(VAR_7))
  return &VAR_4[VAR_8];
 else if (FUNC_4(VAR_7))
  return &VAR_3[VAR_8];
 else if (FUNC_3(VAR_7))
  return &VAR_6[VAR_8];
 else if (FUNC_2(VAR_7))
  return &VAR_2[VAR_8];
 else
  return &VAR_1[VAR_8];
}
