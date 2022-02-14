
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int regmap; int hw; } ;
struct clk_pll {int status_bit; int status_reg; TYPE_1__ clkr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,char const*) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct clk_pll *VAR_1)
{
 u32 VAR_2;
 int VAR_3;
 int VAR_4;
 const char *VAR_5 = FUNC_2(&VAR_1->clkr.hw);


 for (VAR_3 = 200; VAR_3 > 0; VAR_3--) {
  VAR_4 = FUNC_3(VAR_1->clkr.regmap, VAR_1->status_reg, &VAR_2);
  if (VAR_4)
   return VAR_4;
  if (VAR_2 & FUNC_0(VAR_1->status_bit))
   return 0;
  FUNC_4(1);
 }

 FUNC_1(1, "%s didn't enable after voting for it!\n", VAR_5);
 return -VAR_0;
}
