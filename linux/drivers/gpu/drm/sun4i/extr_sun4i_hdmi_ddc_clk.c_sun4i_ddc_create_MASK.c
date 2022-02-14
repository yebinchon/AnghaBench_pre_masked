
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sun4i_hdmi {int ddc_clk; int dev; TYPE_1__* variant; int regmap; } ;
struct TYPE_4__ {struct clk_init_data* init; } ;
struct sun4i_ddc {TYPE_2__ hw; int m_offset; int pre_div; struct sun4i_hdmi* hdmi; int reg; } ;
struct clk_init_data {char* name; char const** parent_names; int num_parents; int * ops; } ;
struct clk {int dummy; } ;
struct TYPE_3__ {int ddc_clk_m_offset; int ddc_clk_pre_divider; int ddc_clk_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (struct clk*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 struct sun4i_ddc* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_3 ;

int FUNC_6(struct sun4i_hdmi *VAR_4, struct clk *VAR_5)
{
 struct clk_init_data VAR_6;
 struct sun4i_ddc *VAR_7;
 const char *VAR_8;

 VAR_8 = FUNC_2(VAR_5);
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_4(VAR_4->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->reg = FUNC_5(VAR_4->dev, VAR_4->regmap,
        VAR_4->variant->ddc_clk_reg);
 if (FUNC_0(VAR_7->reg))
  return FUNC_1(VAR_7->reg);

 VAR_6.name = "hdmi-ddc";
 VAR_6.ops = &VAR_3;
 VAR_6.parent_names = &VAR_8;
 VAR_6.num_parents = 1;

 VAR_7->hdmi = VAR_4;
 VAR_7->hw.init = &VAR_6;
 VAR_7->pre_div = VAR_4->variant->ddc_clk_pre_divider;
 VAR_7->m_offset = VAR_4->variant->ddc_clk_m_offset;

 VAR_4->ddc_clk = FUNC_3(VAR_4->dev, &VAR_7->hw);
 if (FUNC_0(VAR_4->ddc_clk))
  return FUNC_1(VAR_4->ddc_clk);

 return 0;
}
