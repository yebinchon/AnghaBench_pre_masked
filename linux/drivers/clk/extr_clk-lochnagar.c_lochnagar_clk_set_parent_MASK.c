
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regmap {int dummy; } ;
struct lochnagar_clk_priv {int dev; struct regmap* regmap; } ;
struct lochnagar_clk {int name; int src_mask; int src_reg; struct lochnagar_clk_priv* priv; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 struct lochnagar_clk* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (struct regmap*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct lochnagar_clk *VAR_2 = FUNC_1(VAR_0);
 struct lochnagar_clk_priv *VAR_3 = VAR_2->priv;
 struct regmap *VAR_4 = VAR_3->regmap;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4, VAR_2->src_reg, VAR_2->src_mask, VAR_1);
 if (VAR_5 < 0)
  FUNC_0(VAR_3->dev, "Failed to reparent %s: %d\n",
   VAR_2->name, VAR_5);

 return VAR_5;
}
