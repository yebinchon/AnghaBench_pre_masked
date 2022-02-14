
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_lvds {int dev; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (int ,char*,char const*) ;
 struct clk* FUNC_3 (int ,char const*) ;

__attribute__((used)) static struct clk *FUNC_4(struct rcar_lvds *VAR_2, const char *VAR_3,
           bool VAR_4)
{
 struct clk *VAR_5;

 VAR_5 = FUNC_3(VAR_2->dev, VAR_3);
 if (!FUNC_0(VAR_5))
  return VAR_5;

 if (FUNC_1(VAR_5) == -VAR_0 && VAR_4)
  return ((void*)0);

 if (FUNC_1(VAR_5) != -VAR_1)
  FUNC_2(VAR_2->dev, "failed to get %s clock\n",
   VAR_3 ? VAR_3 : "module");

 return VAR_5;
}
