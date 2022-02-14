
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_host {int registered; } ;
struct mipi_dsi_host {int * ops; int * dev; } ;


 int FUNC_0 (struct mipi_dsi_host*) ;
 struct msm_dsi_host* FUNC_1 (struct mipi_dsi_host*) ;

void FUNC_2(struct mipi_dsi_host *VAR_0)
{
 struct msm_dsi_host *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->registered) {
  FUNC_0(VAR_0);
  VAR_0->dev = ((void*)0);
  VAR_0->ops = ((void*)0);
  VAR_1->registered = 0;
 }
}
