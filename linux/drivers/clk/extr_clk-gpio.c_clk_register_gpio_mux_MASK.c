
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gpio_desc {int dummy; } ;
struct device {int dummy; } ;
struct clk_hw {struct clk* clk; } ;
struct clk {int dummy; } ;


 struct clk* FUNC_0 (struct clk_hw*) ;
 scalar_t__ FUNC_1 (struct clk_hw*) ;
 struct clk_hw* FUNC_2 (struct device*,char const*,char const* const*,int ,struct gpio_desc*,unsigned long) ;

struct clk *FUNC_3(struct device *VAR_0, const char *VAR_1,
  const char * const *VAR_2, u8 VAR_3, struct gpio_desc *VAR_4,
  unsigned long VAR_5)
{
 struct clk_hw *VAR_6;

 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3,
   VAR_4, VAR_5);
 if (FUNC_1(VAR_6))
  return FUNC_0(VAR_6);
 return VAR_6->clk;
}
