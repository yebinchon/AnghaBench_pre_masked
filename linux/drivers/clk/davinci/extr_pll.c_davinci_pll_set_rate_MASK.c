
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct davinci_pll_clk {scalar_t__ base; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct davinci_pll_clk* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3)
{
 struct davinci_pll_clk *VAR_4 = FUNC_0(VAR_1);
 u32 VAR_5;

 VAR_5 = VAR_2 / VAR_3;
 FUNC_1(VAR_5 - 1, VAR_4->base + VAR_0);

 return 0;
}
