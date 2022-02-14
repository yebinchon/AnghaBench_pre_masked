
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gpio_desc {int dummy; } ;
struct device {int dummy; } ;
struct clk_ops {int dummy; } ;
struct clk_init_data {char const* name; unsigned long flags; char const* const* parent_names; int num_parents; struct clk_ops const* ops; } ;
struct clk_hw {struct clk_init_data* init; } ;
struct clk_gpio {struct clk_hw hw; struct gpio_desc* gpiod; } ;


 int VAR_0 ;
 struct clk_hw* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct clk_hw*) ;
 int FUNC_2 (struct device*,struct clk_hw*) ;
 struct clk_gpio* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct clk_gpio*) ;
 struct clk_gpio* FUNC_5 (int,int ) ;

__attribute__((used)) static struct clk_hw *FUNC_6(struct device *VAR_2, const char *VAR_3,
  const char * const *VAR_4, u8 VAR_5, struct gpio_desc *VAR_6,
  unsigned long VAR_7, const struct clk_ops *VAR_8)
{
 struct clk_gpio *VAR_9;
 struct clk_hw *VAR_10;
 struct clk_init_data VAR_11 = {};
 int VAR_12;

 if (VAR_2)
  VAR_9 = FUNC_3(VAR_2, sizeof(*VAR_9), VAR_1);
 else
  VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_1);

 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_11.name = VAR_3;
 VAR_11.ops = VAR_8;
 VAR_11.flags = VAR_7;
 VAR_11.parent_names = VAR_4;
 VAR_11.num_parents = VAR_5;

 VAR_9->gpiod = VAR_6;
 VAR_9->hw.init = &VAR_11;

 VAR_10 = &VAR_9->hw;
 if (VAR_2)
  VAR_12 = FUNC_2(VAR_2, VAR_10);
 else
  VAR_12 = FUNC_1(((void*)0), VAR_10);

 if (!VAR_12)
  return VAR_10;

 if (!VAR_2) {
  FUNC_4(VAR_9);
 }

 return FUNC_0(VAR_12);
}
