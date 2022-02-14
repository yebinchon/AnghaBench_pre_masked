
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct davinci_lpsc_clk {int md; int regmap; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int*) ;
 struct davinci_lpsc_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1)
{
 struct davinci_lpsc_clk *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3;

 FUNC_1(VAR_2->regmap, FUNC_0(VAR_2->md), &VAR_3);

 return (VAR_3 & VAR_0) ? 1 : 0;
}
