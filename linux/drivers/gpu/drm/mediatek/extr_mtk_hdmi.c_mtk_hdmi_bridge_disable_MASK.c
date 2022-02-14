
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hdmi {int enabled; int * clk; int phy; } ;
struct drm_bridge {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 struct mtk_hdmi* FUNC_1 (struct drm_bridge*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct drm_bridge *VAR_2)
{
 struct mtk_hdmi *VAR_3 = FUNC_1(VAR_2);

 if (!VAR_3->enabled)
  return;

 FUNC_2(VAR_3->phy);
 FUNC_0(VAR_3->clk[VAR_0]);
 FUNC_0(VAR_3->clk[VAR_1]);

 VAR_3->enabled = 0;
}
