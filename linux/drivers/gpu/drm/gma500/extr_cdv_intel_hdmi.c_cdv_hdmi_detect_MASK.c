
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mid_intel_hdmi_priv {int has_hdmi_sink; int has_hdmi_audio; } ;
struct gma_encoder {TYPE_1__* i2c_bus; struct mid_intel_hdmi_priv* dev_priv; } ;
struct edid {int input; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_2__ {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct edid*) ;
 int FUNC_1 (struct edid*) ;
 struct edid* FUNC_2 (struct drm_connector*,int *) ;
 struct gma_encoder* FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct edid*) ;

__attribute__((used)) static enum drm_connector_status FUNC_5(
    struct drm_connector *VAR_3, bool VAR_4)
{
 struct gma_encoder *VAR_5 = FUNC_3(VAR_3);
 struct mid_intel_hdmi_priv *VAR_6 = VAR_5->dev_priv;
 struct edid *VAR_7 = ((void*)0);
 enum drm_connector_status VAR_8 = VAR_2;

 VAR_7 = FUNC_2(VAR_3, &VAR_5->i2c_bus->adapter);

 VAR_6->has_hdmi_sink = 0;
 VAR_6->has_hdmi_audio = 0;
 if (VAR_7) {
  if (VAR_7->input & VAR_0) {
   VAR_8 = VAR_1;
   VAR_6->has_hdmi_sink =
      FUNC_0(VAR_7);
   VAR_6->has_hdmi_audio =
      FUNC_1(VAR_7);
  }
  FUNC_4(VAR_7);
 }
 return VAR_8;
}
