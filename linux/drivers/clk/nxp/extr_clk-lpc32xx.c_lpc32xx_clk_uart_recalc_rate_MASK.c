
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_clk {int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;
 struct lpc32xx_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_1,
        unsigned long VAR_2)
{
 struct lpc32xx_clk *VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4, VAR_5, VAR_6;

 FUNC_0(VAR_0, VAR_3->reg, &VAR_4);
 VAR_5 = (VAR_4 & 0xFF00) >> 8;
 VAR_6 = VAR_4 & 0xFF;

 if (VAR_5 && VAR_6)
  return (VAR_2 * VAR_5) / VAR_6;
 else
  return 0;
}
