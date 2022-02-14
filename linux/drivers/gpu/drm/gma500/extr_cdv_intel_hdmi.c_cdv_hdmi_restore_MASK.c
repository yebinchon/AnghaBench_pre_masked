
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mid_intel_hdmi_priv {int hdmi_reg; int save_HDMIB; } ;
struct gma_encoder {struct mid_intel_hdmi_priv* dev_priv; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct gma_encoder* FUNC_2 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_3(struct drm_connector *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct gma_encoder *VAR_2 = FUNC_2(VAR_0);
 struct mid_intel_hdmi_priv *VAR_3 = VAR_2->dev_priv;

 FUNC_1(VAR_3->hdmi_reg, VAR_3->save_HDMIB);
 FUNC_0(VAR_3->hdmi_reg);
}
