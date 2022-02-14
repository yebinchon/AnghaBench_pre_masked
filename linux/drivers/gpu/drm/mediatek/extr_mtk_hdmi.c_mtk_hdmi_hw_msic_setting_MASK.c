
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hdmi {int dummy; } ;
struct drm_display_mode {int flags; int clock; int vdisplay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mtk_hdmi*,int ,int ) ;
 int FUNC_1 (struct mtk_hdmi*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mtk_hdmi *VAR_5,
         struct drm_display_mode *VAR_6)
{
 FUNC_0(VAR_5, VAR_4, VAR_1);

 if (VAR_6->flags & VAR_2 &&
     VAR_6->clock == 74250 &&
     VAR_6->vdisplay == 1080)
  FUNC_0(VAR_5, VAR_3, VAR_0);
 else
  FUNC_1(VAR_5, VAR_3, VAR_0);
}
