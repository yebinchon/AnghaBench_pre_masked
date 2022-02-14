
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct device {int dummy; } ;
struct clk_ops {int dummy; } ;
struct clk_hw {int dummy; } ;


 struct clk_ops VAR_0 ;
 struct clk_hw* FUNC_0 (struct device*,char const*,char const**,int,struct gpio_desc*,unsigned long,struct clk_ops const*) ;
 struct clk_ops VAR_1 ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;

struct clk_hw *FUNC_2(struct device *VAR_2, const char *VAR_3,
  const char *VAR_4, struct gpio_desc *VAR_5,
  unsigned long VAR_6)
{
 const struct clk_ops *VAR_7;

 if (FUNC_1(VAR_5))
  VAR_7 = &VAR_1;
 else
  VAR_7 = &VAR_0;

 return FUNC_0(VAR_2, VAR_3,
   (VAR_4 ? &VAR_4 : ((void*)0)),
   (VAR_4 ? 1 : 0), VAR_5, VAR_6, VAR_7);
}
