
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_pll_obj {scalar_t__ reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 struct stm32_pll_obj* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static u32 FUNC_2(struct clk_hw *VAR_4)
{
 struct stm32_pll_obj *VAR_5 = FUNC_1(VAR_4);
 u32 VAR_6, VAR_7 = 0;

 VAR_6 = FUNC_0(VAR_5->reg + VAR_2);
 if (VAR_6 & VAR_0)
  VAR_7 = (VAR_6 >> VAR_3) & VAR_1;

 return VAR_7;
}
