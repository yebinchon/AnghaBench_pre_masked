
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct generic_pm_domain {int dummy; } ;
struct device {int dummy; } ;
struct davinci_lpsc_clk {struct clk* genpd_clk; int hw; int dev; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (int ) ;
 struct clk* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct clk*) ;
 int FUNC_6 (struct device*,struct clk*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 struct davinci_lpsc_clk* FUNC_9 (struct generic_pm_domain*) ;

__attribute__((used)) static int FUNC_10(struct generic_pm_domain *VAR_0,
     struct device *VAR_1)
{
 struct davinci_lpsc_clk *VAR_2 = FUNC_9(VAR_0);
 struct clk *VAR_3;
 int VAR_4;





 VAR_3 = FUNC_3(FUNC_2(VAR_2->dev), FUNC_4(&VAR_2->hw));
 if (FUNC_0(VAR_3))
  return (FUNC_1(VAR_3));

 VAR_4 = FUNC_7(VAR_1);
 if (VAR_4 < 0)
  goto fail_clk_put;

 VAR_4 = FUNC_6(VAR_1, VAR_3);
 if (VAR_4 < 0)
  goto fail_pm_clk_destroy;

 VAR_2->genpd_clk = VAR_3;

 return 0;

fail_pm_clk_destroy:
 FUNC_8(VAR_1);
fail_clk_put:
 FUNC_5(VAR_3);

 return VAR_4;
}
