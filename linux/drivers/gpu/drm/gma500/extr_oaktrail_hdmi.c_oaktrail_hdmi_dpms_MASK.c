
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct oaktrail_hdmi_dev {int dummy; } ;
struct drm_psb_private {struct oaktrail_hdmi_dev* hdmi_priv; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct drm_encoder *VAR_2, int VAR_3)
{
 static int VAR_4 = -1;

 struct drm_device *VAR_5 = VAR_2->dev;
 struct drm_psb_private *VAR_6 = VAR_5->dev_private;
 struct oaktrail_hdmi_dev *VAR_7 = VAR_6->hdmi_priv;
 u32 VAR_8;

 if (VAR_4 == VAR_3)
  return;

 if (VAR_3 != VAR_0)
  VAR_8 = 0x0;
 else
  VAR_8 = 0x99;

 VAR_4 = VAR_3;
 FUNC_0(VAR_1, VAR_8);
}
