
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy {int dummy; } ;
struct mtk_hdmi_phy {int pll; TYPE_1__* conf; } ;
struct TYPE_2__ {int (* hdmi_phy_disable_tmds ) (struct mtk_hdmi_phy*) ;} ;


 int FUNC_0 (int ) ;
 struct mtk_hdmi_phy* FUNC_1 (struct phy*) ;
 int FUNC_2 (struct mtk_hdmi_phy*) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_0)
{
 struct mtk_hdmi_phy *VAR_1 = FUNC_1(VAR_0);

 VAR_1->conf->hdmi_phy_disable_tmds(VAR_1);
 FUNC_0(VAR_1->pll);

 return 0;
}
