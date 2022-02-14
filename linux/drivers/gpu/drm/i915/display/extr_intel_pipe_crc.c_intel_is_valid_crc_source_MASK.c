
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum intel_pipe_crc_source { ____Placeholder_intel_pipe_crc_source } intel_pipe_crc_source ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int,int) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*,int const) ;
 int FUNC_6 (struct drm_i915_private*,int const) ;
 int FUNC_7 (struct drm_i915_private*,int const) ;
 int FUNC_8 (struct drm_i915_private*,int const) ;
 int FUNC_9 (struct drm_i915_private*,int const) ;
 int FUNC_10 (struct drm_i915_private*,int const) ;

__attribute__((used)) static int
FUNC_11(struct drm_i915_private *VAR_0,
     const enum intel_pipe_crc_source VAR_1)
{
 if (FUNC_2(VAR_0, 2))
  return FUNC_5(VAR_0, VAR_1);
 else if (FUNC_0(VAR_0) < 5)
  return FUNC_6(VAR_0, VAR_1);
 else if (FUNC_4(VAR_0) || FUNC_1(VAR_0))
  return FUNC_10(VAR_0, VAR_1);
 else if (FUNC_3(VAR_0, 5, 6))
  return FUNC_7(VAR_0, VAR_1);
 else if (FUNC_0(VAR_0) < 9)
  return FUNC_8(VAR_0, VAR_1);
 else
  return FUNC_9(VAR_0, VAR_1);
}
