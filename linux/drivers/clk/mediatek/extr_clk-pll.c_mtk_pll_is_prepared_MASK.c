
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_clk_pll {scalar_t__ base_addr; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct mtk_clk_pll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_2)
{
 struct mtk_clk_pll *VAR_3 = FUNC_1(VAR_2);

 return (FUNC_0(VAR_3->base_addr + VAR_1) & VAR_0) != 0;
}
