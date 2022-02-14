
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hdmi {int dvi_mode; } ;
struct drm_display_mode {int dummy; } ;


 int FUNC_0 (struct mtk_hdmi*,int ) ;
 int FUNC_1 (struct mtk_hdmi*,int) ;
 int FUNC_2 (struct mtk_hdmi*,struct drm_display_mode*) ;
 int FUNC_3 (struct mtk_hdmi*,int) ;
 int FUNC_4 (struct mtk_hdmi*) ;
 int FUNC_5 (struct mtk_hdmi*,int) ;

__attribute__((used)) static void FUNC_6(struct mtk_hdmi *VAR_0,
         struct drm_display_mode *VAR_1)
{
 FUNC_4(VAR_0);
 FUNC_1(VAR_0, 1);
 FUNC_5(VAR_0, 0xff);
 FUNC_0(VAR_0, VAR_0->dvi_mode);
 FUNC_3(VAR_0, 1);

 FUNC_2(VAR_0, VAR_1);
}
