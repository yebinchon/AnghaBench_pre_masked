
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int regmap; } ;
struct clk_branch {scalar_t__ halt_check; int halt_bit; int halt_reg; TYPE_1__ clkr; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static bool FUNC_2(const struct clk_branch *VAR_1, bool VAR_2)
{
 bool VAR_3 = (VAR_1->halt_check == VAR_0);
 u32 VAR_4;

 FUNC_1(VAR_1->clkr.regmap, VAR_1->halt_reg, &VAR_4);

 VAR_4 &= FUNC_0(VAR_1->halt_bit);
 if (VAR_3)
  VAR_4 = !VAR_4;

 return !!VAR_4 == !VAR_2;
}
