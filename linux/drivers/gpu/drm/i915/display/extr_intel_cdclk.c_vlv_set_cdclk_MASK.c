
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_cdclk_state {int cdclk; int voltage_level; } ;
struct drm_i915_private {int hpll_freq; } ;
typedef int intel_wakeref_t ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct drm_i915_private*,int ) ;
 int FUNC_5 (struct drm_i915_private*,int ,int ) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*,int ) ;
 int FUNC_8 (struct drm_i915_private*,int ,int) ;
 int FUNC_9 (struct drm_i915_private*,int ) ;
 int FUNC_10 (struct drm_i915_private*,int ,int) ;
 int FUNC_11 (struct drm_i915_private*,int) ;
 int FUNC_12 (struct drm_i915_private*,int) ;
 int FUNC_13 (struct drm_i915_private*) ;
 int FUNC_14 (struct drm_i915_private*,int ) ;
 int FUNC_15 (struct drm_i915_private*,int ,int) ;
 scalar_t__ FUNC_16 (int,int) ;

__attribute__((used)) static void FUNC_17(struct drm_i915_private *VAR_14,
     const struct intel_cdclk_state *VAR_15,
     enum pipe VAR_16)
{
 int VAR_17 = VAR_15->cdclk;
 u32 VAR_18, VAR_19 = VAR_15->voltage_level;
 intel_wakeref_t VAR_20;

 switch (VAR_17) {
 case 400000:
 case 333333:
 case 320000:
 case 266667:
 case 200000:
  break;
 default:
  FUNC_3(VAR_17);
  return;
 }







 VAR_20 = FUNC_4(VAR_14, VAR_9);

 FUNC_11(VAR_14,
   FUNC_0(VAR_12) |
   FUNC_0(VAR_11) |
   FUNC_0(VAR_13));

 VAR_18 = FUNC_14(VAR_14, VAR_10);
 VAR_18 &= ~VAR_5;
 VAR_18 |= (VAR_19 << VAR_6);
 FUNC_15(VAR_14, VAR_10, VAR_18);
 if (FUNC_16((FUNC_14(VAR_14, VAR_10) &
        VAR_7) == (VAR_19 << VAR_8),
       50)) {
  FUNC_2("timed out waiting for CDclk change\n");
 }

 if (VAR_17 == 400000) {
  u32 VAR_21;

  VAR_21 = FUNC_1(VAR_14->hpll_freq << 1,
         VAR_17) - 1;


  VAR_18 = FUNC_9(VAR_14, VAR_1);
  VAR_18 &= ~VAR_4;
  VAR_18 |= VAR_21;
  FUNC_10(VAR_14, VAR_1, VAR_18);

  if (FUNC_16((FUNC_9(VAR_14, VAR_1) &
         VAR_2) == (VAR_21 << VAR_3),
        50))
   FUNC_2("timed out waiting for CDclk change\n");
 }


 VAR_18 = FUNC_7(VAR_14, VAR_0);
 VAR_18 &= ~0x7f;





 if (VAR_17 == 400000)
  VAR_18 |= 4500 / 250;
 else
  VAR_18 |= 3000 / 250;
 FUNC_8(VAR_14, VAR_0, VAR_18);

 FUNC_12(VAR_14,
   FUNC_0(VAR_12) |
   FUNC_0(VAR_11) |
   FUNC_0(VAR_13));

 FUNC_6(VAR_14);

 FUNC_13(VAR_14);

 FUNC_5(VAR_14, VAR_9, VAR_20);
}
