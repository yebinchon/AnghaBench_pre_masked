
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum intel_pch { ____Placeholder_intel_pch } intel_pch ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_i915_private const*) ;
 int FUNC_2 (struct drm_i915_private const*) ;
 int FUNC_3 (struct drm_i915_private const*) ;
 int FUNC_4 (struct drm_i915_private const*) ;
 int FUNC_5 (struct drm_i915_private const*) ;
 int FUNC_6 (struct drm_i915_private const*,int) ;
 int FUNC_7 (struct drm_i915_private const*) ;
 int FUNC_8 (struct drm_i915_private const*) ;
 int FUNC_9 (struct drm_i915_private const*) ;
 int FUNC_10 (struct drm_i915_private const*) ;
 int FUNC_11 (struct drm_i915_private const*) ;
 int FUNC_12 (struct drm_i915_private const*) ;
 int FUNC_13 (struct drm_i915_private const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_14 (int) ;

__attribute__((used)) static enum intel_pch
FUNC_15(const struct drm_i915_private *VAR_9, unsigned short VAR_10)
{
 switch (VAR_10) {
 case 140:
  FUNC_0("Found Ibex Peak PCH\n");
  FUNC_14(!FUNC_6(VAR_9, 5));
  return VAR_2;
 case 141:
  FUNC_0("Found CougarPoint PCH\n");
  FUNC_14(!FUNC_6(VAR_9, 6) && !FUNC_10(VAR_9));
  return VAR_1;
 case 133:
  FUNC_0("Found PantherPoint PCH\n");
  FUNC_14(!FUNC_6(VAR_9, 6) && !FUNC_10(VAR_9));

  return VAR_1;
 case 137:
  FUNC_0("Found LynxPoint PCH\n");
  FUNC_14(!FUNC_7(VAR_9) && !FUNC_2(VAR_9));
  FUNC_14(FUNC_8(VAR_9) || FUNC_1(VAR_9));
  return VAR_4;
 case 136:
  FUNC_0("Found LynxPoint LP PCH\n");
  FUNC_14(!FUNC_7(VAR_9) && !FUNC_2(VAR_9));
  FUNC_14(!FUNC_8(VAR_9) && !FUNC_1(VAR_9));
  return VAR_4;
 case 129:
  FUNC_0("Found WildcatPoint PCH\n");
  FUNC_14(!FUNC_7(VAR_9) && !FUNC_2(VAR_9));
  FUNC_14(FUNC_8(VAR_9) || FUNC_1(VAR_9));

  return VAR_4;
 case 128:
  FUNC_0("Found WildcatPoint LP PCH\n");
  FUNC_14(!FUNC_7(VAR_9) && !FUNC_2(VAR_9));
  FUNC_14(!FUNC_8(VAR_9) && !FUNC_1(VAR_9));

  return VAR_4;
 case 132:
  FUNC_0("Found SunrisePoint PCH\n");
  FUNC_14(!FUNC_12(VAR_9) && !FUNC_11(VAR_9));
  return VAR_7;
 case 131:
  FUNC_0("Found SunrisePoint LP PCH\n");
  FUNC_14(!FUNC_12(VAR_9) && !FUNC_11(VAR_9));
  return VAR_7;
 case 138:
  FUNC_0("Found Kaby Lake PCH (KBP)\n");
  FUNC_14(!FUNC_12(VAR_9) && !FUNC_11(VAR_9) &&
   !FUNC_4(VAR_9));

  return VAR_7;
 case 143:
  FUNC_0("Found Cannon Lake PCH (CNP)\n");
  FUNC_14(!FUNC_3(VAR_9) && !FUNC_4(VAR_9));
  return VAR_0;
 case 142:
  FUNC_0("Found Cannon Lake LP PCH (CNP-LP)\n");
  FUNC_14(!FUNC_3(VAR_9) && !FUNC_4(VAR_9));
  return VAR_0;
 case 144:
 case 145:
  FUNC_0("Found Comet Lake PCH (CMP)\n");
  FUNC_14(!FUNC_4(VAR_9));

  return VAR_0;
 case 139:
  FUNC_0("Found Ice Lake PCH\n");
  FUNC_14(!FUNC_9(VAR_9));
  return VAR_3;
 case 134:
 case 135:
  FUNC_0("Found Mule Creek Canyon PCH\n");
  FUNC_14(!FUNC_5(VAR_9));
  return VAR_5;
 case 130:
  FUNC_0("Found Tiger Lake LP PCH\n");
  FUNC_14(!FUNC_13(VAR_9));
  return VAR_8;
 default:
  return VAR_6;
 }
}
