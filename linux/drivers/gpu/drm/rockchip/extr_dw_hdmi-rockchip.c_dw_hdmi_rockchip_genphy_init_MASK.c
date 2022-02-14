
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_hdmi {int phy; } ;
struct dw_hdmi {int dummy; } ;
struct drm_display_mode {int dummy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dw_hdmi *VAR_0, void *VAR_1,
        struct drm_display_mode *VAR_2)
{
 struct rockchip_hdmi *VAR_3 = (struct rockchip_hdmi *)VAR_1;

 return FUNC_0(VAR_3->phy);
}
