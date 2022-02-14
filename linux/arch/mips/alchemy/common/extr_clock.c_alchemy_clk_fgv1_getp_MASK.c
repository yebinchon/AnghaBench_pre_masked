
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_hw {int dummy; } ;
struct alchemy_fgcs_clk {int shift; int reg; } ;


 int FUNC_0 (int ) ;
 struct alchemy_fgcs_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_0)
{
 struct alchemy_fgcs_clk *VAR_1 = FUNC_1(VAR_0);

 return (FUNC_0(VAR_1->reg) >> VAR_1->shift) & 1;
}
