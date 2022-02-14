
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct msm_dsi_pll {int dummy; } ;
struct dsi_pll_14nm {int num_hws; int * hws; struct platform_device* pdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct dsi_pll_14nm* FUNC_2 (struct msm_dsi_pll*) ;

__attribute__((used)) static void FUNC_3(struct msm_dsi_pll *VAR_0)
{
 struct dsi_pll_14nm *VAR_1 = FUNC_2(VAR_0);
 struct platform_device *VAR_2 = VAR_1->pdev;
 int VAR_3 = VAR_1->num_hws;

 FUNC_1(VAR_2->dev.of_node);

 while (VAR_3--)
  FUNC_0(VAR_1->hws[VAR_3]);
}
