
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct clk {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (struct device*,char*,char const*,int) ;
 scalar_t__ FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 struct clk* FUNC_4 (struct platform_device*,char const*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0, struct clk **VAR_1,
  const char *VAR_2, bool VAR_3)
{
 struct device *VAR_4 = &VAR_0->dev;
 struct clk *VAR_5 = FUNC_4(VAR_0, VAR_2);
 if (FUNC_2(VAR_5) && VAR_3) {
  FUNC_1(VAR_4, "failed to get %s (%ld)\n", VAR_2, FUNC_3(VAR_5));
  return FUNC_3(VAR_5);
 }
 if (FUNC_2(VAR_5))
  FUNC_0("skipping %s", VAR_2);
 else
  *VAR_1 = VAR_5;

 return 0;
}
