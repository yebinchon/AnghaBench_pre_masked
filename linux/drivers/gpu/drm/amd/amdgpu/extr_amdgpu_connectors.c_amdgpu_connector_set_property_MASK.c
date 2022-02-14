
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct drm_property {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_5__ {struct drm_property* scaling_mode_property; } ;
struct drm_device {TYPE_2__ mode_config; struct amdgpu_device* dev_private; } ;
struct drm_connector_helper_funcs {struct drm_encoder* (* best_encoder ) (struct drm_connector*) ;} ;
struct drm_connector {struct drm_connector_helper_funcs* helper_private; struct drm_encoder* encoder; struct drm_device* dev; } ;
struct amdgpu_encoder_atom_dig {int coherent_mode; } ;
struct TYPE_6__ {scalar_t__ clock; } ;
struct amdgpu_encoder {int underscan_type; int underscan_hborder; int underscan_vborder; int rmx_type; int base; TYPE_3__ native_mode; struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct TYPE_4__ {struct drm_property* load_detect_property; struct drm_property* underscan_vborder_property; struct drm_property* underscan_hborder_property; struct drm_property* underscan_property; struct drm_property* dither_property; struct drm_property* audio_property; struct drm_property* coherent_mode_property; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct amdgpu_connector {int audio; int dither; int dac_load_detect; } ;
typedef enum amdgpu_rmx_type { ____Placeholder_amdgpu_rmx_type } amdgpu_rmx_type ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct drm_encoder* FUNC_0 (struct drm_connector*,int ) ;
 int FUNC_1 (int *) ;
 struct drm_encoder* FUNC_2 (struct drm_connector*) ;
 struct amdgpu_connector* FUNC_3 (struct drm_connector*) ;
 struct amdgpu_encoder* FUNC_4 (struct drm_encoder*) ;

__attribute__((used)) static int FUNC_5(struct drm_connector *VAR_5,
       struct drm_property *VAR_6,
       uint64_t VAR_7)
{
 struct drm_device *VAR_8 = VAR_5->dev;
 struct amdgpu_device *VAR_9 = VAR_8->dev_private;
 struct drm_encoder *VAR_10;
 struct amdgpu_encoder *VAR_11;

 if (VAR_6 == VAR_9->mode_info.coherent_mode_property) {
  struct amdgpu_encoder_atom_dig *VAR_12;
  bool VAR_13;


  VAR_10 = FUNC_0(VAR_5, VAR_0);
  if (!VAR_10)
   return 0;

  VAR_11 = FUNC_4(VAR_10);

  if (!VAR_11->enc_priv)
   return 0;

  VAR_12 = VAR_11->enc_priv;
  VAR_13 = VAR_7 ? 1 : 0;
  if (VAR_12->coherent_mode != VAR_13) {
   VAR_12->coherent_mode = VAR_13;
   FUNC_1(&VAR_11->base);
  }
 }

 if (VAR_6 == VAR_9->mode_info.audio_property) {
  struct amdgpu_connector *VAR_14 = FUNC_3(VAR_5);

  VAR_10 = FUNC_0(VAR_5, VAR_0);
  if (!VAR_10)
   return 0;

  VAR_11 = FUNC_4(VAR_10);

  if (VAR_14->audio != VAR_7) {
   VAR_14->audio = VAR_7;
   FUNC_1(&VAR_11->base);
  }
 }

 if (VAR_6 == VAR_9->mode_info.dither_property) {
  struct amdgpu_connector *VAR_15 = FUNC_3(VAR_5);

  VAR_10 = FUNC_0(VAR_5, VAR_0);
  if (!VAR_10)
   return 0;

  VAR_11 = FUNC_4(VAR_10);

  if (VAR_15->dither != VAR_7) {
   VAR_15->dither = VAR_7;
   FUNC_1(&VAR_11->base);
  }
 }

 if (VAR_6 == VAR_9->mode_info.underscan_property) {

  VAR_10 = FUNC_0(VAR_5, VAR_0);
  if (!VAR_10)
   return 0;

  VAR_11 = FUNC_4(VAR_10);

  if (VAR_11->underscan_type != VAR_7) {
   VAR_11->underscan_type = VAR_7;
   FUNC_1(&VAR_11->base);
  }
 }

 if (VAR_6 == VAR_9->mode_info.underscan_hborder_property) {

  VAR_10 = FUNC_0(VAR_5, VAR_0);
  if (!VAR_10)
   return 0;

  VAR_11 = FUNC_4(VAR_10);

  if (VAR_11->underscan_hborder != VAR_7) {
   VAR_11->underscan_hborder = VAR_7;
   FUNC_1(&VAR_11->base);
  }
 }

 if (VAR_6 == VAR_9->mode_info.underscan_vborder_property) {

  VAR_10 = FUNC_0(VAR_5, VAR_0);
  if (!VAR_10)
   return 0;

  VAR_11 = FUNC_4(VAR_10);

  if (VAR_11->underscan_vborder != VAR_7) {
   VAR_11->underscan_vborder = VAR_7;
   FUNC_1(&VAR_11->base);
  }
 }

 if (VAR_6 == VAR_9->mode_info.load_detect_property) {
  struct amdgpu_connector *VAR_16 =
   FUNC_3(VAR_5);

  if (VAR_7 == 0)
   VAR_16->dac_load_detect = 0;
  else
   VAR_16->dac_load_detect = 1;
 }

 if (VAR_6 == VAR_8->mode_config.scaling_mode_property) {
  enum amdgpu_rmx_type VAR_17;

  if (VAR_5->encoder) {
   VAR_11 = FUNC_4(VAR_5->encoder);
  } else {
   const struct drm_connector_helper_funcs *VAR_18 = VAR_5->helper_private;
   VAR_11 = FUNC_4(VAR_18->best_encoder(VAR_5));
  }

  switch (VAR_7) {
  default:
  case 128: VAR_17 = VAR_4; break;
  case 130: VAR_17 = VAR_2; break;
  case 131: VAR_17 = VAR_1; break;
  case 129: VAR_17 = VAR_3; break;
  }
  if (VAR_11->rmx_type == VAR_17)
   return 0;

  if ((VAR_17 != 128) &&
      (VAR_11->native_mode.clock == 0))
   return 0;

  VAR_11->rmx_type = VAR_17;

  FUNC_1(&VAR_11->base);
 }

 return 0;
}
