
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct generic_pm_domain {int dummy; } ;
struct device {int dummy; } ;
struct davinci_lpsc_clk {int * genpd_clk; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int *) ;
 struct davinci_lpsc_clk* FUNC_2 (struct generic_pm_domain*) ;

__attribute__((used)) static void FUNC_3(struct generic_pm_domain *VAR_0,
      struct device *VAR_1)
{
 struct davinci_lpsc_clk *VAR_2 = FUNC_2(VAR_0);

 FUNC_1(VAR_1, VAR_2->genpd_clk);
 FUNC_0(VAR_1);

 VAR_2->genpd_clk = ((void*)0);
}
