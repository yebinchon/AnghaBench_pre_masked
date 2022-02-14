
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_hdmi_encoder {int hdmi_monitor; } ;
struct vc4_hdmi_connector {struct drm_encoder* encoder; } ;
struct vc4_dev {TYPE_1__* hdmi; } ;
struct edid {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;
struct TYPE_2__ {int cec_adap; int ddc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct edid*) ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 int FUNC_2 (struct drm_connector*,struct edid*) ;
 int FUNC_3 (struct edid*) ;
 struct edid* FUNC_4 (struct drm_connector*,int ) ;
 int FUNC_5 (struct edid*) ;
 struct vc4_dev* FUNC_6 (struct drm_device*) ;
 struct vc4_hdmi_connector* FUNC_7 (struct drm_connector*) ;
 struct vc4_hdmi_encoder* FUNC_8 (struct drm_encoder*) ;

__attribute__((used)) static int FUNC_9(struct drm_connector *VAR_1)
{
 struct vc4_hdmi_connector *VAR_2 =
  FUNC_7(VAR_1);
 struct drm_encoder *VAR_3 = VAR_2->encoder;
 struct vc4_hdmi_encoder *VAR_4 = FUNC_8(VAR_3);
 struct drm_device *VAR_5 = VAR_1->dev;
 struct vc4_dev *VAR_6 = FUNC_6(VAR_5);
 int VAR_7 = 0;
 struct edid *VAR_8;

 VAR_8 = FUNC_4(VAR_1, VAR_6->hdmi->ddc);
 FUNC_0(VAR_6->hdmi->cec_adap, VAR_8);
 if (!VAR_8)
  return -VAR_0;

 VAR_4->hdmi_monitor = FUNC_3(VAR_8);

 FUNC_2(VAR_1, VAR_8);
 VAR_7 = FUNC_1(VAR_1, VAR_8);
 FUNC_5(VAR_8);

 return VAR_7;
}
