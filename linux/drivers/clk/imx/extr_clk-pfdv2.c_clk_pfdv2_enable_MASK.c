
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_pfdv2 {int gate_bit; int reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_pfdv2*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct clk_pfdv2* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_1)
{
 struct clk_pfdv2 *VAR_2 = FUNC_4(VAR_1);
 unsigned long VAR_3;
 u32 VAR_4;

 FUNC_2(&VAR_0, VAR_3);
 VAR_4 = FUNC_1(VAR_2->reg);
 VAR_4 &= ~(1 << VAR_2->gate_bit);
 FUNC_5(VAR_4, VAR_2->reg);
 FUNC_3(&VAR_0, VAR_3);

 return FUNC_0(VAR_2);
}
