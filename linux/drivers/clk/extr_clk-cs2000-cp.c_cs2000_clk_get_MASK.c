
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cs2000_priv {struct clk* ref_clk; struct clk* clk_in; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 struct clk* FUNC_1 (struct device*,char*) ;
 struct device* FUNC_2 (struct cs2000_priv*) ;

__attribute__((used)) static int FUNC_3(struct cs2000_priv *VAR_1)
{
 struct device *VAR_2 = FUNC_2(VAR_1);
 struct clk *VAR_3, *VAR_4;

 VAR_3 = FUNC_1(VAR_2, "clk_in");

 if (FUNC_0(VAR_3))
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_2, "ref_clk");

 if (FUNC_0(VAR_4))
  return -VAR_0;

 VAR_1->clk_in = VAR_3;
 VAR_1->ref_clk = VAR_4;

 return 0;
}
