
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct msm_dsi_pll {int en_seq_cnt; int * enable_seqs; int set_usecase; int restore_state; int save_state; int disable_seq; int destroy; int get_provider; int max_rate; int min_rate; } ;
struct dsi_pll_14nm {int id; int vco_delay; struct msm_dsi_pll base; int postdiv_lock; void* mmio; void* phy_cmn_mmio; struct platform_device* pdev; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 struct msm_dsi_pll* FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct dsi_pll_14nm* FUNC_4 (int *,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_5 (struct platform_device*,char*,char*) ;
 struct dsi_pll_14nm** VAR_12 ;
 int FUNC_6 (struct dsi_pll_14nm*) ;
 int FUNC_7 (int *) ;

struct msm_dsi_pll *FUNC_8(struct platform_device *VAR_13, int VAR_14)
{
 struct dsi_pll_14nm *VAR_15;
 struct msm_dsi_pll *VAR_16;
 int VAR_17;

 if (!VAR_13)
  return FUNC_2(-VAR_0);

 VAR_15 = FUNC_4(&VAR_13->dev, sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return FUNC_2(-VAR_1);

 FUNC_0("PLL%d", VAR_14);

 VAR_15->pdev = VAR_13;
 VAR_15->id = VAR_14;
 VAR_12[VAR_14] = VAR_15;

 VAR_15->phy_cmn_mmio = FUNC_5(VAR_13, "dsi_phy", "DSI_PHY");
 if (FUNC_3(VAR_15->phy_cmn_mmio)) {
  FUNC_1(&VAR_13->dev, "failed to map CMN PHY base\n");
  return FUNC_2(-VAR_1);
 }

 VAR_15->mmio = FUNC_5(VAR_13, "dsi_pll", "DSI_PLL");
 if (FUNC_3(VAR_15->mmio)) {
  FUNC_1(&VAR_13->dev, "failed to map PLL base\n");
  return FUNC_2(-VAR_1);
 }

 FUNC_7(&VAR_15->postdiv_lock);

 VAR_16 = &VAR_15->base;
 VAR_16->min_rate = VAR_4;
 VAR_16->max_rate = VAR_3;
 VAR_16->get_provider = VAR_8;
 VAR_16->destroy = VAR_5;
 VAR_16->disable_seq = VAR_6;
 VAR_16->save_state = VAR_10;
 VAR_16->restore_state = VAR_9;
 VAR_16->set_usecase = VAR_11;

 VAR_15->vco_delay = 1;

 VAR_16->en_seq_cnt = 1;
 VAR_16->enable_seqs[0] = VAR_7;

 VAR_17 = FUNC_6(VAR_15);
 if (VAR_17) {
  FUNC_1(&VAR_13->dev, "failed to register PLL: %d\n", VAR_17);
  return FUNC_2(VAR_17);
 }

 return VAR_16;
}
