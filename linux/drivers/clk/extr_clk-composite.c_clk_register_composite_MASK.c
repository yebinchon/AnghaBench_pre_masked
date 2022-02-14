
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk_ops {int dummy; } ;
struct clk_hw {struct clk* clk; } ;
struct clk {int dummy; } ;


 struct clk* FUNC_0 (struct clk_hw*) ;
 scalar_t__ FUNC_1 (struct clk_hw*) ;
 struct clk_hw* FUNC_2 (struct device*,char const*,char const* const*,int,struct clk_hw*,struct clk_ops const*,struct clk_hw*,struct clk_ops const*,struct clk_hw*,struct clk_ops const*,unsigned long) ;

struct clk *FUNC_3(struct device *VAR_0, const char *VAR_1,
   const char * const *VAR_2, int VAR_3,
   struct clk_hw *VAR_4, const struct clk_ops *VAR_5,
   struct clk_hw *VAR_6, const struct clk_ops *VAR_7,
   struct clk_hw *VAR_8, const struct clk_ops *VAR_9,
   unsigned long VAR_10)
{
 struct clk_hw *VAR_11;

 VAR_11 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3,
   VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
   VAR_10);
 if (FUNC_1(VAR_11))
  return FUNC_0(VAR_11);
 return VAR_11->clk;
}
