
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_context {int dvi_mode; int notifier; int dev; int ddc_adpt; } ;
struct edid {int height_cm; int width_cm; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (int ,char*,char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct edid*) ;
 struct hdmi_context* FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*,struct edid*) ;
 int FUNC_4 (struct drm_connector*,struct edid*) ;
 int FUNC_5 (struct edid*) ;
 struct edid* FUNC_6 (struct drm_connector*,int ) ;
 int FUNC_7 (struct edid*) ;

__attribute__((used)) static int FUNC_8(struct drm_connector *VAR_1)
{
 struct hdmi_context *VAR_2 = FUNC_2(VAR_1);
 struct edid *VAR_3;
 int VAR_4;

 if (!VAR_2->ddc_adpt)
  return -VAR_0;

 VAR_3 = FUNC_6(VAR_1, VAR_2->ddc_adpt);
 if (!VAR_3)
  return -VAR_0;

 VAR_2->dvi_mode = !FUNC_5(VAR_3);
 FUNC_0(VAR_2->dev, "%s : width[%d] x height[%d]\n",
     (VAR_2->dvi_mode ? "dvi monitor" : "hdmi monitor"),
     VAR_3->width_cm, VAR_3->height_cm);

 FUNC_4(VAR_1, VAR_3);
 FUNC_1(VAR_2->notifier, VAR_3);

 VAR_4 = FUNC_3(VAR_1, VAR_3);

 FUNC_7(VAR_3);

 return VAR_4;
}
