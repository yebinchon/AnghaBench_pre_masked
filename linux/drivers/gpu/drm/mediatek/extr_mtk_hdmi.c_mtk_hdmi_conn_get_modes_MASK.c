
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hdmi {int dvi_mode; int ddc_adpt; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_connector*,struct edid*) ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 int FUNC_2 (struct edid*) ;
 struct edid* FUNC_3 (struct drm_connector*,int ) ;
 struct mtk_hdmi* FUNC_4 (struct drm_connector*) ;
 int FUNC_5 (struct edid*) ;

__attribute__((used)) static int FUNC_6(struct drm_connector *VAR_1)
{
 struct mtk_hdmi *VAR_2 = FUNC_4(VAR_1);
 struct edid *VAR_3;
 int VAR_4;

 if (!VAR_2->ddc_adpt)
  return -VAR_0;

 VAR_3 = FUNC_3(VAR_1, VAR_2->ddc_adpt);
 if (!VAR_3)
  return -VAR_0;

 VAR_2->dvi_mode = !FUNC_2(VAR_3);

 FUNC_1(VAR_1, VAR_3);

 VAR_4 = FUNC_0(VAR_1, VAR_3);
 FUNC_5(VAR_3);
 return VAR_4;
}
