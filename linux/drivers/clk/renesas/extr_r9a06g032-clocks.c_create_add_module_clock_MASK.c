
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int dummy; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (struct of_phandle_args*) ;
 int FUNC_4 (struct device*,struct clk*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct of_phandle_args *VAR_0,
       struct device *VAR_1)
{
 struct clk *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3) {
  FUNC_2(VAR_2);
  return VAR_3;
 }

 VAR_3 = FUNC_4(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_6(VAR_1);
  FUNC_2(VAR_2);
 }

 return VAR_3;
}
