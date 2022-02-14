
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_hisi_phase {int mask; int shift; int reg; } ;


 int FUNC_0 (struct clk_hisi_phase*,int) ;
 int FUNC_1 (int ) ;
 struct clk_hisi_phase* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0)
{
 struct clk_hisi_phase *VAR_1 = FUNC_2(VAR_0);
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_1->reg);
 VAR_2 = (VAR_2 & VAR_1->mask) >> VAR_1->shift;

 return FUNC_0(VAR_1, VAR_2);
}
