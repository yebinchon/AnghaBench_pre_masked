
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct clk_hw {int dummy; } ;
struct clk_fixup_div {int (* fixup ) (unsigned int*) ;} ;
struct clk_divider {unsigned int shift; int lock; int reg; } ;


 unsigned int FUNC_0 (struct clk_divider*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (unsigned int*) ;
 struct clk_divider* FUNC_5 (struct clk_hw*) ;
 struct clk_fixup_div* FUNC_6 (struct clk_hw*) ;
 int FUNC_7 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_0, unsigned long VAR_1,
       unsigned long VAR_2)
{
 struct clk_fixup_div *VAR_3 = FUNC_6(VAR_0);
 struct clk_divider *VAR_4 = FUNC_5(VAR_0);
 unsigned int VAR_5, VAR_6;
 unsigned long VAR_7 = 0;
 u32 VAR_8;

 VAR_5 = VAR_2 / VAR_1;


 VAR_6 = VAR_5 - 1;

 if (VAR_6 > FUNC_0(VAR_4))
  VAR_6 = FUNC_0(VAR_4);

 FUNC_2(VAR_4->lock, VAR_7);

 VAR_8 = FUNC_1(VAR_4->reg);
 VAR_8 &= ~(FUNC_0(VAR_4) << VAR_4->shift);
 VAR_8 |= VAR_6 << VAR_4->shift;
 VAR_3->fixup(&VAR_8);
 FUNC_7(VAR_8, VAR_4->reg);

 FUNC_3(VAR_4->lock, VAR_7);

 return 0;
}
