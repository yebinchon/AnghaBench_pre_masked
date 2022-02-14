
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (struct device*,char*) ;

__attribute__((used)) static struct clk *FUNC_3(struct device *VAR_1)
{
 struct clk *VAR_2;


 VAR_2 = FUNC_2(VAR_1, "txco");
 if (!FUNC_0(VAR_2) || FUNC_1(VAR_2) == -VAR_0)
  return VAR_2;


 VAR_2 = FUNC_2(VAR_1, "extclk");
 if (!FUNC_0(VAR_2) || FUNC_1(VAR_2) == -VAR_0)
  return VAR_2;


 return FUNC_2(VAR_1, ((void*)0));
}
