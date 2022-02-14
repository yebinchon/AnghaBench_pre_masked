
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct drm_connector_helper_funcs {struct drm_encoder* (* best_encoder ) (struct drm_connector*) ;} ;
struct TYPE_2__ {int bpc; unsigned int max_tmds_clock; int edid_hdmi_dc_modes; } ;
struct drm_connector {int connector_type; TYPE_1__ display_info; int name; struct drm_connector_helper_funcs* helper_private; } ;
struct amdgpu_encoder_atom_dig {int lcd_misc; } ;
struct amdgpu_encoder {struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct amdgpu_connector_atom_dig {int dp_sink_type; } ;
struct amdgpu_connector {unsigned int pixelclock_for_modeset; struct amdgpu_connector_atom_dig* con_priv; int use_digital; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,...) ;
 int VAR_4 ;







 int FUNC_1 (struct drm_connector*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 struct drm_encoder* FUNC_3 (struct drm_connector*) ;
 struct amdgpu_connector* FUNC_4 (struct drm_connector*) ;
 struct amdgpu_encoder* FUNC_5 (struct drm_encoder*) ;

int FUNC_6(struct drm_connector *VAR_6)
{
 struct amdgpu_connector *VAR_7 = FUNC_4(VAR_6);
 struct amdgpu_connector_atom_dig *VAR_8;
 int VAR_9 = 8;
 unsigned VAR_10, VAR_11;

 switch (VAR_6->connector_type) {
 case 133:
 case 130:
  if (VAR_7->use_digital) {
   if (FUNC_2(FUNC_1(VAR_6))) {
    if (VAR_6->display_info.bpc)
     VAR_9 = VAR_6->display_info.bpc;
   }
  }
  break;
 case 134:
 case 131:
  if (FUNC_2(FUNC_1(VAR_6))) {
   if (VAR_6->display_info.bpc)
    VAR_9 = VAR_6->display_info.bpc;
  }
  break;
 case 132:
  VAR_8 = VAR_7->con_priv;
  if ((VAR_8->dp_sink_type == VAR_2) ||
      (VAR_8->dp_sink_type == VAR_3) ||
      FUNC_2(FUNC_1(VAR_6))) {
   if (VAR_6->display_info.bpc)
    VAR_9 = VAR_6->display_info.bpc;
  }
  break;
 case 128:
 case 129:
  if (VAR_6->display_info.bpc)
   VAR_9 = VAR_6->display_info.bpc;
  else {
   const struct drm_connector_helper_funcs *VAR_12 =
    VAR_6->helper_private;
   struct drm_encoder *VAR_13 = VAR_12->best_encoder(VAR_6);
   struct amdgpu_encoder *VAR_14 = FUNC_5(VAR_13);
   struct amdgpu_encoder_atom_dig *VAR_15 = VAR_14->enc_priv;

   if (VAR_15->lcd_misc & VAR_0)
    VAR_9 = 6;
   else if (VAR_15->lcd_misc & VAR_1)
    VAR_9 = 8;
  }
  break;
 }

 if (FUNC_2(FUNC_1(VAR_6))) {






  if (VAR_9 > 12) {
   FUNC_0("%s: HDMI deep color %d bpc unsupported. Using 12 bpc.\n",
      VAR_6->name, VAR_9);
   VAR_9 = 12;
  }


  if (VAR_6->display_info.max_tmds_clock > 0) {

   VAR_10 = VAR_7->pixelclock_for_modeset;


   VAR_11 = VAR_6->display_info.max_tmds_clock;

   FUNC_0("%s: hdmi mode dotclock %d kHz, max tmds input clock %d kHz.\n",
      VAR_6->name, VAR_10, VAR_11);


   if ((VAR_9 == 12) && (VAR_10 * 3/2 > VAR_11)) {
    if ((VAR_6->display_info.edid_hdmi_dc_modes & VAR_4) &&
        (VAR_10 * 5/4 <= VAR_11))
     VAR_9 = 10;
    else
     VAR_9 = 8;

    FUNC_0("%s: HDMI deep color 12 bpc exceeds max tmds clock. Using %d bpc.\n",
       VAR_6->name, VAR_9);
   }

   if ((VAR_9 == 10) && (VAR_10 * 5/4 > VAR_11)) {
    VAR_9 = 8;
    FUNC_0("%s: HDMI deep color 10 bpc exceeds max tmds clock. Using %d bpc.\n",
       VAR_6->name, VAR_9);
   }
  } else if (VAR_9 > 8) {

   FUNC_0("%s: Required max tmds clock for HDMI deep color missing. Using 8 bpc.\n",
      VAR_6->name);
   VAR_9 = 8;
  }
 }

 if ((VAR_5 == 0) && (VAR_9 > 8)) {
  FUNC_0("%s: Deep color disabled. Set amdgpu module param deep_color=1 to enable.\n",
     VAR_6->name);
  VAR_9 = 8;
 }

 FUNC_0("%s: Display bpc=%d, returned bpc=%d\n",
    VAR_6->name, VAR_6->display_info.bpc, VAR_9);

 return VAR_9;
}
