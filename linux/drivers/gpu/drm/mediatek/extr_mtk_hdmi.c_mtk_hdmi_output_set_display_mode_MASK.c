
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hdmi {int phy; int dev; } ;
struct drm_display_mode {int clock; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mtk_hdmi*,struct drm_display_mode*) ;
 int FUNC_2 (struct mtk_hdmi*) ;
 int FUNC_3 (struct mtk_hdmi*) ;
 int FUNC_4 (struct mtk_hdmi*) ;
 int FUNC_5 (struct mtk_hdmi*) ;
 int FUNC_6 (struct mtk_hdmi*,int) ;
 int FUNC_7 (struct mtk_hdmi*,int) ;
 int FUNC_8 (struct mtk_hdmi*,struct drm_display_mode*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct mtk_hdmi *VAR_0,
         struct drm_display_mode *VAR_1)
{
 int VAR_2;

 FUNC_6(VAR_0, 1);
 FUNC_2(VAR_0);
 FUNC_4(VAR_0);
 FUNC_9(VAR_0->phy);

 VAR_2 = FUNC_7(VAR_0,
      VAR_1->clock * 1000);
 if (VAR_2) {
  FUNC_0(VAR_0->dev, "Failed to set vpll: %d\n", VAR_2);
  return VAR_2;
 }
 FUNC_8(VAR_0, VAR_1);

 FUNC_10(VAR_0->phy);
 FUNC_1(VAR_0, VAR_1);

 FUNC_6(VAR_0, 0);
 FUNC_3(VAR_0);
 FUNC_5(VAR_0);

 return 0;
}
