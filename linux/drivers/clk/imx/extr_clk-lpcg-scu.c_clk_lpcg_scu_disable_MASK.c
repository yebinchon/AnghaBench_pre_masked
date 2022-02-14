
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_lpcg_scu {int bit_idx; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct clk_lpcg_scu* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct clk_hw *VAR_2)
{
 struct clk_lpcg_scu *VAR_3 = FUNC_3(VAR_2);
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_1(&VAR_1, VAR_4);

 VAR_5 = FUNC_0(VAR_3->reg);
 VAR_5 &= ~(VAR_0 << VAR_3->bit_idx);
 FUNC_4(VAR_5, VAR_3->reg);

 FUNC_2(&VAR_1, VAR_4);
}
