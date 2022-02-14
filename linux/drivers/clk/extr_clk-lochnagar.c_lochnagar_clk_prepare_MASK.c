
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct lochnagar_clk_priv {int dev; struct regmap* regmap; } ;
struct lochnagar_clk {int name; int ena_mask; int cfg_reg; struct lochnagar_clk_priv* priv; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 struct lochnagar_clk* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (struct regmap*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0)
{
 struct lochnagar_clk *VAR_1 = FUNC_1(VAR_0);
 struct lochnagar_clk_priv *VAR_2 = VAR_1->priv;
 struct regmap *VAR_3 = VAR_2->regmap;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_1->cfg_reg,
     VAR_1->ena_mask, VAR_1->ena_mask);
 if (VAR_4 < 0)
  FUNC_0(VAR_2->dev, "Failed to prepare %s: %d\n",
   VAR_1->name, VAR_4);

 return VAR_4;
}
