
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2s_pll_clk {int dummy; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct i2s_pll_clk*,int ) ;
 struct i2s_pll_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_3,
   unsigned long VAR_4)
{
 struct i2s_pll_clk *VAR_5 = FUNC_2(VAR_3);
 unsigned int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_0(FUNC_1(VAR_5, VAR_1));
 VAR_7 = FUNC_0(FUNC_1(VAR_5, VAR_0));
 VAR_8 = FUNC_0(FUNC_1(VAR_5, VAR_2));

 return ((VAR_4 / VAR_6) * VAR_7) / VAR_8;
}
