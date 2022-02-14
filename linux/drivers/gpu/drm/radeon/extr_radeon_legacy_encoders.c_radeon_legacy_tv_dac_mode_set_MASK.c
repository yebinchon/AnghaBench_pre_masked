
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_encoder_tv_dac {scalar_t__ tv_std; int ntsc_tvdac_adj; int pal_tvdac_adj; int ps2_tvdac_adj; } ;
struct radeon_encoder {int active_device; struct radeon_encoder_tv_dac* enc_priv; } ;
struct radeon_device {scalar_t__ family; scalar_t__ is_atom_bios; } ;
struct radeon_crtc {scalar_t__ crtc_id; } ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (struct drm_encoder*,scalar_t__) ;
 int FUNC_6 (struct drm_encoder*,scalar_t__) ;
 int FUNC_7 (struct drm_encoder*,struct drm_display_mode*,struct drm_display_mode*) ;
 struct radeon_crtc* FUNC_8 (int ) ;
 struct radeon_encoder* FUNC_9 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_10(struct drm_encoder *VAR_44,
  struct drm_display_mode *VAR_45,
  struct drm_display_mode *VAR_46)
{
 struct drm_device *VAR_47 = VAR_44->dev;
 struct radeon_device *VAR_48 = VAR_47->dev_private;
 struct radeon_crtc *VAR_49 = FUNC_8(VAR_44->crtc);
 struct radeon_encoder *VAR_50 = FUNC_9(VAR_44);
 struct radeon_encoder_tv_dac *VAR_51 = VAR_50->enc_priv;
 uint32_t VAR_52, VAR_53 = 0, VAR_54, VAR_55 = 0;
 uint32_t VAR_56 = 0, VAR_57 = 0, VAR_58 = 0;
 bool VAR_59 = 0;

 FUNC_1("\n");

 VAR_59 = VAR_50->active_device & VAR_0 ? 1 : 0;

 if (VAR_48->family != VAR_1) {
  VAR_52 = FUNC_2(VAR_30);
  if (VAR_48->family == VAR_2 ||
      VAR_48->family == VAR_3 ||
      VAR_48->family == VAR_4) {
   VAR_52 &= ~(VAR_36 |
      VAR_29 |
      VAR_8 |
      VAR_10 |
      VAR_9 |
      VAR_7 |
      VAR_11);
  } else {
   VAR_52 &= ~(VAR_36 |
      VAR_29 |
      VAR_31 |
      VAR_35 |
      VAR_32 |
      VAR_28);
  }

  VAR_52 |= VAR_33 | VAR_34;

  if (VAR_59) {
   if (VAR_51->tv_std == VAR_40 ||
       VAR_51->tv_std == VAR_41 ||
       VAR_51->tv_std == VAR_43 ||
       VAR_51->tv_std == VAR_42)
    VAR_52 |= VAR_51->ntsc_tvdac_adj;
   else
    VAR_52 |= VAR_51->pal_tvdac_adj;

   if (VAR_51->tv_std == VAR_40 ||
       VAR_51->tv_std == VAR_41)
    VAR_52 |= VAR_37;
   else
    VAR_52 |= VAR_38;
  } else
   VAR_52 |= (VAR_39 |
     VAR_51->ps2_tvdac_adj);

  FUNC_3(VAR_30, VAR_52);
 }

 if (FUNC_0(VAR_48)) {
  VAR_53 = FUNC_2(VAR_27) | 1;
  VAR_55 = FUNC_2(VAR_18);
 } else if (VAR_48->family != VAR_1)
  VAR_56 = FUNC_2(VAR_17);
 else if (VAR_48->family == VAR_1)
  VAR_57 = FUNC_2(VAR_26);

 if (VAR_48->family >= VAR_1)
  VAR_58 = FUNC_2(VAR_22);

 if (VAR_59) {
  uint32_t VAR_60;

  VAR_60 = FUNC_2(VAR_14);
  VAR_60 &= ~VAR_16;
  FUNC_3(VAR_14, VAR_60);

  if (FUNC_0(VAR_48))
   VAR_53 = FUNC_2(VAR_27) & ~1;

  VAR_54 = FUNC_2(VAR_15) & ~VAR_13;
  if (VAR_49->crtc_id == 0) {
   if (FUNC_0(VAR_48)) {
    VAR_55 &= ~VAR_21;
    VAR_55 |= (VAR_19 |
           VAR_24);
   }
   if (VAR_48->family >= VAR_1) {
    VAR_58 &= ~VAR_23;
   } else {
    VAR_56 |= VAR_12;
   }
  } else {
   if (FUNC_0(VAR_48)) {
    VAR_55 &= ~VAR_21;
    VAR_55 |= VAR_24;
   }
   if (VAR_48->family >= VAR_1) {
    VAR_58 |= VAR_23;
   } else {
    VAR_56 &= ~VAR_12;
   }
  }
  FUNC_3(VAR_15, VAR_54);
 } else {

  VAR_54 = FUNC_2(VAR_15) | VAR_13;

  if (VAR_49->crtc_id == 0) {
   if (FUNC_0(VAR_48)) {
    VAR_55 &= ~VAR_21;
    VAR_55 |= VAR_19;
   } else if (VAR_48->family == VAR_1) {
    VAR_57 &= ~(VAR_6 |
        VAR_25);
   } else
    VAR_56 |= VAR_12;
  } else {
   if (FUNC_0(VAR_48)) {
    VAR_55 &= ~VAR_21;
    VAR_55 |= VAR_20;
   } else if (VAR_48->family == VAR_1) {
    VAR_57 &= ~(VAR_6 |
        VAR_25);
    VAR_57 |= VAR_5;
   } else
    VAR_56 &= ~VAR_12;
  }
  FUNC_3(VAR_15, VAR_54);
 }

 if (FUNC_0(VAR_48)) {
  FUNC_4(VAR_27, VAR_53, ~1);
  FUNC_3(VAR_18, VAR_55);
 } else if (VAR_48->family != VAR_1)
  FUNC_3(VAR_17, VAR_56);
 else if (VAR_48->family == VAR_1)
  FUNC_3(VAR_26, VAR_57);

 if (VAR_48->family >= VAR_1)
  FUNC_3(VAR_22, VAR_58);

 if (VAR_59)
  FUNC_7(VAR_44, VAR_45, VAR_46);

 if (VAR_48->is_atom_bios)
  FUNC_5(VAR_44, VAR_49->crtc_id);
 else
  FUNC_6(VAR_44, VAR_49->crtc_id);

}
