
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct clk_alpha_pll {int dummy; } ;


 int FUNC_0 (struct clk_alpha_pll*) ;
 int FUNC_1 (struct clk_alpha_pll*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct regmap*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct clk_alpha_pll *VAR_2,
    struct regmap *VAR_3)
{
 u32 VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3, FUNC_0(VAR_2), &VAR_4);
 VAR_6 |= FUNC_2(VAR_3, FUNC_1(VAR_2), &VAR_5);
 if (VAR_6)
  return 0;

 return ((VAR_5 & VAR_1) && (VAR_4 & VAR_0));
}
