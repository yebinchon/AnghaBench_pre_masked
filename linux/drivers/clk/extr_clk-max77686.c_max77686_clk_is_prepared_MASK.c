
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct max77686_clk_init_data {TYPE_1__* clk_info; int regmap; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int clk_enable_mask; int clk_reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;
 struct max77686_clk_init_data* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1)
{
 struct max77686_clk_init_data *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;
 u32 VAR_4;

 VAR_3 = FUNC_0(VAR_2->regmap, VAR_2->clk_info->clk_reg, &VAR_4);

 if (VAR_3 < 0)
  return -VAR_0;

 return VAR_4 & VAR_2->clk_info->clk_enable_mask;
}
