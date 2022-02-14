
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc32xx_clk_div {int flags; unsigned int shift; int width; int table; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 long FUNC_0 (unsigned long,unsigned int) ;
 unsigned int FUNC_1 (int ,unsigned int,int,int ) ;
 int VAR_1 ;
 unsigned int FUNC_2 (int ) ;
 long FUNC_3 (struct clk_hw*,unsigned long,unsigned long*,int ,int ,int) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 struct lpc32xx_clk_div* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_6(struct clk_hw *VAR_2, unsigned long VAR_3,
    unsigned long *VAR_4)
{
 struct lpc32xx_clk_div *VAR_5 = FUNC_5(VAR_2);
 unsigned int VAR_6;


 if (VAR_5->flags & VAR_0) {
  FUNC_4(VAR_1, VAR_5->reg, &VAR_6);
  VAR_6 >>= VAR_5->shift;
  VAR_6 &= FUNC_2(VAR_5->width);
  VAR_6 = FUNC_1(VAR_5->table, VAR_6, VAR_5->flags,
   VAR_5->width);
  return FUNC_0(*VAR_4, VAR_6);
 }

 return FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5->table,
      VAR_5->width, VAR_5->flags);
}
