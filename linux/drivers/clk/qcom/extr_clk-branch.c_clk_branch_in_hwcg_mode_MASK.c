
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int regmap; } ;
struct clk_branch {int hwcg_bit; int hwcg_reg; TYPE_1__ clkr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static bool FUNC_2(const struct clk_branch *VAR_0)
{
 u32 VAR_1;

 if (!VAR_0->hwcg_reg)
  return 0;

 FUNC_1(VAR_0->clkr.regmap, VAR_0->hwcg_reg, &VAR_1);

 return !!(VAR_1 & FUNC_0(VAR_0->hwcg_bit));
}
