
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2s_pll_clk {int dev; } ;
struct i2s_pll_cfg {unsigned long rate; int odiv1; int odiv0; int fbdiv; int idiv; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,unsigned long,...) ;
 struct i2s_pll_cfg* FUNC_1 (unsigned long) ;
 int FUNC_2 (struct i2s_pll_clk*,int ,int ) ;
 struct i2s_pll_clk* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_5, unsigned long VAR_6,
   unsigned long VAR_7)
{
 struct i2s_pll_clk *VAR_8 = FUNC_3(VAR_5);
 const struct i2s_pll_cfg *VAR_9 = FUNC_1(VAR_7);
 int VAR_10;

 if (!VAR_9) {
  FUNC_0(VAR_8->dev, "invalid parent rate=%ld\n", VAR_7);
  return -VAR_0;
 }

 for (VAR_10 = 0; VAR_9[VAR_10].rate != 0; VAR_10++) {
  if (VAR_9[VAR_10].rate == VAR_6) {
   FUNC_2(VAR_8, VAR_2, VAR_9[VAR_10].idiv);
   FUNC_2(VAR_8, VAR_1, VAR_9[VAR_10].fbdiv);
   FUNC_2(VAR_8, VAR_3, VAR_9[VAR_10].odiv0);
   FUNC_2(VAR_8, VAR_4, VAR_9[VAR_10].odiv1);
   return 0;
  }
 }

 FUNC_0(VAR_8->dev, "invalid rate=%ld, parent_rate=%ld\n", VAR_6,
   VAR_7);
 return -VAR_0;
}
