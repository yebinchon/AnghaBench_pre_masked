
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ of_node; } ;
struct clk_hw {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*) ;
 struct clk* FUNC_2 (struct device*,char const*,char const*) ;
 struct clk* FUNC_3 (struct device*,struct clk_hw*,char const*,char const*) ;
 char* FUNC_4 (struct device*) ;
 struct clk_hw* FUNC_5 (scalar_t__,int ,char const*) ;

struct clk *FUNC_6(struct device *VAR_1, const char *VAR_2)
{
 const char *VAR_3 = VAR_1 ? FUNC_4(VAR_1) : ((void*)0);
 struct clk_hw *VAR_4;

 if (VAR_1 && VAR_1->of_node) {
  VAR_4 = FUNC_5(VAR_1->of_node, 0, VAR_2);
  if (!FUNC_0(VAR_4) || FUNC_1(VAR_4) == -VAR_0)
   return FUNC_3(VAR_1, VAR_4, VAR_3, VAR_2);
 }

 return FUNC_2(VAR_1, VAR_3, VAR_2);
}
