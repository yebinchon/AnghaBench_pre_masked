
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct zynq_pll {int pll_ctrl; } ;
struct clk_hw {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 struct zynq_pll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_2,
  unsigned long VAR_3)
{
 struct zynq_pll *VAR_4 = FUNC_1(VAR_2);
 u32 VAR_5;





 VAR_5 = (FUNC_0(VAR_4->pll_ctrl) & VAR_0) >>
   VAR_1;

 return VAR_3 * VAR_5;
}
