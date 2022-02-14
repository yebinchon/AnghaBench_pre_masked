
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hdmi {int powered; } ;
struct drm_bridge {int dummy; } ;


 struct mtk_hdmi* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (struct mtk_hdmi*,int) ;
 int FUNC_2 (struct mtk_hdmi*,int) ;

__attribute__((used)) static void FUNC_3(struct drm_bridge *VAR_0)
{
 struct mtk_hdmi *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1, 1);
 FUNC_1(VAR_1, 1);

 VAR_1->powered = 1;
}
