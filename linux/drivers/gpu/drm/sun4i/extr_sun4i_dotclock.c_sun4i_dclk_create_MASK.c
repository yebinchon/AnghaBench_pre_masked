
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_tcon {int dclk; int regs; int sclk0; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct sun4i_dclk {TYPE_1__ hw; int regmap; struct sun4i_tcon* tcon; } ;
struct device {int of_node; } ;
struct clk_init_data {char const* name; char const** parent_names; int num_parents; int flags; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (struct device*,TYPE_1__*) ;
 struct sun4i_dclk* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (int ,char*,int ,char const**) ;
 int VAR_3 ;

int FUNC_6(struct device *VAR_4, struct sun4i_tcon *VAR_5)
{
 const char *VAR_6, *VAR_7;
 struct clk_init_data VAR_8;
 struct sun4i_dclk *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_2(VAR_5->sclk0);
 VAR_10 = FUNC_5(VAR_4->of_node,
         "clock-output-names", 0,
         &VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_4(VAR_4, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;
 VAR_9->tcon = VAR_5;

 VAR_8.name = VAR_6;
 VAR_8.ops = &VAR_3;
 VAR_8.parent_names = &VAR_7;
 VAR_8.num_parents = 1;
 VAR_8.flags = VAR_0;

 VAR_9->regmap = VAR_5->regs;
 VAR_9->hw.init = &VAR_8;

 VAR_5->dclk = FUNC_3(VAR_4, &VAR_9->hw);
 if (FUNC_0(VAR_5->dclk))
  return FUNC_1(VAR_5->dclk);

 return 0;
}
