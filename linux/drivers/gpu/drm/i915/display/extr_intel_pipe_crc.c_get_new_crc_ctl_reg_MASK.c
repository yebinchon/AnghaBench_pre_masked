
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
typedef enum intel_pipe_crc_source { ____Placeholder_intel_pipe_crc_source } intel_pipe_crc_source ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int,int) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (int*,int *) ;
 int FUNC_6 (struct drm_i915_private*,int,int*,int *) ;
 int FUNC_7 (int*,int *) ;
 int FUNC_8 (struct drm_i915_private*,int,int*,int *) ;
 int FUNC_9 (struct drm_i915_private*,int,int*,int *) ;
 int FUNC_10 (struct drm_i915_private*,int,int*,int *) ;

__attribute__((used)) static int FUNC_11(struct drm_i915_private *VAR_0,
          enum pipe VAR_1,
          enum intel_pipe_crc_source *VAR_2, u32 *VAR_3)
{
 if (FUNC_2(VAR_0, 2))
  return FUNC_5(VAR_2, VAR_3);
 else if (FUNC_0(VAR_0) < 5)
  return FUNC_6(VAR_0, VAR_1, VAR_2, VAR_3);
 else if (FUNC_4(VAR_0) || FUNC_1(VAR_0))
  return FUNC_10(VAR_0, VAR_1, VAR_2, VAR_3);
 else if (FUNC_3(VAR_0, 5, 6))
  return FUNC_7(VAR_2, VAR_3);
 else if (FUNC_0(VAR_0) < 9)
  return FUNC_8(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  return FUNC_9(VAR_0, VAR_1, VAR_2, VAR_3);
}
