
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct radeon_encoder_tv_dac {int coherent_mode; int tv_std; } ;
struct radeon_encoder_int_tmds {int coherent_mode; int tv_std; } ;
struct radeon_encoder_atom_dig {int coherent_mode; int tv_std; } ;
struct radeon_encoder_atom_dac {int coherent_mode; int tv_std; } ;
struct TYPE_6__ {scalar_t__ clock; } ;
struct radeon_encoder {int underscan_type; int underscan_hborder; int underscan_vborder; int rmx_type; int output_csc; int base; TYPE_2__ native_mode; struct radeon_encoder_tv_dac* enc_priv; } ;
struct TYPE_8__ {struct drm_property* output_csc_property; struct drm_property* tmds_pll_property; struct drm_property* load_detect_property; struct drm_property* tv_std_property; struct drm_property* underscan_vborder_property; struct drm_property* underscan_hborder_property; struct drm_property* underscan_property; struct drm_property* dither_property; struct drm_property* audio_property; struct drm_property* coherent_mode_property; } ;
struct radeon_device {TYPE_4__ mode_info; scalar_t__ is_atom_bios; } ;
struct radeon_crtc {int output_csc; } ;
struct radeon_connector {int audio; int dither; int dac_load_detect; } ;
struct drm_property {int dummy; } ;
struct drm_encoder {struct drm_crtc* crtc; } ;
struct TYPE_5__ {struct drm_property* scaling_mode_property; } ;
struct drm_device {TYPE_1__ mode_config; struct radeon_device* dev_private; } ;
struct drm_crtc {TYPE_3__* funcs; } ;
struct drm_connector_helper_funcs {struct drm_encoder* (* best_encoder ) (struct drm_connector*) ;} ;
struct drm_connector {struct drm_encoder* encoder; struct drm_connector_helper_funcs* helper_private; struct drm_device* dev; } ;
typedef enum radeon_rmx_type { ____Placeholder_radeon_rmx_type } radeon_rmx_type ;
struct TYPE_7__ {int (* gamma_set ) (struct drm_crtc*,int *,int *,int *,int ,int *) ;} ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct radeon_encoder*,struct radeon_encoder_tv_dac*) ;
 struct drm_encoder* FUNC_2 (struct drm_connector*,int ) ;
 int FUNC_3 (struct radeon_encoder*,struct radeon_encoder_tv_dac*) ;
 int FUNC_4 (struct radeon_encoder*,struct radeon_encoder_tv_dac*) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_7 ;
 struct drm_encoder* FUNC_6 (struct drm_connector*) ;
 struct drm_encoder* FUNC_7 (struct drm_connector*) ;
 int FUNC_8 (struct drm_crtc*,int *,int *,int *,int ,int *) ;
 struct radeon_connector* FUNC_9 (struct drm_connector*) ;
 struct radeon_crtc* FUNC_10 (struct drm_crtc*) ;
 struct radeon_encoder* FUNC_11 (struct drm_encoder*) ;

__attribute__((used)) static int FUNC_12(struct drm_connector *VAR_8, struct drm_property *VAR_9,
      uint64_t VAR_10)
{
 struct drm_device *VAR_11 = VAR_8->dev;
 struct radeon_device *VAR_12 = VAR_11->dev_private;
 struct drm_encoder *VAR_13;
 struct radeon_encoder *VAR_14;

 if (VAR_9 == VAR_12->mode_info.coherent_mode_property) {
  struct radeon_encoder_atom_dig *VAR_15;
  bool VAR_16;


  VAR_13 = FUNC_2(VAR_8, VAR_1);
  if (!VAR_13)
   return 0;

  VAR_14 = FUNC_11(VAR_13);

  if (!VAR_14->enc_priv)
   return 0;

  VAR_15 = VAR_14->enc_priv;
  VAR_16 = VAR_10 ? 1 : 0;
  if (VAR_15->coherent_mode != VAR_16) {
   VAR_15->coherent_mode = VAR_16;
   FUNC_5(&VAR_14->base);
  }
 }

 if (VAR_9 == VAR_12->mode_info.audio_property) {
  struct radeon_connector *VAR_17 = FUNC_9(VAR_8);

  VAR_13 = FUNC_2(VAR_8, VAR_1);
  if (!VAR_13)
   return 0;

  VAR_14 = FUNC_11(VAR_13);

  if (VAR_17->audio != VAR_10) {
   VAR_17->audio = VAR_10;
   FUNC_5(&VAR_14->base);
  }
 }

 if (VAR_9 == VAR_12->mode_info.dither_property) {
  struct radeon_connector *VAR_18 = FUNC_9(VAR_8);

  VAR_13 = FUNC_2(VAR_8, VAR_1);
  if (!VAR_13)
   return 0;

  VAR_14 = FUNC_11(VAR_13);

  if (VAR_18->dither != VAR_10) {
   VAR_18->dither = VAR_10;
   FUNC_5(&VAR_14->base);
  }
 }

 if (VAR_9 == VAR_12->mode_info.underscan_property) {

  VAR_13 = FUNC_2(VAR_8, VAR_1);
  if (!VAR_13)
   return 0;

  VAR_14 = FUNC_11(VAR_13);

  if (VAR_14->underscan_type != VAR_10) {
   VAR_14->underscan_type = VAR_10;
   FUNC_5(&VAR_14->base);
  }
 }

 if (VAR_9 == VAR_12->mode_info.underscan_hborder_property) {

  VAR_13 = FUNC_2(VAR_8, VAR_1);
  if (!VAR_13)
   return 0;

  VAR_14 = FUNC_11(VAR_13);

  if (VAR_14->underscan_hborder != VAR_10) {
   VAR_14->underscan_hborder = VAR_10;
   FUNC_5(&VAR_14->base);
  }
 }

 if (VAR_9 == VAR_12->mode_info.underscan_vborder_property) {

  VAR_13 = FUNC_2(VAR_8, VAR_1);
  if (!VAR_13)
   return 0;

  VAR_14 = FUNC_11(VAR_13);

  if (VAR_14->underscan_vborder != VAR_10) {
   VAR_14->underscan_vborder = VAR_10;
   FUNC_5(&VAR_14->base);
  }
 }

 if (VAR_9 == VAR_12->mode_info.tv_std_property) {
  VAR_13 = FUNC_2(VAR_8, VAR_2);
  if (!VAR_13) {
   VAR_13 = FUNC_2(VAR_8, VAR_0);
  }

  if (!VAR_13)
   return 0;

  VAR_14 = FUNC_11(VAR_13);
  if (!VAR_14->enc_priv)
   return 0;
  if (FUNC_0(VAR_12) || VAR_7) {
   struct radeon_encoder_atom_dac *VAR_19;
   VAR_19 = VAR_14->enc_priv;
   VAR_19->tv_std = VAR_10;
  } else {
   struct radeon_encoder_tv_dac *VAR_20;
   VAR_20 = VAR_14->enc_priv;
   VAR_20->tv_std = VAR_10;
  }
  FUNC_5(&VAR_14->base);
 }

 if (VAR_9 == VAR_12->mode_info.load_detect_property) {
  struct radeon_connector *VAR_21 =
   FUNC_9(VAR_8);

  if (VAR_10 == 0)
   VAR_21->dac_load_detect = 0;
  else
   VAR_21->dac_load_detect = 1;
 }

 if (VAR_9 == VAR_12->mode_info.tmds_pll_property) {
  struct radeon_encoder_int_tmds *VAR_22 = ((void*)0);
  bool VAR_23 = 0;

  VAR_13 = FUNC_2(VAR_8, VAR_1);
  if (!VAR_13)
   return 0;

  VAR_14 = FUNC_11(VAR_13);

  VAR_22 = VAR_14->enc_priv;
  if (!VAR_22)
   return 0;

  if (VAR_10 == 0) {
   if (VAR_12->is_atom_bios)
    VAR_23 = FUNC_1(VAR_14, VAR_22);
   else
    VAR_23 = FUNC_3(VAR_14, VAR_22);
  }
  if (VAR_10 == 1 || VAR_23 == 0) {
   FUNC_4(VAR_14, VAR_22);
  }
  FUNC_5(&VAR_14->base);
 }

 if (VAR_9 == VAR_11->mode_config.scaling_mode_property) {
  enum radeon_rmx_type VAR_24;

  if (VAR_8->encoder)
   VAR_14 = FUNC_11(VAR_8->encoder);
  else {
   const struct drm_connector_helper_funcs *VAR_25 = VAR_8->helper_private;
   VAR_14 = FUNC_11(VAR_25->best_encoder(VAR_8));
  }

  switch (VAR_10) {
  default:
  case 128: VAR_24 = VAR_6; break;
  case 130: VAR_24 = VAR_4; break;
  case 131: VAR_24 = VAR_3; break;
  case 129: VAR_24 = VAR_5; break;
  }
  if (VAR_14->rmx_type == VAR_24)
   return 0;

  if ((VAR_24 != 128) &&
      (VAR_14->native_mode.clock == 0))
   return 0;

  VAR_14->rmx_type = VAR_24;

  FUNC_5(&VAR_14->base);
 }

 if (VAR_9 == VAR_12->mode_info.output_csc_property) {
  if (VAR_8->encoder)
   VAR_14 = FUNC_11(VAR_8->encoder);
  else {
   const struct drm_connector_helper_funcs *VAR_26 = VAR_8->helper_private;
   VAR_14 = FUNC_11(VAR_26->best_encoder(VAR_8));
  }

  if (VAR_14->output_csc == VAR_10)
   return 0;

  VAR_14->output_csc = VAR_10;

  if (VAR_8->encoder && VAR_8->encoder->crtc) {
   struct drm_crtc *VAR_27 = VAR_8->encoder->crtc;
   struct radeon_crtc *VAR_28 = FUNC_10(VAR_27);

   VAR_28->output_csc = VAR_14->output_csc;





   VAR_27->funcs->gamma_set(VAR_27, ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0));
  }
 }

 return 0;
}
