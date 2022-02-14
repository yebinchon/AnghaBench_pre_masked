
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_ops {int dummy; } ;
struct mtk_hdmi_phy {int dev; TYPE_1__* conf; } ;
struct TYPE_2__ {scalar_t__ hdmi_phy_disable_tmds; scalar_t__ hdmi_phy_enable_tmds; } ;


 int FUNC_0 (int ,char*) ;
 struct phy_ops const VAR_0 ;

__attribute__((used)) static const struct phy_ops *
FUNC_1(const struct mtk_hdmi_phy *VAR_1)
{
 if (VAR_1 && VAR_1->conf &&
     VAR_1->conf->hdmi_phy_enable_tmds &&
     VAR_1->conf->hdmi_phy_disable_tmds)
  return &VAR_0;

 FUNC_0(VAR_1->dev, "Failed to get dev ops of phy\n");
  return ((void*)0);
}
