
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_cdclk_state {int cdclk; int vco; int voltage_level; } ;
struct TYPE_3__ {int bypass; int vco; int voltage_level; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;
struct drm_i915_private {TYPE_2__ cdclk; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*,int) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*,int) ;
 int FUNC_9 (struct drm_i915_private*,int ,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct drm_i915_private*,int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_12(struct drm_i915_private *VAR_8,
     const struct intel_cdclk_state *VAR_9,
     enum pipe VAR_10)
{
 int VAR_11 = VAR_9->cdclk;
 int VAR_12 = VAR_9->vco;
 u32 VAR_13, VAR_14;
 int VAR_15;

 VAR_15 = FUNC_11(VAR_8, VAR_7,
    VAR_5,
    VAR_6,
    VAR_6, 3);
 if (VAR_15) {
  FUNC_2("Failed to inform PCU about cdclk change (%d)\n",
     VAR_15);
  return;
 }


 switch (FUNC_1(VAR_12, VAR_11)) {
 default:
  FUNC_4(VAR_11 != VAR_8->cdclk.hw.bypass);
  FUNC_4(VAR_12 != 0);

 case 2:
  VAR_14 = VAR_0;
  break;
 case 4:
  VAR_14 = VAR_1;
  break;
 }

 if (VAR_8->cdclk.hw.vco != 0 &&
     VAR_8->cdclk.hw.vco != VAR_12)
  FUNC_5(VAR_8);

 if (VAR_8->cdclk.hw.vco != VAR_12)
  FUNC_6(VAR_8, VAR_12);

 VAR_13 = VAR_14 | FUNC_10(VAR_11);
 if (VAR_10 == VAR_4)
  VAR_13 |= VAR_2;
 else
  VAR_13 |= FUNC_0(VAR_10);
 FUNC_3(VAR_3, VAR_13);

 if (VAR_10 != VAR_4)
  FUNC_8(VAR_8, VAR_10);


 FUNC_9(VAR_8, VAR_7,
    VAR_9->voltage_level);

 FUNC_7(VAR_8);





 VAR_8->cdclk.hw.voltage_level = VAR_9->voltage_level;
}
