
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct clk_init_data* init; } ;
struct sun8i_phy_clk {TYPE_1__ hw; struct sun8i_hdmi_phy* phy; } ;
struct sun8i_hdmi_phy {int clk_phy; int clk_pll1; int clk_pll0; } ;
struct device {int dummy; } ;
struct clk_init_data {char* name; char const** parent_names; int num_parents; int flags; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (struct device*,TYPE_1__*) ;
 struct sun8i_phy_clk* FUNC_4 (struct device*,int,int ) ;
 int VAR_4 ;

int FUNC_5(struct sun8i_hdmi_phy *VAR_5, struct device *VAR_6,
    bool VAR_7)
{
 struct clk_init_data VAR_8;
 struct sun8i_phy_clk *VAR_9;
 const char *VAR_10[2];

 VAR_10[0] = FUNC_2(VAR_5->clk_pll0);
 if (!VAR_10[0])
  return -VAR_1;

 if (VAR_7) {
  VAR_10[1] = FUNC_2(VAR_5->clk_pll1);
  if (!VAR_10[1])
   return -VAR_1;
 }

 VAR_9 = FUNC_4(VAR_6, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_8.name = "hdmi-phy-clk";
 VAR_8.ops = &VAR_4;
 VAR_8.parent_names = VAR_10;
 VAR_8.num_parents = VAR_7 ? 2 : 1;
 VAR_8.flags = VAR_0;

 VAR_9->phy = VAR_5;
 VAR_9->hw.init = &VAR_8;

 VAR_5->clk_phy = FUNC_3(VAR_6, &VAR_9->hw);
 if (FUNC_0(VAR_5->clk_phy))
  return FUNC_1(VAR_5->clk_phy);

 return 0;
}
