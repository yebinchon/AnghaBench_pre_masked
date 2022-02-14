
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef int u32 ;
struct regmap {int dummy; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {struct regmap* regmap; } ;
struct clk_alpha_pll {TYPE_1__ clkr; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_alpha_pll*) ;
 int FUNC_1 (struct clk_alpha_pll*) ;
 unsigned long FUNC_2 (unsigned long,int ,int ,int ) ;
 int FUNC_3 (struct regmap*,int ,int *) ;
 struct clk_alpha_pll* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static unsigned long
FUNC_5(struct clk_hw *VAR_1, unsigned long VAR_2)
{
 struct clk_alpha_pll *VAR_3 = FUNC_4(VAR_1);
 struct regmap *VAR_4 = VAR_3->clkr.regmap;
 u32 VAR_5, VAR_6;
 u64 VAR_7 = VAR_2;

 FUNC_3(VAR_4, FUNC_1(VAR_3), &VAR_5);
 FUNC_3(VAR_4, FUNC_0(VAR_3), &VAR_6);

 return FUNC_2(VAR_7, VAR_5, VAR_6, VAR_0);
}
