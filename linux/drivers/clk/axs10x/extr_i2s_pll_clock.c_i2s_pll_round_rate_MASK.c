
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2s_pll_clk {int dev; } ;
struct i2s_pll_cfg {unsigned long rate; } ;
struct clk_hw {int dummy; } ;


 long VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long) ;
 struct i2s_pll_cfg* FUNC_1 (unsigned long) ;
 struct i2s_pll_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_3(struct clk_hw *VAR_1, unsigned long VAR_2,
   unsigned long *VAR_3)
{
 struct i2s_pll_clk *VAR_4 = FUNC_2(VAR_1);
 const struct i2s_pll_cfg *VAR_5 = FUNC_1(*VAR_3);
 int VAR_6;

 if (!VAR_5) {
  FUNC_0(VAR_4->dev, "invalid parent rate=%ld\n", *VAR_3);
  return -VAR_0;
 }

 for (VAR_6 = 0; VAR_5[VAR_6].rate != 0; VAR_6++)
  if (VAR_5[VAR_6].rate == VAR_2)
   return VAR_2;

 return -VAR_0;
}
