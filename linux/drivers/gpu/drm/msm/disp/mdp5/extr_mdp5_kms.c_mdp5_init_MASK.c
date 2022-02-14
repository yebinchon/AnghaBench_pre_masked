
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dev; } ;
struct msm_drm_private {int * kms; } ;
struct TYPE_6__ {int base; } ;
struct mdp5_kms {int rpm_enabled; int caps; TYPE_3__ base; int * ctlm; int * cfg; int * mmio; int * smp; int core_clk; int lut_clk; int vsync_clk; int ahb_clk; int axi_clk; struct platform_device* pdev; struct drm_device* dev; int resource_lock; } ;
struct mdp5_cfg {TYPE_2__* hw; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct TYPE_4__ {int caps; } ;
struct TYPE_5__ {int max_clk; int smp; TYPE_1__ mdp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 struct mdp5_kms* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct platform_device*,int *,char*,int) ;
 int FUNC_5 (struct mdp5_kms*) ;
 int FUNC_6 (struct mdp5_kms*) ;
 int FUNC_7 (struct mdp5_kms*) ;
 struct mdp5_cfg* FUNC_8 (int *) ;
 int * FUNC_9 (struct mdp5_kms*,int ,int ) ;
 int * FUNC_10 (struct drm_device*,int *,int *) ;
 int FUNC_11 (struct platform_device*) ;
 int FUNC_12 (struct mdp5_kms*) ;
 int * FUNC_13 (struct mdp5_kms*,int *) ;
 int * FUNC_14 (struct platform_device*,char*,char*) ;
 int FUNC_15 (struct platform_device*,struct mdp5_kms*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct mdp5_kms*,int *,int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_3, struct drm_device *VAR_4)
{
 struct msm_drm_private *VAR_5 = VAR_4->dev_private;
 struct mdp5_kms *VAR_6;
 struct mdp5_cfg *VAR_7;
 u32 VAR_8, VAR_9;
 int VAR_10;

 VAR_6 = FUNC_3(&VAR_3->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  VAR_10 = -VAR_0;
  goto fail;
 }

 FUNC_15(VAR_3, VAR_6);

 FUNC_18(&VAR_6->resource_lock);

 VAR_6->dev = VAR_4;
 VAR_6->pdev = VAR_3;

 VAR_10 = FUNC_12(VAR_6);
 if (VAR_10)
  goto fail;

 VAR_6->mmio = FUNC_14(VAR_3, "mdp_phys", "MDP5");
 if (FUNC_0(VAR_6->mmio)) {
  VAR_10 = FUNC_1(VAR_6->mmio);
  goto fail;
 }


 VAR_10 = FUNC_4(VAR_3, &VAR_6->axi_clk, "bus", 1);
 if (VAR_10)
  goto fail;
 VAR_10 = FUNC_4(VAR_3, &VAR_6->ahb_clk, "iface", 1);
 if (VAR_10)
  goto fail;
 VAR_10 = FUNC_4(VAR_3, &VAR_6->core_clk, "core", 1);
 if (VAR_10)
  goto fail;
 VAR_10 = FUNC_4(VAR_3, &VAR_6->vsync_clk, "vsync", 1);
 if (VAR_10)
  goto fail;


 FUNC_4(VAR_3, &VAR_6->lut_clk, "lut", 0);





 FUNC_2(VAR_6->core_clk, 200000000);

 FUNC_16(&VAR_3->dev);
 VAR_6->rpm_enabled = 1;

 FUNC_17(VAR_6, &VAR_8, &VAR_9);

 VAR_6->cfg = FUNC_9(VAR_6, VAR_8, VAR_9);
 if (FUNC_0(VAR_6->cfg)) {
  VAR_10 = FUNC_1(VAR_6->cfg);
  VAR_6->cfg = ((void*)0);
  goto fail;
 }

 VAR_7 = FUNC_8(VAR_6->cfg);
 VAR_6->caps = VAR_7->hw->mdp.caps;


 FUNC_2(VAR_6->core_clk, VAR_7->hw->max_clk);






 if (VAR_6->caps & VAR_2) {
  VAR_6->smp = FUNC_13(VAR_6, &VAR_7->hw->smp);
  if (FUNC_0(VAR_6->smp)) {
   VAR_10 = FUNC_1(VAR_6->smp);
   VAR_6->smp = ((void*)0);
   goto fail;
  }
 }

 VAR_6->ctlm = FUNC_10(VAR_4, VAR_6->mmio, VAR_6->cfg);
 if (FUNC_0(VAR_6->ctlm)) {
  VAR_10 = FUNC_1(VAR_6->ctlm);
  VAR_6->ctlm = ((void*)0);
  goto fail;
 }

 VAR_10 = FUNC_6(VAR_6);
 if (VAR_10)
  goto fail;

 VAR_10 = FUNC_5(VAR_6);
 if (VAR_10)
  goto fail;

 VAR_10 = FUNC_7(VAR_6);
 if (VAR_10)
  goto fail;


 VAR_5->kms = &VAR_6->base.base;

 return 0;
fail:
 FUNC_11(VAR_3);
 return VAR_10;
}
