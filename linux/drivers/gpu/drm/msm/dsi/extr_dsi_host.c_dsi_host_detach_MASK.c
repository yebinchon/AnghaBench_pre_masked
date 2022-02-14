
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_host {int hpd_work; int workqueue; scalar_t__ dev; int id; int * device_node; } ;
struct mipi_dsi_host {int dummy; } ;
struct mipi_dsi_device {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int *) ;
 struct msm_dsi_host* FUNC_2 (struct mipi_dsi_host*) ;

__attribute__((used)) static int FUNC_3(struct mipi_dsi_host *VAR_0,
     struct mipi_dsi_device *VAR_1)
{
 struct msm_dsi_host *VAR_2 = FUNC_2(VAR_0);

 VAR_2->device_node = ((void*)0);

 FUNC_0("id=%d", VAR_2->id);
 if (VAR_2->dev)
  FUNC_1(VAR_2->workqueue, &VAR_2->hpd_work);

 return 0;
}
