
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct TYPE_2__ {int bit_6_swizzle_x; int bit_6_swizzle_y; } ;
struct drm_i915_private {TYPE_1__ mm; int quirks; scalar_t__ preserve_bios_swizzle; struct intel_uncore uncore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_7 (struct intel_uncore*,int ) ;

__attribute__((used)) static void FUNC_8(struct drm_i915_private *VAR_23)
{
 struct intel_uncore *VAR_24 = &VAR_23->uncore;
 u32 VAR_25 = VAR_17;
 u32 VAR_26 = VAR_17;

 if (FUNC_1(VAR_23) >= 8 || FUNC_6(VAR_23)) {







  VAR_25 = VAR_16;
  VAR_26 = VAR_16;
 } else if (FUNC_1(VAR_23) >= 6) {
  if (VAR_23->preserve_bios_swizzle) {
   if (FUNC_7(VAR_24, VAR_8) &
       VAR_9) {
    VAR_25 = VAR_11;
    VAR_26 = VAR_10;
   } else {
    VAR_25 = VAR_16;
    VAR_26 = VAR_16;
   }
  } else {
   u32 VAR_27, VAR_28;
   VAR_27 = FUNC_7(VAR_24, VAR_20);
   VAR_28 = FUNC_7(VAR_24, VAR_21);
   VAR_27 &= VAR_18 | VAR_19;
   VAR_28 &= VAR_18 | VAR_19;







   if (VAR_27 == VAR_28) {
    VAR_25 = VAR_11;
    VAR_26 = VAR_10;
   } else {
    VAR_25 = VAR_16;
    VAR_26 = VAR_16;
   }
  }
 } else if (FUNC_4(VAR_23, 5)) {




  VAR_25 = VAR_11;
  VAR_26 = VAR_10;
 } else if (FUNC_4(VAR_23, 2)) {




  VAR_25 = VAR_16;
  VAR_26 = VAR_16;
 } else if (FUNC_3(VAR_23) || FUNC_5(VAR_23) || FUNC_2(VAR_23)) {
  if (FUNC_7(VAR_24, VAR_0) ==
      FUNC_7(VAR_24, VAR_1)) {
   VAR_25 = VAR_11;
   VAR_26 = VAR_10;
  }
 } else {
  u32 VAR_29 = FUNC_7(VAR_24, VAR_2);
  switch (VAR_29 & VAR_5) {
  case 128:
  case 130:
   VAR_25 = VAR_16;
   VAR_26 = VAR_16;
   break;
  case 129:
   if (VAR_29 & VAR_7) {




    VAR_25 = VAR_11;
    VAR_26 = VAR_10;
   } else if ((VAR_29 & VAR_6) == 0) {

    VAR_25 = VAR_12;
    VAR_26 = VAR_14;
   } else {

    VAR_25 = VAR_13;
    VAR_26 = VAR_15;
   }
   break;
  }


  if (FUNC_4(VAR_23, 4) &&
      !(FUNC_7(VAR_24, VAR_3) & VAR_4)) {
   VAR_25 = VAR_17;
   VAR_26 = VAR_17;
  }

  if (VAR_29 == 0xffffffff) {
   FUNC_0("Couldn't read from MCHBAR.  "
      "Disabling tiling.\n");
   VAR_25 = VAR_17;
   VAR_26 = VAR_17;
  }
 }

 if (VAR_25 == VAR_17 ||
     VAR_26 == VAR_17) {
  VAR_23->quirks |= VAR_22;
  VAR_25 = VAR_16;
  VAR_26 = VAR_16;
 }

 VAR_23->mm.bit_6_swizzle_x = VAR_25;
 VAR_23->mm.bit_6_swizzle_y = VAR_26;
}
