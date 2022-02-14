
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynq_pll {int lock; int pll_ctrl; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 struct zynq_pll* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_2)
{
 unsigned long VAR_3 = 0;
 u32 VAR_4;
 struct zynq_pll *VAR_5 = FUNC_3(VAR_2);

 FUNC_1(VAR_5->lock, VAR_3);

 VAR_4 = FUNC_0(VAR_5->pll_ctrl);

 FUNC_2(VAR_5->lock, VAR_3);

 return !(VAR_4 & (VAR_1 | VAR_0));
}
