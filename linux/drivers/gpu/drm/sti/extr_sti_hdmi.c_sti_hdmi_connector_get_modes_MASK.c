
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_hdmi_connector {struct sti_hdmi* hdmi; } ;
struct sti_hdmi {int notifier; scalar_t__ hdmi_monitor; int ddc_adapt; } ;
struct edid {int height_cm; int width_cm; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,struct edid*) ;
 int FUNC_4 (struct drm_connector*,struct edid*) ;
 int FUNC_5 (struct drm_connector*,struct edid*) ;
 scalar_t__ FUNC_6 (struct edid*) ;
 struct edid* FUNC_7 (struct drm_connector*,int ) ;
 int FUNC_8 (struct edid*) ;
 struct sti_hdmi_connector* FUNC_9 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_10(struct drm_connector *VAR_0)
{
 struct sti_hdmi_connector *VAR_1
  = FUNC_9(VAR_0);
 struct sti_hdmi *VAR_2 = VAR_1->hdmi;
 struct edid *VAR_3;
 int VAR_4;

 FUNC_0("\n");

 VAR_3 = FUNC_7(VAR_0, VAR_2->ddc_adapt);
 if (!VAR_3)
  goto fail;

 VAR_2->hdmi_monitor = FUNC_6(VAR_3);
 FUNC_1("%s : %dx%d cm\n",
        (VAR_2->hdmi_monitor ? "hdmi monitor" : "dvi monitor"),
        VAR_3->width_cm, VAR_3->height_cm);
 FUNC_3(VAR_2->notifier, VAR_3);

 VAR_4 = FUNC_4(VAR_0, VAR_3);
 FUNC_5(VAR_0, VAR_3);

 FUNC_8(VAR_3);
 return VAR_4;

fail:
 FUNC_2("Can't read HDMI EDID\n");
 return 0;
}
