
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun8i_hdmi_phy {TYPE_1__* variant; } ;
struct dw_hdmi {int dummy; } ;
struct TYPE_2__ {int (* phy_disable ) (struct dw_hdmi*,struct sun8i_hdmi_phy*) ;} ;


 int FUNC_0 (struct dw_hdmi*,struct sun8i_hdmi_phy*) ;

__attribute__((used)) static void FUNC_1(struct dw_hdmi *VAR_0, void *VAR_1)
{
 struct sun8i_hdmi_phy *VAR_2 = (struct sun8i_hdmi_phy *)VAR_1;

 VAR_2->variant->phy_disable(VAR_0, VAR_2);
}
