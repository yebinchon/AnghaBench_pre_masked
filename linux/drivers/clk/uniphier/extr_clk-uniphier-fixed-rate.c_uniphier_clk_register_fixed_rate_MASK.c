
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_clk_fixed_rate_data {int fixed_rate; } ;
struct device {int dummy; } ;
struct clk_init_data {char const* name; scalar_t__ num_parents; int * parent_names; int * ops; } ;
struct clk_hw {struct clk_init_data* init; } ;
struct clk_fixed_rate {struct clk_hw hw; int fixed_rate; } ;


 int VAR_0 ;
 struct clk_hw* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,struct clk_hw*) ;
 struct clk_fixed_rate* FUNC_2 (struct device*,int,int ) ;

struct clk_hw *FUNC_3(struct device *VAR_3,
      const char *VAR_4,
    const struct uniphier_clk_fixed_rate_data *VAR_5)
{
 struct clk_fixed_rate *VAR_6;
 struct clk_init_data VAR_7;
 int VAR_8;


 VAR_6 = FUNC_2(VAR_3, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7.name = VAR_4;
 VAR_7.ops = &VAR_2;
 VAR_7.parent_names = ((void*)0);
 VAR_7.num_parents = 0;

 VAR_6->fixed_rate = VAR_5->fixed_rate;
 VAR_6->hw.init = &VAR_7;

 VAR_8 = FUNC_1(VAR_3, &VAR_6->hw);
 if (VAR_8)
  return FUNC_0(VAR_8);

 return &VAR_6->hw;
}
