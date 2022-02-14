
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int regmap; } ;
struct clk_pix_rdi {int s2_mask; int s_mask; int s_reg; TYPE_1__ clkr; int s2_reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,int ,int*) ;
 struct clk_pix_rdi* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_0)
{
 u32 VAR_1;
 struct clk_pix_rdi *VAR_2 = FUNC_1(VAR_0);


 FUNC_0(VAR_2->clkr.regmap, VAR_2->s2_reg, &VAR_1);
 if (VAR_1 & VAR_2->s2_mask)
  return 2;

 FUNC_0(VAR_2->clkr.regmap, VAR_2->s_reg, &VAR_1);
 if (VAR_1 & VAR_2->s_mask)
  return 1;

 return 0;
}
