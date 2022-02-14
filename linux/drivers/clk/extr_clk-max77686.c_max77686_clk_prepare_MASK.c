
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max77686_clk_init_data {TYPE_1__* clk_info; int regmap; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int clk_enable_mask; int clk_reg; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 struct max77686_clk_init_data* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0)
{
 struct max77686_clk_init_data *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->regmap, VAR_1->clk_info->clk_reg,
      VAR_1->clk_info->clk_enable_mask,
      VAR_1->clk_info->clk_enable_mask);
}
