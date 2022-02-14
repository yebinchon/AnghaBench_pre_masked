
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct msm_dsi_pll {unsigned long min_rate; unsigned long max_rate; int set_usecase; int restore_state; int save_state; int destroy; int get_provider; } ;
struct dsi_pll_10nm {int id; int vco_delay; struct msm_dsi_pll base; int postdiv_lock; void* mmio; void* phy_cmn_mmio; struct platform_device* pdev; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_0 ;
 struct msm_dsi_pll* FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (void*) ;
 struct dsi_pll_10nm* FUNC_4 (int *,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct msm_dsi_pll*) ;
 void* FUNC_6 (struct platform_device*,char*,char*) ;
 struct dsi_pll_10nm** VAR_7 ;
 int FUNC_7 (struct dsi_pll_10nm*) ;
 int FUNC_8 (int *) ;

struct msm_dsi_pll *FUNC_9(struct platform_device *VAR_8, int VAR_9)
{
 struct dsi_pll_10nm *VAR_10;
 struct msm_dsi_pll *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_4(&VAR_8->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return FUNC_2(-VAR_0);

 FUNC_0("DSI PLL%d", VAR_9);

 VAR_10->pdev = VAR_8;
 VAR_10->id = VAR_9;
 VAR_7[VAR_9] = VAR_10;

 VAR_10->phy_cmn_mmio = FUNC_6(VAR_8, "dsi_phy", "DSI_PHY");
 if (FUNC_3(VAR_10->phy_cmn_mmio)) {
  FUNC_1(&VAR_8->dev, "failed to map CMN PHY base\n");
  return FUNC_2(-VAR_0);
 }

 VAR_10->mmio = FUNC_6(VAR_8, "dsi_pll", "DSI_PLL");
 if (FUNC_3(VAR_10->mmio)) {
  FUNC_1(&VAR_8->dev, "failed to map PLL base\n");
  return FUNC_2(-VAR_0);
 }

 FUNC_8(&VAR_10->postdiv_lock);

 VAR_11 = &VAR_10->base;
 VAR_11->min_rate = 1000000000UL;
 VAR_11->max_rate = 3500000000UL;
 VAR_11->get_provider = VAR_3;
 VAR_11->destroy = VAR_2;
 VAR_11->save_state = VAR_5;
 VAR_11->restore_state = VAR_4;
 VAR_11->set_usecase = VAR_6;

 VAR_10->vco_delay = 1;

 VAR_12 = FUNC_7(VAR_10);
 if (VAR_12) {
  FUNC_1(&VAR_8->dev, "failed to register PLL: %d\n", VAR_12);
  return FUNC_2(VAR_12);
 }


 FUNC_5(VAR_11);

 return VAR_11;
}
