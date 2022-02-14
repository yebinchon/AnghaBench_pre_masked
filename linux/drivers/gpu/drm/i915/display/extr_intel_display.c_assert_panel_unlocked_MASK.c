
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int VAR_2 ;
 int FUNC_6 (int) ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct drm_i915_private*,int ,int ,int*) ;
 int FUNC_11 (struct drm_i915_private*,int ,int*) ;
 int FUNC_12 (int) ;

void FUNC_13(struct drm_i915_private *VAR_13, enum pipe VAR_14)
{
 i915_reg_t VAR_15;
 u32 VAR_16;
 enum pipe VAR_17 = VAR_1;
 bool VAR_18 = 1;

 if (FUNC_9(FUNC_0(VAR_13)))
  return;

 if (FUNC_1(VAR_13)) {
  u32 VAR_19;

  VAR_15 = FUNC_7(0);
  VAR_19 = FUNC_2(FUNC_8(0)) & VAR_3;

  switch (VAR_19) {
  case 128:
   FUNC_11(VAR_13, VAR_9, &VAR_17);
   break;
  case 131:
   FUNC_10(VAR_13, VAR_0, VAR_10, &VAR_17);
   break;
  case 130:
   FUNC_10(VAR_13, VAR_7, VAR_11, &VAR_17);
   break;
  case 129:
   FUNC_10(VAR_13, VAR_8, VAR_12, &VAR_17);
   break;
  default:
   FUNC_6(VAR_19);
   break;
  }
 } else if (FUNC_5(VAR_13) || FUNC_4(VAR_13)) {

  VAR_15 = FUNC_7(VAR_14);
  VAR_17 = VAR_14;
 } else {
  u32 VAR_20;

  VAR_15 = FUNC_7(0);
  VAR_20 = FUNC_2(FUNC_8(0)) & VAR_3;

  FUNC_9(VAR_20 != 128);
  FUNC_11(VAR_13, VAR_2, &VAR_17);
 }

 VAR_16 = FUNC_2(VAR_15);
 if (!(VAR_16 & VAR_4) ||
     ((VAR_16 & VAR_5) == VAR_6))
  VAR_18 = 0;

 FUNC_3(VAR_17 == VAR_14 && VAR_18,
      "panel assertion failure, pipe %c regs locked\n",
      FUNC_12(VAR_14));
}
