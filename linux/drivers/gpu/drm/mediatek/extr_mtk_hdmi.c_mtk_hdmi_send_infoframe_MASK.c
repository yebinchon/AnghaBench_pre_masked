
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hdmi {int dummy; } ;
struct drm_display_mode {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_hdmi*) ;
 int FUNC_1 (struct mtk_hdmi*,struct drm_display_mode*) ;
 int FUNC_2 (struct mtk_hdmi*,char*,char*) ;
 int FUNC_3 (struct mtk_hdmi*,struct drm_display_mode*) ;

__attribute__((used)) static void FUNC_4(struct mtk_hdmi *VAR_1,
        struct drm_display_mode *VAR_2)
{
 FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_2);
 FUNC_2(VAR_1, "mediatek", "On-chip HDMI");
 if (VAR_2->flags & VAR_0)
  FUNC_3(VAR_1, VAR_2);
}
