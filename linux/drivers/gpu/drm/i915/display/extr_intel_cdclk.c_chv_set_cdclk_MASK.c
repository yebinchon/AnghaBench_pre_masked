
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_cdclk_state {int cdclk; int voltage_level; } ;
struct drm_i915_private {int dummy; } ;
typedef int intel_wakeref_t ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct drm_i915_private*,int ) ;
 int FUNC_3 (struct drm_i915_private*,int ,int ) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*,int ) ;
 int FUNC_9 (struct drm_i915_private*,int ,int) ;
 scalar_t__ FUNC_10 (int,int) ;

__attribute__((used)) static void FUNC_11(struct drm_i915_private *VAR_6,
     const struct intel_cdclk_state *VAR_7,
     enum pipe VAR_8)
{
 int VAR_9 = VAR_7->cdclk;
 u32 VAR_10, VAR_11 = VAR_7->voltage_level;
 intel_wakeref_t VAR_12;

 switch (VAR_9) {
 case 333333:
 case 320000:
 case 266667:
 case 200000:
  break;
 default:
  FUNC_1(VAR_9);
  return;
 }







 VAR_12 = FUNC_2(VAR_6, VAR_4);

 FUNC_6(VAR_6);
 VAR_10 = FUNC_8(VAR_6, VAR_5);
 VAR_10 &= ~VAR_0;
 VAR_10 |= (VAR_11 << VAR_1);
 FUNC_9(VAR_6, VAR_5, VAR_10);
 if (FUNC_10((FUNC_8(VAR_6, VAR_5) &
        VAR_2) == (VAR_11 << VAR_3),
       50)) {
  FUNC_0("timed out waiting for CDclk change\n");
 }

 FUNC_7(VAR_6);

 FUNC_4(VAR_6);

 FUNC_5(VAR_6);

 FUNC_3(VAR_6, VAR_4, VAR_12);
}
