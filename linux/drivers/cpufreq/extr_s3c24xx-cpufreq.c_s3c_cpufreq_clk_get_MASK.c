
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 struct clk* FUNC_1 (struct device*,char const*) ;
 int FUNC_2 (char*,char const*) ;

struct clk *FUNC_3(struct device *VAR_0, const char *VAR_1)
{
 struct clk *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (FUNC_0(VAR_2))
  FUNC_2("failed to get clock '%s'\n", VAR_1);

 return VAR_2;
}
