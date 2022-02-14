
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_fractional_divider {unsigned long nwidth; int mwidth; } ;


 int FUNC_0 (int,int ) ;
 struct clk_hw* FUNC_1 (struct clk_hw*) ;
 unsigned long FUNC_2 (struct clk_hw*) ;
 unsigned long FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long,int ,int ,unsigned long*,unsigned long*) ;
 struct clk_fractional_divider* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_6(struct clk_hw *VAR_0,
  unsigned long VAR_1, unsigned long *VAR_2,
  unsigned long *VAR_3, unsigned long *VAR_4)
{
 struct clk_fractional_divider *VAR_5 = FUNC_5(VAR_0);
 unsigned long VAR_6, VAR_7;
 struct clk_hw *VAR_8;
 unsigned long VAR_9;

 VAR_6 = FUNC_2(FUNC_1(VAR_0));
 if ((VAR_1 * 20 > VAR_6) && (VAR_6 % VAR_1 != 0)) {
  VAR_8 = FUNC_1(FUNC_1(VAR_0));
  VAR_7 = FUNC_2(VAR_8);
  *VAR_2 = VAR_7;
 }






 VAR_9 = FUNC_3(*VAR_2 / VAR_1 - 1);
 if (VAR_9 > VAR_5->nwidth)
  VAR_1 <<= VAR_9 - VAR_5->nwidth;

 FUNC_4(VAR_1, *VAR_2,
   FUNC_0(VAR_5->mwidth - 1, 0), FUNC_0(VAR_5->nwidth - 1, 0),
   VAR_3, VAR_4);
}
