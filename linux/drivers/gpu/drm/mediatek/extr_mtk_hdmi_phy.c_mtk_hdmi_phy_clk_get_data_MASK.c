
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_hdmi_phy {TYPE_1__* conf; } ;
struct clk_init_data {int ops; int flags; } ;
struct TYPE_2__ {int hdmi_phy_clk_ops; int flags; } ;



__attribute__((used)) static void FUNC_0(struct mtk_hdmi_phy *VAR_0,
          struct clk_init_data *VAR_1)
{
 VAR_1->flags = VAR_0->conf->flags;
 VAR_1->ops = VAR_0->conf->hdmi_phy_clk_ops;
}
