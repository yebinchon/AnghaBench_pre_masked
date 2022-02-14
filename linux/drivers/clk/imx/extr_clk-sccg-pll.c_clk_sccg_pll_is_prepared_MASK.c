
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_sccg_pll {scalar_t__ base; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct clk_sccg_pll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_2)
{
 struct clk_sccg_pll *VAR_3 = FUNC_1(VAR_2);

 u32 VAR_4 = FUNC_0(VAR_3->base + VAR_0);

 return (VAR_4 & VAR_1) ? 0 : 1;
}
