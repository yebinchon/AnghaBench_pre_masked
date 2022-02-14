
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dfll_soc_data {int dummy; } ;
struct tegra_dfll {scalar_t__ mode; struct tegra_dfll_soc_data* soc; int dvco_rst; int i2c_clk; int soc_clk; int ref_clk; int debugfs_dir; } ;
struct platform_device {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct tegra_dfll_soc_data* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct tegra_dfll*) ;
 struct tegra_dfll* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

struct tegra_dfll_soc_data *FUNC_8(struct platform_device *VAR_2)
{
 struct tegra_dfll *VAR_3 = FUNC_5(VAR_2);


 if (VAR_3->mode != VAR_0) {
  FUNC_3(&VAR_2->dev,
   "must disable DFLL before removing driver\n");
  return FUNC_0(-VAR_1);
 }

 FUNC_2(VAR_3->debugfs_dir);

 FUNC_4(VAR_3);
 FUNC_6(&VAR_2->dev);

 FUNC_1(VAR_3->ref_clk);
 FUNC_1(VAR_3->soc_clk);
 FUNC_1(VAR_3->i2c_clk);

 FUNC_7(VAR_3->dvco_rst);

 return VAR_3->soc;
}
