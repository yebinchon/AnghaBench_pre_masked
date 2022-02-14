
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int regmap; int hw; } ;
struct clk_alpha_pll {TYPE_1__ clkr; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_alpha_pll*) ;
 int FUNC_1 (int,char*,char const*,char const*) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct clk_alpha_pll *VAR_1, u32 VAR_2, bool VAR_3,
   const char *VAR_4)
{
 u32 VAR_5;
 int VAR_6;
 int VAR_7;
 const char *VAR_8 = FUNC_2(&VAR_1->clkr.hw);

 VAR_7 = FUNC_3(VAR_1->clkr.regmap, FUNC_0(VAR_1), &VAR_5);
 if (VAR_7)
  return VAR_7;

 for (VAR_6 = 100; VAR_6 > 0; VAR_6--) {
  VAR_7 = FUNC_3(VAR_1->clkr.regmap, FUNC_0(VAR_1), &VAR_5);
  if (VAR_7)
   return VAR_7;
  if (VAR_3 && !(VAR_5 & VAR_2))
   return 0;
  else if ((VAR_5 & VAR_2) == VAR_2)
   return 0;

  FUNC_4(1);
 }

 FUNC_1(1, "%s failed to %s!\n", VAR_8, VAR_4);
 return -VAR_0;
}
