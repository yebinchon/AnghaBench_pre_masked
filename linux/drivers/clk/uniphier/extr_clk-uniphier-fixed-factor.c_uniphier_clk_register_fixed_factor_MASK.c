
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_clk_fixed_factor_data {int div; int mult; scalar_t__ parent_name; } ;
struct device {int dummy; } ;
struct clk_init_data {char const* name; int num_parents; scalar_t__* parent_names; int flags; int * ops; } ;
struct clk_hw {struct clk_init_data* init; } ;
struct clk_fixed_factor {struct clk_hw hw; int div; int mult; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clk_hw* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,struct clk_hw*) ;
 struct clk_fixed_factor* FUNC_2 (struct device*,int,int ) ;

struct clk_hw *FUNC_3(struct device *VAR_4,
        const char *VAR_5,
   const struct uniphier_clk_fixed_factor_data *VAR_6)
{
 struct clk_fixed_factor *VAR_7;
 struct clk_init_data VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(VAR_4, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_8.name = VAR_5;
 VAR_8.ops = &VAR_3;
 VAR_8.flags = VAR_6->parent_name ? VAR_0 : 0;
 VAR_8.parent_names = VAR_6->parent_name ? &VAR_6->parent_name : ((void*)0);
 VAR_8.num_parents = VAR_6->parent_name ? 1 : 0;

 VAR_7->mult = VAR_6->mult;
 VAR_7->div = VAR_6->div;
 VAR_7->hw.init = &VAR_8;

 VAR_9 = FUNC_1(VAR_4, &VAR_7->hw);
 if (VAR_9)
  return FUNC_0(VAR_9);

 return &VAR_7->hw;
}
