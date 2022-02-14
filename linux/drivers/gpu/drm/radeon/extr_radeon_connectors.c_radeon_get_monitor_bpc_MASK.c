
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_encoder_atom_dig {int lcd_misc; } ;
struct radeon_encoder {struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct radeon_connector_atom_dig {int dp_sink_type; } ;
struct radeon_connector {int pixelclock_for_modeset; struct radeon_connector_atom_dig* con_priv; int use_digital; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector_helper_funcs {struct drm_encoder* (* best_encoder ) (struct drm_connector*) ;} ;
struct TYPE_2__ {int bpc; int max_tmds_clock; int edid_hdmi_dc_modes; } ;
struct drm_connector {int connector_type; TYPE_1__ display_info; int name; struct drm_connector_helper_funcs* helper_private; struct drm_device* dev; } ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,int ,...) ;
 int VAR_4 ;







 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct drm_connector*) ;
 scalar_t__ VAR_5 ;
 struct drm_encoder* FUNC_6 (struct drm_connector*) ;
 struct radeon_connector* FUNC_7 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_8 (struct drm_encoder*) ;

int FUNC_9(struct drm_connector *VAR_6)
{
 struct drm_device *VAR_7 = VAR_6->dev;
 struct radeon_device *VAR_8 = VAR_7->dev_private;
 struct radeon_connector *VAR_9 = FUNC_7(VAR_6);
 struct radeon_connector_atom_dig *VAR_10;
 int VAR_11 = 8;
 int VAR_12, VAR_13;

 switch (VAR_6->connector_type) {
 case 133:
 case 130:
  if (VAR_9->use_digital) {
   if (FUNC_4(FUNC_5(VAR_6))) {
    if (VAR_6->display_info.bpc)
     VAR_11 = VAR_6->display_info.bpc;
   }
  }
  break;
 case 134:
 case 131:
  if (FUNC_4(FUNC_5(VAR_6))) {
   if (VAR_6->display_info.bpc)
    VAR_11 = VAR_6->display_info.bpc;
  }
  break;
 case 132:
  VAR_10 = VAR_9->con_priv;
  if ((VAR_10->dp_sink_type == VAR_2) ||
      (VAR_10->dp_sink_type == VAR_3) ||
      FUNC_4(FUNC_5(VAR_6))) {
   if (VAR_6->display_info.bpc)
    VAR_11 = VAR_6->display_info.bpc;
  }
  break;
 case 128:
 case 129:
  if (VAR_6->display_info.bpc)
   VAR_11 = VAR_6->display_info.bpc;
  else if (FUNC_1(VAR_8) || FUNC_2(VAR_8)) {
   const struct drm_connector_helper_funcs *VAR_14 =
    VAR_6->helper_private;
   struct drm_encoder *VAR_15 = VAR_14->best_encoder(VAR_6);
   struct radeon_encoder *VAR_16 = FUNC_8(VAR_15);
   struct radeon_encoder_atom_dig *VAR_17 = VAR_16->enc_priv;

   if (VAR_17->lcd_misc & VAR_0)
    VAR_11 = 6;
   else if (VAR_17->lcd_misc & VAR_1)
    VAR_11 = 8;
  }
  break;
 }

 if (FUNC_4(FUNC_5(VAR_6))) {

  if ((VAR_11 > 8) && !FUNC_0(VAR_8)) {
   FUNC_3("%s: HDMI deep color %d bpc unsupported. Using 8 bpc.\n",
       VAR_6->name, VAR_11);
   VAR_11 = 8;
  }







  if (VAR_11 > 12) {
   FUNC_3("%s: HDMI deep color %d bpc unsupported. Using 12 bpc.\n",
       VAR_6->name, VAR_11);
   VAR_11 = 12;
  }


  if (VAR_6->display_info.max_tmds_clock > 0) {

   VAR_12 = VAR_9->pixelclock_for_modeset;


   VAR_13 = VAR_6->display_info.max_tmds_clock;

   FUNC_3("%s: hdmi mode dotclock %d kHz, max tmds input clock %d kHz.\n",
       VAR_6->name, VAR_12, VAR_13);


   if ((VAR_11 == 12) && (VAR_12 * 3/2 > VAR_13)) {
    if ((VAR_6->display_info.edid_hdmi_dc_modes & VAR_4) &&
     (VAR_12 * 5/4 <= VAR_13))
     VAR_11 = 10;
    else
     VAR_11 = 8;

    FUNC_3("%s: HDMI deep color 12 bpc exceeds max tmds clock. Using %d bpc.\n",
        VAR_6->name, VAR_11);
   }

   if ((VAR_11 == 10) && (VAR_12 * 5/4 > VAR_13)) {
    VAR_11 = 8;
    FUNC_3("%s: HDMI deep color 10 bpc exceeds max tmds clock. Using %d bpc.\n",
        VAR_6->name, VAR_11);
   }
  }
  else if (VAR_11 > 8) {

   FUNC_3("%s: Required max tmds clock for HDMI deep color missing. Using 8 bpc.\n",
       VAR_6->name);
   VAR_11 = 8;
  }
 }

 if ((VAR_5 == 0) && (VAR_11 > 8)) {
  FUNC_3("%s: Deep color disabled. Set radeon module param deep_color=1 to enable.\n",
      VAR_6->name);
  VAR_11 = 8;
 }

 FUNC_3("%s: Display bpc=%d, returned bpc=%d\n",
     VAR_6->name, VAR_6->display_info.bpc, VAR_11);

 return VAR_11;
}
