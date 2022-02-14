
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mid_intel_hdmi_priv {int hdmi_reg; } ;
struct gma_encoder {struct mid_intel_hdmi_priv* dev_priv; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct gma_encoder* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_2, int VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 struct gma_encoder *VAR_5 = FUNC_2(VAR_2);
 struct mid_intel_hdmi_priv *VAR_6 = VAR_5->dev_priv;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_6->hdmi_reg);

 if (VAR_3 != VAR_0)
  FUNC_1(VAR_6->hdmi_reg, VAR_7 & ~VAR_1);
 else
  FUNC_1(VAR_6->hdmi_reg, VAR_7 | VAR_1);
 FUNC_0(VAR_6->hdmi_reg);
}
