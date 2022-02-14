
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct clk {int dummy; } ;
typedef int name2 ;


 int VAR_0 ;
 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (int *,char*,char const*,char*) ;
 struct clk* FUNC_3 (int *,char const*) ;
 int FUNC_4 (char*,int,char*,char const*) ;

struct clk *FUNC_5(struct platform_device *VAR_1, const char *VAR_2)
{
 struct clk *VAR_3;
 char VAR_4[32];

 VAR_3 = FUNC_3(&VAR_1->dev, VAR_2);
 if (!FUNC_0(VAR_3) || FUNC_1(VAR_3) == -VAR_0)
  return VAR_3;

 FUNC_4(VAR_4, sizeof(VAR_4), "%s_clk", VAR_2);

 VAR_3 = FUNC_3(&VAR_1->dev, VAR_4);
 if (!FUNC_0(VAR_3))
  FUNC_2(&VAR_1->dev, "Using legacy clk name binding.  Use "
    "\"%s\" instead of \"%s\"\n", VAR_2, VAR_4);

 return VAR_3;
}
