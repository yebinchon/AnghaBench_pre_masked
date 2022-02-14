
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc32xx_clk_div {unsigned int shift; int width; int flags; int table; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct clk_hw*,unsigned long,unsigned int,int ,int ,int ) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 struct lpc32xx_clk_div* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_1,
  unsigned long VAR_2)
{
 struct lpc32xx_clk_div *VAR_3 = FUNC_3(VAR_1);
 unsigned int VAR_4;

 FUNC_2(VAR_0, VAR_3->reg, &VAR_4);

 VAR_4 >>= VAR_3->shift;
 VAR_4 &= FUNC_0(VAR_3->width);

 return FUNC_1(VAR_1, VAR_2, VAR_4, VAR_3->table,
       VAR_3->flags, VAR_3->width);
}
