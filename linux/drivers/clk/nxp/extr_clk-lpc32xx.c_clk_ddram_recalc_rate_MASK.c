
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_clk {int enable_mask; int reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_hw*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int*) ;
 struct lpc32xx_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_1,
        unsigned long VAR_2)
{
 struct lpc32xx_clk *VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4;

 if (!FUNC_0(VAR_1))
  return 0;

 FUNC_1(VAR_0, VAR_3->reg, &VAR_4);
 VAR_4 &= VAR_3->enable_mask;

 return VAR_2 / (VAR_4 >> 7);
}
