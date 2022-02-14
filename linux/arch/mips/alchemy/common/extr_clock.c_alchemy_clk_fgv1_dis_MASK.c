
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct alchemy_fgcs_clk {int shift; int reglock; int reg; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 struct alchemy_fgcs_clk* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_5(struct clk_hw *VAR_0)
{
 struct alchemy_fgcs_clk *VAR_1 = FUNC_4(VAR_0);
 unsigned long VAR_2, VAR_3;

 FUNC_2(VAR_1->reglock, VAR_3);
 VAR_2 = FUNC_0(VAR_1->reg);
 VAR_2 &= ~((1 << 1) << VAR_1->shift);
 FUNC_1(VAR_2, VAR_1->reg);
 FUNC_3(VAR_1->reglock, VAR_3);
}
