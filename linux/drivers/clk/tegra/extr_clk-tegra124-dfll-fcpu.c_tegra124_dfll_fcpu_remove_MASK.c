
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dfll_soc_data {int max_freq; int cvb; int dev; } ;
struct platform_device {int dev; } ;


 scalar_t__ FUNC_0 (struct tegra_dfll_soc_data*) ;
 int FUNC_1 (struct tegra_dfll_soc_data*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ,int ,int ) ;
 struct tegra_dfll_soc_data* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct tegra_dfll_soc_data *VAR_1;

 VAR_1 = FUNC_4(VAR_0);
 if (FUNC_0(VAR_1)) {
  FUNC_2(&VAR_0->dev, "failed to unregister DFLL: %ld\n",
   FUNC_1(VAR_1));
  return FUNC_1(VAR_1);
 }

 FUNC_3(VAR_1->dev, VAR_1->cvb, VAR_1->max_freq);

 return 0;
}
