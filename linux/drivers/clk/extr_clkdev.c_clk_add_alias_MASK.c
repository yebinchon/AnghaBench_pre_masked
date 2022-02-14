
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk_lookup {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (struct device*,char const*) ;
 int FUNC_3 (struct clk*) ;
 struct clk_lookup* FUNC_4 (struct clk*,char const*,char*,char const*) ;

int FUNC_5(const char *VAR_1, const char *VAR_2,
 const char *VAR_3, struct device *VAR_4)
{
 struct clk *VAR_5 = FUNC_2(VAR_4, VAR_3);
 struct clk_lookup *VAR_6;

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6 = FUNC_4(VAR_5, VAR_1, VAR_2 ? "%s" : ((void*)0),
     VAR_2);
 FUNC_3(VAR_5);

 return VAR_6 ? 0 : -VAR_0;
}
