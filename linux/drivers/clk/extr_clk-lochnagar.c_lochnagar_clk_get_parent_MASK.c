
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct regmap {int dummy; } ;
struct lochnagar_clk_priv {int dev; struct regmap* regmap; } ;
struct lochnagar_clk {unsigned int src_mask; int name; int src_reg; struct lochnagar_clk_priv* priv; } ;
struct clk_hw {int dummy; } ;


 unsigned int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ,char*,int ,int) ;
 struct lochnagar_clk* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static u8 FUNC_4(struct clk_hw *VAR_0)
{
 struct lochnagar_clk *VAR_1 = FUNC_2(VAR_0);
 struct lochnagar_clk_priv *VAR_2 = VAR_1->priv;
 struct regmap *VAR_3 = VAR_2->regmap;
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_3, VAR_1->src_reg, &VAR_4);
 if (VAR_5 < 0) {
  FUNC_1(VAR_2->dev, "Failed to read parent of %s: %d\n",
   VAR_1->name, VAR_5);
  return FUNC_0(VAR_0);
 }

 VAR_4 &= VAR_1->src_mask;

 return VAR_4;
}
