
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sun8i_hdmi_phy {TYPE_1__* variant; int clk_phy; int regs; } ;
struct dw_hdmi {int dummy; } ;
struct drm_display_mode {int flags; int crtc_clock; } ;
struct TYPE_2__ {int (* phy_config ) (struct dw_hdmi*,struct sun8i_hdmi_phy*,int) ;scalar_t__ has_phy_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct dw_hdmi*,struct sun8i_hdmi_phy*,int) ;

__attribute__((used)) static int FUNC_3(struct dw_hdmi *VAR_6, void *VAR_7,
     struct drm_display_mode *VAR_8)
{
 struct sun8i_hdmi_phy *VAR_9 = (struct sun8i_hdmi_phy *)VAR_7;
 u32 VAR_10 = 0;

 if (VAR_8->flags & VAR_0)
  VAR_10 |= VAR_3;

 if (VAR_8->flags & VAR_1)
  VAR_10 |= VAR_4;

 FUNC_1(VAR_9->regs, VAR_5,
      VAR_2, VAR_10);

 if (VAR_9->variant->has_phy_clk)
  FUNC_0(VAR_9->clk_phy, VAR_8->crtc_clock * 1000);

 return VAR_9->variant->phy_config(VAR_6, VAR_9, VAR_8->crtc_clock * 1000);
}
