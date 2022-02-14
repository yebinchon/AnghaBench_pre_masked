
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_hdmi {int cec_adap; scalar_t__ hdmi_monitor; int i2c; scalar_t__ ddc_i2c; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,struct edid*) ;
 int FUNC_2 (struct drm_connector*,struct edid*) ;
 struct sun4i_hdmi* FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct drm_connector*,struct edid*) ;
 scalar_t__ FUNC_5 (struct edid*) ;
 struct edid* FUNC_6 (struct drm_connector*,int ) ;
 int FUNC_7 (struct edid*) ;

__attribute__((used)) static int FUNC_8(struct drm_connector *VAR_0)
{
 struct sun4i_hdmi *VAR_1 = FUNC_3(VAR_0);
 struct edid *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_6(VAR_0, VAR_1->ddc_i2c ?: VAR_1->i2c);
 if (!VAR_2)
  return 0;

 VAR_1->hdmi_monitor = FUNC_5(VAR_2);
 FUNC_0("Monitor is %s monitor\n",
    VAR_1->hdmi_monitor ? "an HDMI" : "a DVI");

 FUNC_4(VAR_0, VAR_2);
 FUNC_1(VAR_1->cec_adap, VAR_2);
 VAR_3 = FUNC_2(VAR_0, VAR_2);
 FUNC_7(VAR_2);

 return VAR_3;
}
