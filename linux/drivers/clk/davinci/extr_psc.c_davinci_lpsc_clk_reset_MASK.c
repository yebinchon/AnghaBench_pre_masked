
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct davinci_lpsc_clk {int md; int regmap; } ;
struct clk_hw {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct davinci_lpsc_clk*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 struct clk_hw* FUNC_2 (struct clk*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct davinci_lpsc_clk* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk *VAR_2, bool VAR_3)
{
 struct clk_hw *VAR_4 = FUNC_2(VAR_2);
 struct davinci_lpsc_clk *VAR_5 = FUNC_4(VAR_4);
 u32 VAR_6;

 if (FUNC_0(VAR_5))
  return -VAR_0;

 VAR_6 = VAR_3 ? 0 : VAR_1;
 FUNC_3(VAR_5->regmap, FUNC_1(VAR_5->md), VAR_1, VAR_6);

 return 0;
}
