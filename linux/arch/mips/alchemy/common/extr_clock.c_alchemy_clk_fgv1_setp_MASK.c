
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct clk_hw {int dummy; } ;
struct alchemy_fgcs_clk {int shift; int reglock; int reg; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 struct alchemy_fgcs_clk* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct alchemy_fgcs_clk *VAR_2 = FUNC_4(VAR_0);
 unsigned long VAR_3, VAR_4;

 FUNC_2(VAR_2->reglock, VAR_4);
 VAR_3 = FUNC_0(VAR_2->reg);
 if (VAR_1)
  VAR_3 |= (1 << VAR_2->shift);
 else
  VAR_3 &= ~(1 << VAR_2->shift);
 FUNC_1(VAR_3, VAR_2->reg);
 FUNC_3(VAR_2->reglock, VAR_4);

 return 0;
}
