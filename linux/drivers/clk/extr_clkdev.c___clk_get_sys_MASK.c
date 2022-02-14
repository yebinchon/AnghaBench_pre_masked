
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk_hw {int dummy; } ;
struct clk {int dummy; } ;


 struct clk_hw* FUNC_0 (char const*,char const*) ;
 struct clk* FUNC_1 (struct device*,struct clk_hw*,char const*,char const*) ;

__attribute__((used)) static struct clk *FUNC_2(struct device *VAR_0, const char *VAR_1,
     const char *VAR_2)
{
 struct clk_hw *VAR_3 = FUNC_0(VAR_1, VAR_2);

 return FUNC_1(VAR_0, VAR_3, VAR_1, VAR_2);
}
