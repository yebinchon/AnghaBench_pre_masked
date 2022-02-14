
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_pfdv2 {int gate_bit; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct clk_pfdv2* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct clk_hw *VAR_1)
{
 struct clk_pfdv2 *VAR_2 = FUNC_3(VAR_1);
 unsigned long VAR_3;
 u32 VAR_4;

 FUNC_1(&VAR_0, VAR_3);
 VAR_4 = FUNC_0(VAR_2->reg);
 VAR_4 |= (1 << VAR_2->gate_bit);
 FUNC_4(VAR_4, VAR_2->reg);
 FUNC_2(&VAR_0, VAR_3);
}
