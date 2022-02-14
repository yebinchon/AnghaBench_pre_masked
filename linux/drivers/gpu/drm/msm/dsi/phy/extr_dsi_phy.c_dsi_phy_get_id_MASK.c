
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; } ;
struct platform_device {int dummy; } ;
struct msm_dsi_phy_cfg {int num_dsi_phy; scalar_t__* io_start; } ;
struct msm_dsi_phy {struct msm_dsi_phy_cfg* cfg; struct platform_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct resource* FUNC_0 (struct platform_device*,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct msm_dsi_phy *VAR_2)
{
 struct platform_device *VAR_3 = VAR_2->pdev;
 const struct msm_dsi_phy_cfg *VAR_4 = VAR_2->cfg;
 struct resource *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_3, VAR_1, "dsi_phy");
 if (!VAR_5)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_4->num_dsi_phy; VAR_6++) {
  if (VAR_4->io_start[VAR_6] == VAR_5->start)
   return VAR_6;
 }

 return -VAR_0;
}
