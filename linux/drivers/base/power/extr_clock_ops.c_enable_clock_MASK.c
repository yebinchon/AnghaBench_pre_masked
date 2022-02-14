
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk {int dummy; } ;


 int FUNC_0 (struct clk*) ;
 struct clk* FUNC_1 (struct device*,char const*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct device*,char*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0, const char *VAR_1)
{
 struct clk *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!FUNC_0(VAR_2)) {
  FUNC_2(VAR_2);
  FUNC_3(VAR_2);
  FUNC_4(VAR_0, "Runtime PM disabled, clock forced on.\n");
 }
}
