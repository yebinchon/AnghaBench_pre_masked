
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_lpcg_scu {int bit_idx; int reg; scalar_t__ hw_gate; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct clk_lpcg_scu* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_4)
{
 struct clk_lpcg_scu *VAR_5 = FUNC_3(VAR_4);
 unsigned long VAR_6;
 u32 VAR_7, VAR_8;

 FUNC_1(&VAR_3, VAR_6);

 VAR_7 = FUNC_0(VAR_5->reg);
 VAR_7 &= ~(VAR_1 << VAR_5->bit_idx);

 VAR_8 = VAR_2;
 if (VAR_5->hw_gate)
  VAR_8 |= VAR_0;

 VAR_7 |= VAR_8 << VAR_5->bit_idx;
 FUNC_4(VAR_7, VAR_5->reg);

 FUNC_2(&VAR_3, VAR_6);

 return 0;
}
