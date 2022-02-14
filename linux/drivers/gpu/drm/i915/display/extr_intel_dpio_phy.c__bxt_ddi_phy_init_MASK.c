
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int bxt_phy_grc; int uncore; } ;
struct bxt_ddi_phy_info {int rcomp_phy; int pwron_mask; scalar_t__ reset_delay; scalar_t__ dual_channel; } ;
typedef enum dpio_phy { ____Placeholder_dpio_phy } dpio_phy ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_12 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_13 (struct drm_i915_private*,int) ;
 void* FUNC_14 (struct drm_i915_private*,int) ;
 struct bxt_ddi_phy_info* FUNC_15 (struct drm_i915_private*,int) ;
 int FUNC_16 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_17 (int *,int ,int,int,int) ;
 int FUNC_18 (scalar_t__) ;

__attribute__((used)) static void FUNC_19(struct drm_i915_private *VAR_16,
         enum dpio_phy VAR_17)
{
 const struct bxt_ddi_phy_info *VAR_18;
 u32 VAR_19;

 VAR_18 = FUNC_15(VAR_16, VAR_17);

 if (FUNC_12(VAR_16, VAR_17)) {

  if (VAR_18->rcomp_phy != -1)
   VAR_16->bxt_phy_grc = FUNC_14(VAR_16, VAR_17);

  if (FUNC_13(VAR_16, VAR_17)) {
   FUNC_8("DDI PHY %d already enabled, "
      "won't reprogram it\n", VAR_17);
   return;
  }

  FUNC_8("DDI PHY %d enabled with invalid state, "
     "force reprogramming it\n", VAR_17);
 }

 VAR_19 = FUNC_10(VAR_0);
 VAR_19 |= VAR_18->pwron_mask;
 FUNC_11(VAR_0, VAR_19);
 if (FUNC_17(&VAR_16->uncore,
           FUNC_1(VAR_17),
           VAR_14 | VAR_13,
           VAR_13,
           1))
  FUNC_9("timeout during PHY%d power on\n", VAR_17);


 VAR_19 = FUNC_10(FUNC_4(VAR_17));
 VAR_19 &= ~VAR_8;
 VAR_19 |= 0xE4 << VAR_9;
 FUNC_11(FUNC_4(VAR_17), VAR_19);

 VAR_19 = FUNC_10(FUNC_2(VAR_17));
 VAR_19 &= ~VAR_10;
 VAR_19 |= 0xE4 << VAR_11;
 FUNC_11(FUNC_2(VAR_17), VAR_19);


 VAR_19 = FUNC_10(FUNC_3(VAR_17));
 VAR_19 |= VAR_12 | VAR_2 |
  VAR_15;
 FUNC_11(FUNC_3(VAR_17), VAR_19);

 if (VAR_18->dual_channel) {
  VAR_19 = FUNC_10(FUNC_5(VAR_17));
  VAR_19 |= VAR_3;
  FUNC_11(FUNC_5(VAR_17), VAR_19);
 }

 if (VAR_18->rcomp_phy != -1) {
  u32 VAR_20;

  FUNC_16(VAR_16, VAR_18->rcomp_phy);






  VAR_19 = VAR_16->bxt_phy_grc = FUNC_14(VAR_16,
         VAR_18->rcomp_phy);
  VAR_20 = VAR_19 << VAR_4 |
      VAR_19 << VAR_5 |
      VAR_19;
  FUNC_11(FUNC_6(VAR_17), VAR_20);

  VAR_19 = FUNC_10(FUNC_7(VAR_17));
  VAR_19 |= VAR_6 | VAR_7;
  FUNC_11(FUNC_7(VAR_17), VAR_19);
 }

 if (VAR_18->reset_delay)
  FUNC_18(VAR_18->reset_delay);

 VAR_19 = FUNC_10(FUNC_0(VAR_17));
 VAR_19 |= VAR_1;
 FUNC_11(FUNC_0(VAR_17), VAR_19);
}
