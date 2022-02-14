
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int regmap; } ;
struct clk_pix_rdi {scalar_t__ s_mask; int s_reg; TYPE_1__ clkr; scalar_t__ s2_mask; int s2_reg; } ;
struct clk_hw {int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct clk_hw*) ;
 struct clk_hw* FUNC_2 (struct clk_hw*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,scalar_t__,scalar_t__) ;
 struct clk_pix_rdi* FUNC_5 (struct clk_hw*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_0, u8 VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;
 u32 VAR_4;
 struct clk_pix_rdi *VAR_5 = FUNC_5(VAR_0);
 int VAR_6 = FUNC_1(VAR_0);
 for (VAR_2 = 0; VAR_2 < VAR_6; VAR_2++) {
  struct clk_hw *VAR_7 = FUNC_2(VAR_0, VAR_2);
  VAR_3 = FUNC_3(VAR_7->clk);
  if (VAR_3)
   goto err;
 }

 if (VAR_1 == 2)
  VAR_4 = VAR_5->s2_mask;
 else
  VAR_4 = 0;
 FUNC_4(VAR_5->clkr.regmap, VAR_5->s2_reg, VAR_5->s2_mask, VAR_4);




 FUNC_6(1);

 if (VAR_1 == 1)
  VAR_4 = VAR_5->s_mask;
 else
  VAR_4 = 0;
 FUNC_4(VAR_5->clkr.regmap, VAR_5->s_reg, VAR_5->s_mask, VAR_4);




 FUNC_6(1);

err:
 for (VAR_2--; VAR_2 >= 0; VAR_2--) {
  struct clk_hw *VAR_8 = FUNC_2(VAR_0, VAR_2);
  FUNC_0(VAR_8->clk);
 }

 return VAR_3;
}
