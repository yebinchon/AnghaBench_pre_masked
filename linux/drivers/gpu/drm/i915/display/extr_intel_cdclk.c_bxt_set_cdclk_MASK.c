
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_cdclk_state {int cdclk; int vco; int voltage_level; } ;
struct TYPE_3__ {int bypass; int vco; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;
struct drm_i915_private {TYPE_2__ cdclk; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int,int) ;
 int VAR_7 ;
 int FUNC_3 (int ,int) ;
 int VAR_8 ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*,int) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct drm_i915_private*,int) ;
 int FUNC_11 (struct drm_i915_private*,int ,int,int,int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct drm_i915_private *VAR_9,
     const struct intel_cdclk_state *VAR_10,
     enum pipe VAR_11)
{
 int VAR_12 = VAR_10->cdclk;
 int VAR_13 = VAR_10->vco;
 u32 VAR_14, VAR_15;
 int VAR_16;


 switch (FUNC_1(VAR_13, VAR_12)) {
 default:
  FUNC_6(VAR_12 != VAR_9->cdclk.hw.bypass);
  FUNC_6(VAR_13 != 0);

 case 2:
  VAR_15 = VAR_0;
  break;
 case 3:
  FUNC_5(FUNC_4(VAR_9), "Unsupported divider\n");
  VAR_15 = VAR_1;
  break;
 case 4:
  VAR_15 = VAR_2;
  break;
 case 8:
  VAR_15 = VAR_3;
  break;
 }






 VAR_16 = FUNC_11(VAR_9,
           VAR_7,
           0x80000000, 150, 2);
 if (VAR_16) {
  FUNC_2("PCode CDCLK freq change notify failed (err %d, freq %d)\n",
     VAR_16, VAR_12);
  return;
 }

 if (VAR_9->cdclk.hw.vco != 0 &&
     VAR_9->cdclk.hw.vco != VAR_13)
  FUNC_7(VAR_9);

 if (VAR_9->cdclk.hw.vco != VAR_13)
  FUNC_8(VAR_9, VAR_13);

 VAR_14 = VAR_15 | FUNC_12(VAR_12);
 if (VAR_11 == VAR_8)
  VAR_14 |= VAR_4;
 else
  VAR_14 |= FUNC_0(VAR_11);




 if (VAR_12 >= 500000)
  VAR_14 |= VAR_5;
 FUNC_3(VAR_6, VAR_14);

 if (VAR_11 != VAR_8)
  FUNC_10(VAR_9, VAR_11);







 VAR_16 = FUNC_11(VAR_9,
           VAR_7,
           VAR_10->voltage_level, 150, 2);
 if (VAR_16) {
  FUNC_2("PCode CDCLK freq set failed, (err %d, freq %d)\n",
     VAR_16, VAR_12);
  return;
 }

 FUNC_9(VAR_9);
}
