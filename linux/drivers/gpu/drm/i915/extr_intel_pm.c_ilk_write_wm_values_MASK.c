
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ilk_wm_values {scalar_t__ partitioning; int * wm_lp; int * wm_lp_spr; scalar_t__ enable_fbc_wm; int * wm_linetime; int * wm_pipe; } ;
struct TYPE_2__ {struct ilk_wm_values hw; } ;
struct drm_i915_private {TYPE_1__ wm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int FUNC_6 (int ) ;
 unsigned int FUNC_7 (int) ;
 unsigned int FUNC_8 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_9 (struct drm_i915_private*,unsigned int) ;
 unsigned int FUNC_10 (struct drm_i915_private*,struct ilk_wm_values*,struct ilk_wm_values*) ;

__attribute__((used)) static void FUNC_11(struct drm_i915_private *VAR_21,
    struct ilk_wm_values *VAR_22)
{
 struct ilk_wm_values *VAR_23 = &VAR_21->wm.hw;
 unsigned int VAR_24;
 u32 VAR_25;

 VAR_24 = FUNC_10(VAR_21, VAR_23, VAR_22);
 if (!VAR_24)
  return;

 FUNC_9(VAR_21, VAR_24);

 if (VAR_24 & FUNC_8(VAR_5))
  FUNC_1(VAR_8, VAR_22->wm_pipe[0]);
 if (VAR_24 & FUNC_8(VAR_6))
  FUNC_1(VAR_9, VAR_22->wm_pipe[1]);
 if (VAR_24 & FUNC_8(VAR_7))
  FUNC_1(VAR_10, VAR_22->wm_pipe[2]);

 if (VAR_24 & FUNC_6(VAR_5))
  FUNC_1(FUNC_5(VAR_5), VAR_22->wm_linetime[0]);
 if (VAR_24 & FUNC_6(VAR_6))
  FUNC_1(FUNC_5(VAR_6), VAR_22->wm_linetime[1]);
 if (VAR_24 & FUNC_6(VAR_7))
  FUNC_1(FUNC_5(VAR_7), VAR_22->wm_linetime[2]);

 if (VAR_24 & VAR_17) {
  if (FUNC_4(VAR_21) || FUNC_3(VAR_21)) {
   VAR_25 = FUNC_0(VAR_19);
   if (VAR_22->partitioning == VAR_4)
    VAR_25 &= ~VAR_20;
   else
    VAR_25 |= VAR_20;
   FUNC_1(VAR_19, VAR_25);
  } else {
   VAR_25 = FUNC_0(VAR_1);
   if (VAR_22->partitioning == VAR_4)
    VAR_25 &= ~VAR_2;
   else
    VAR_25 |= VAR_2;
   FUNC_1(VAR_1, VAR_25);
  }
 }

 if (VAR_24 & VAR_18) {
  VAR_25 = FUNC_0(VAR_0);
  if (VAR_22->enable_fbc_wm)
   VAR_25 &= ~VAR_3;
  else
   VAR_25 |= VAR_3;
  FUNC_1(VAR_0, VAR_25);
 }

 if (VAR_24 & FUNC_7(1) &&
     VAR_23->wm_lp_spr[0] != VAR_22->wm_lp_spr[0])
  FUNC_1(VAR_11, VAR_22->wm_lp_spr[0]);

 if (FUNC_2(VAR_21) >= 7) {
  if (VAR_24 & FUNC_7(2) && VAR_23->wm_lp_spr[1] != VAR_22->wm_lp_spr[1])
   FUNC_1(VAR_13, VAR_22->wm_lp_spr[1]);
  if (VAR_24 & FUNC_7(3) && VAR_23->wm_lp_spr[2] != VAR_22->wm_lp_spr[2])
   FUNC_1(VAR_15, VAR_22->wm_lp_spr[2]);
 }

 if (VAR_24 & FUNC_7(1) && VAR_23->wm_lp[0] != VAR_22->wm_lp[0])
  FUNC_1(VAR_12, VAR_22->wm_lp[0]);
 if (VAR_24 & FUNC_7(2) && VAR_23->wm_lp[1] != VAR_22->wm_lp[1])
  FUNC_1(VAR_14, VAR_22->wm_lp[1]);
 if (VAR_24 & FUNC_7(3) && VAR_23->wm_lp[2] != VAR_22->wm_lp[2])
  FUNC_1(VAR_16, VAR_22->wm_lp[2]);

 VAR_21->wm.hw = *VAR_22;
}
