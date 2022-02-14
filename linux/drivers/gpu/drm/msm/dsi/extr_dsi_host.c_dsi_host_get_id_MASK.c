
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct platform_device {int dummy; } ;
struct msm_dsi_host {TYPE_1__* cfg_hnd; struct platform_device* pdev; } ;
struct msm_dsi_config {int num_dsi; scalar_t__* io_start; } ;
struct TYPE_2__ {struct msm_dsi_config* cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct resource* FUNC_0 (struct platform_device*,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct msm_dsi_host *VAR_2)
{
 struct platform_device *VAR_3 = VAR_2->pdev;
 const struct msm_dsi_config *VAR_4 = VAR_2->cfg_hnd->cfg;
 struct resource *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_3, VAR_1, "dsi_ctrl");
 if (!VAR_5)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_4->num_dsi; VAR_6++) {
  if (VAR_4->io_start[VAR_6] == VAR_5->start)
   return VAR_6;
 }

 return -VAR_0;
}
