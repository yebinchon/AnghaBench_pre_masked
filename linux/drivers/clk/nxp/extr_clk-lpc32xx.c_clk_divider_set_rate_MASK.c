
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc32xx_clk_div {int shift; int width; int reg; int flags; int table; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned long,unsigned long,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int,unsigned int) ;
 struct lpc32xx_clk_div* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3)
{
 struct lpc32xx_clk_div *VAR_4 = FUNC_3(VAR_1);
 unsigned int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4->table,
    VAR_4->width, VAR_4->flags);

 return FUNC_2(VAR_0, VAR_4->reg,
      FUNC_0(VAR_4->width) << VAR_4->shift,
      VAR_5 << VAR_4->shift);
}
