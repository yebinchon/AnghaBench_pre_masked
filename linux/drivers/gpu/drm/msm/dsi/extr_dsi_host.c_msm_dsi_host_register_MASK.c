
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_dsi_host {int registered; scalar_t__ device_node; TYPE_1__* pdev; } ;
struct mipi_dsi_host {int * ops; int * dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct mipi_dsi_host*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct msm_dsi_host* FUNC_4 (struct mipi_dsi_host*) ;

int FUNC_5(struct mipi_dsi_host *VAR_2, bool VAR_3)
{
 struct msm_dsi_host *VAR_4 = FUNC_4(VAR_2);
 int VAR_5;


 if (!VAR_4->registered) {
  VAR_2->dev = &VAR_4->pdev->dev;
  VAR_2->ops = &VAR_1;
  VAR_5 = FUNC_1(VAR_2);
  if (VAR_5)
   return VAR_5;

  VAR_4->registered = 1;
  if (VAR_3 && VAR_4->device_node) {
   if (FUNC_0(FUNC_3(VAR_4->device_node)))
    if (!FUNC_2(VAR_4->device_node))
     return -VAR_0;
  }
 }

 return 0;
}
