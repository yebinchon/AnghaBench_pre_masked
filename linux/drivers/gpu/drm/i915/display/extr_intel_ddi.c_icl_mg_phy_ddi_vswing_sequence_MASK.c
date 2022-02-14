
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {int port; TYPE_1__ base; } ;
struct icl_mg_phy_ddi_buf_trans {int cri_txdeemph_override_11_6; int cri_txdeemph_override_5_0; int cri_txdeemph_override_17_12; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (struct icl_mg_phy_ddi_buf_trans*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (int,int) ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (int,int) ;
 struct icl_mg_phy_ddi_buf_trans* VAR_9 ;
 struct drm_i915_private* FUNC_19 (int ) ;

__attribute__((used)) static void FUNC_20(struct intel_encoder *VAR_10,
        int VAR_11,
        u32 VAR_12)
{
 struct drm_i915_private *VAR_13 = FUNC_19(VAR_10->base.dev);
 enum port VAR_14 = VAR_10->port;
 const struct icl_mg_phy_ddi_buf_trans *VAR_15;
 u32 VAR_16, VAR_17;
 int VAR_18;

 VAR_16 = FUNC_0(VAR_9);
 VAR_15 = VAR_9;

 if (VAR_12 >= VAR_16 || VAR_12 == 3 || VAR_12 == 9) {
  FUNC_5("DDI translation not found for level %d. Using %d instead.",
         VAR_12, VAR_16 - 2);
  VAR_12 = VAR_16 - 2;
 }


 for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
  VAR_17 = FUNC_6(FUNC_11(VAR_18, VAR_14));
  VAR_17 &= ~VAR_8;
  FUNC_7(FUNC_11(VAR_18, VAR_14), VAR_17);

  VAR_17 = FUNC_6(FUNC_16(VAR_18, VAR_14));
  VAR_17 &= ~VAR_8;
  FUNC_7(FUNC_16(VAR_18, VAR_14), VAR_17);
 }


 for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
  VAR_17 = FUNC_6(FUNC_13(VAR_18, VAR_14));
  VAR_17 &= ~VAR_5;
  VAR_17 |= FUNC_3(
   VAR_15[VAR_12].cri_txdeemph_override_17_12);
  FUNC_7(FUNC_13(VAR_18, VAR_14), VAR_17);

  VAR_17 = FUNC_6(FUNC_18(VAR_18, VAR_14));
  VAR_17 &= ~VAR_5;
  VAR_17 |= FUNC_3(
   VAR_15[VAR_12].cri_txdeemph_override_17_12);
  FUNC_7(FUNC_18(VAR_18, VAR_14), VAR_17);
 }


 for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
  VAR_17 = FUNC_6(FUNC_10(VAR_18, VAR_14));
  VAR_17 &= ~(VAR_4 |
    VAR_6);
  VAR_17 |= FUNC_4(
   VAR_15[VAR_12].cri_txdeemph_override_5_0) |
   FUNC_2(
    VAR_15[VAR_12].cri_txdeemph_override_11_6) |
   VAR_7;
  FUNC_7(FUNC_10(VAR_18, VAR_14), VAR_17);

  VAR_17 = FUNC_6(FUNC_15(VAR_18, VAR_14));
  VAR_17 &= ~(VAR_4 |
    VAR_6);
  VAR_17 |= FUNC_4(
   VAR_15[VAR_12].cri_txdeemph_override_5_0) |
   FUNC_2(
    VAR_15[VAR_12].cri_txdeemph_override_11_6) |
   VAR_7;
  FUNC_7(FUNC_15(VAR_18, VAR_14), VAR_17);


 }






 for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
  VAR_17 = FUNC_6(FUNC_8(VAR_18, VAR_14));
  if (VAR_11 < 300000)
   VAR_17 |= VAR_2;
  else
   VAR_17 &= ~VAR_2;
  FUNC_7(FUNC_8(VAR_18, VAR_14), VAR_17);
 }


 for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
  VAR_17 = FUNC_6(FUNC_9(VAR_18, VAR_14));
  VAR_17 &= ~VAR_1;
  if (VAR_11 <= 500000) {
   VAR_17 &= ~VAR_0;
  } else {
   VAR_17 |= VAR_0 |
    FUNC_1(1);
  }
  FUNC_7(FUNC_9(VAR_18, VAR_14), VAR_17);

  VAR_17 = FUNC_6(FUNC_14(VAR_18, VAR_14));
  VAR_17 &= ~VAR_1;
  if (VAR_11 <= 500000) {
   VAR_17 &= ~VAR_0;
  } else {
   VAR_17 |= VAR_0 |
    FUNC_1(1);
  }
  FUNC_7(FUNC_14(VAR_18, VAR_14), VAR_17);
 }


 for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
  VAR_17 = FUNC_6(FUNC_12(VAR_18, VAR_14));
  VAR_17 |= VAR_3;
  FUNC_7(FUNC_12(VAR_18, VAR_14), VAR_17);

  VAR_17 = FUNC_6(FUNC_17(VAR_18, VAR_14));
  VAR_17 |= VAR_3;
  FUNC_7(FUNC_17(VAR_18, VAR_14), VAR_17);
 }
}
