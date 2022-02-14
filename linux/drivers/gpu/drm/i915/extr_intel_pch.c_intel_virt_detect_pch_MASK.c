
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,...) ;
 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 scalar_t__ FUNC_1 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private const*,int) ;
 scalar_t__ FUNC_7 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_9 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_10 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_11 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_12 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_13 (struct drm_i915_private const*) ;

__attribute__((used)) static unsigned short
FUNC_14(const struct drm_i915_private *VAR_9)
{
 unsigned short VAR_10 = 0;
 if (FUNC_13(VAR_9))
  VAR_10 = VAR_8;
 else if (FUNC_5(VAR_9))
  VAR_10 = VAR_6;
 else if (FUNC_9(VAR_9))
  VAR_10 = VAR_3;
 else if (FUNC_3(VAR_9) || FUNC_4(VAR_9))
  VAR_10 = VAR_0;
 else if (FUNC_11(VAR_9) || FUNC_12(VAR_9))
  VAR_10 = VAR_7;
 else if (FUNC_8(VAR_9) || FUNC_1(VAR_9))
  VAR_10 = VAR_5;
 else if (FUNC_7(VAR_9) || FUNC_2(VAR_9))
  VAR_10 = VAR_4;
 else if (FUNC_6(VAR_9, 6) || FUNC_10(VAR_9))
  VAR_10 = VAR_1;
 else if (FUNC_6(VAR_9, 5))
  VAR_10 = VAR_2;

 if (VAR_10)
  FUNC_0("Assuming PCH ID %04x\n", VAR_10);
 else
  FUNC_0("Assuming no PCH\n");

 return VAR_10;
}
