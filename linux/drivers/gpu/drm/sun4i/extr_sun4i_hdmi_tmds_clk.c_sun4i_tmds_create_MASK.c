
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct clk_init_data* init; } ;
struct sun4i_tmds {TYPE_2__ hw; int div_offset; struct sun4i_hdmi* hdmi; } ;
struct sun4i_hdmi {int tmds_clk; int dev; TYPE_1__* variant; int pll1_clk; int pll0_clk; } ;
struct clk_init_data {char* name; char const** parent_names; int num_parents; int flags; int * ops; } ;
struct TYPE_3__ {int tmds_clk_div_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 struct sun4i_tmds* FUNC_4 (int ,int,int ) ;
 int VAR_4 ;

int FUNC_5(struct sun4i_hdmi *VAR_5)
{
 struct clk_init_data VAR_6;
 struct sun4i_tmds *VAR_7;
 const char *VAR_8[2];

 VAR_8[0] = FUNC_2(VAR_5->pll0_clk);
 if (!VAR_8[0])
  return -VAR_1;

 VAR_8[1] = FUNC_2(VAR_5->pll1_clk);
 if (!VAR_8[1])
  return -VAR_1;

 VAR_7 = FUNC_4(VAR_5->dev, sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_6.name = "hdmi-tmds";
 VAR_6.ops = &VAR_4;
 VAR_6.parent_names = VAR_8;
 VAR_6.num_parents = 2;
 VAR_6.flags = VAR_0;

 VAR_7->hdmi = VAR_5;
 VAR_7->hw.init = &VAR_6;
 VAR_7->div_offset = VAR_5->variant->tmds_clk_div_offset;

 VAR_5->tmds_clk = FUNC_3(VAR_5->dev, &VAR_7->hw);
 if (FUNC_0(VAR_5->tmds_clk))
  return FUNC_1(VAR_5->tmds_clk);

 return 0;
}
