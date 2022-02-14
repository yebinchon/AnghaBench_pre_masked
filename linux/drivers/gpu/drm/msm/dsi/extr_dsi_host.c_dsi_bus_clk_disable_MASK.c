
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_dsi_host {int * bus_clks; TYPE_1__* cfg_hnd; } ;
struct msm_dsi_config {int num_bus_clks; } ;
struct TYPE_2__ {struct msm_dsi_config* cfg; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct msm_dsi_host *VAR_0)
{
 const struct msm_dsi_config *VAR_1 = VAR_0->cfg_hnd->cfg;
 int VAR_2;

 FUNC_0("");

 for (VAR_2 = VAR_1->num_bus_clks - 1; VAR_2 >= 0; VAR_2--)
  FUNC_1(VAR_0->bus_clks[VAR_2]);
}
