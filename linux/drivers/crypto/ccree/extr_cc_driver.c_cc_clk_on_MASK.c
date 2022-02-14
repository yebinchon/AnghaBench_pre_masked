
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;
struct cc_drvdata {struct clk* clk; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;

int FUNC_2(struct cc_drvdata *VAR_0)
{
 struct clk *VAR_1 = VAR_0->clk;
 int VAR_2;

 if (FUNC_0(VAR_1))

  return 0;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;

 return 0;
}
