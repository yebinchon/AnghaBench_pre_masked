
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct msm_kms {int irq; struct msm_gem_address_space* aspace; } ;
struct msm_gem_address_space {TYPE_3__* mmu; } ;
struct mdp4_platform_config {scalar_t__ iommu; int max_clk; } ;
struct TYPE_8__ {struct msm_kms base; } ;
struct mdp4_kms {int rev; int rpm_enabled; int blank_cursor_iova; struct msm_gem_address_space* blank_cursor_bo; struct msm_gem_address_space* lut_clk; struct msm_gem_address_space* clk; struct msm_gem_address_space* axi_clk; struct msm_gem_address_space* pclk; struct msm_gem_address_space* vdd; struct msm_gem_address_space* mmio; struct drm_device* dev; TYPE_4__ base; } ;
struct TYPE_6__ {int max_width; int max_height; scalar_t__ min_height; scalar_t__ min_width; } ;
struct drm_device {TYPE_2__ mode_config; int dev; } ;
struct TYPE_7__ {TYPE_1__* funcs; } ;
struct TYPE_5__ {int (* attach ) (TYPE_3__*,int ,int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 struct msm_kms* FUNC_3 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct msm_gem_address_space*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct msm_gem_address_space*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct msm_gem_address_space*,int ) ;
 void* FUNC_7 (int *,char*) ;
 struct msm_gem_address_space* FUNC_8 (int *,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct mdp4_kms* FUNC_9 (int,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct msm_kms*) ;
 int FUNC_12 (struct mdp4_kms*) ;
 int FUNC_13 (struct mdp4_kms*) ;
 struct mdp4_platform_config* FUNC_14 (struct platform_device*) ;
 int FUNC_15 (struct mdp4_kms*,int ,int ) ;
 int FUNC_16 (TYPE_4__*,int *) ;
 int FUNC_17 (struct mdp4_kms*) ;
 struct msm_gem_address_space* FUNC_18 (int *,scalar_t__,char*) ;
 int FUNC_19 (struct msm_gem_address_space*,struct msm_gem_address_space*,int *) ;
 struct msm_gem_address_space* FUNC_20 (struct drm_device*,int ,int) ;
 struct msm_gem_address_space* FUNC_21 (struct platform_device*,int *,char*) ;
 int FUNC_22 (struct platform_device*,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (struct msm_gem_address_space*) ;
 int FUNC_25 (TYPE_3__*,int ,int ) ;
 struct platform_device* FUNC_26 (int ) ;

struct msm_kms *FUNC_27(struct drm_device *VAR_10)
{
 struct platform_device *VAR_11 = FUNC_26(VAR_10->dev);
 struct mdp4_platform_config *VAR_12 = FUNC_14(VAR_11);
 struct mdp4_kms *VAR_13;
 struct msm_kms *VAR_14 = ((void*)0);
 struct msm_gem_address_space *VAR_15;
 int VAR_16, VAR_17;

 VAR_13 = FUNC_9(sizeof(*VAR_13), VAR_1);
 if (!VAR_13) {
  FUNC_1(VAR_10->dev, "failed to allocate kms\n");
  VAR_17 = -VAR_0;
  goto fail;
 }

 FUNC_16(&VAR_13->base, &VAR_9);

 VAR_14 = &VAR_13->base.base;

 VAR_13->dev = VAR_10;

 VAR_13->mmio = FUNC_21(VAR_11, ((void*)0), "MDP4");
 if (FUNC_4(VAR_13->mmio)) {
  VAR_17 = FUNC_5(VAR_13->mmio);
  goto fail;
 }

 VAR_16 = FUNC_22(VAR_11, 0);
 if (VAR_16 < 0) {
  VAR_17 = VAR_16;
  FUNC_1(VAR_10->dev, "failed to get irq: %d\n", VAR_17);
  goto fail;
 }

 VAR_14->irq = VAR_16;





 VAR_13->vdd = FUNC_8(&VAR_11->dev, "vdd");
 if (FUNC_4(VAR_13->vdd))
  VAR_13->vdd = ((void*)0);

 if (VAR_13->vdd) {
  VAR_17 = FUNC_24(VAR_13->vdd);
  if (VAR_17) {
   FUNC_1(VAR_10->dev, "failed to enable regulator vdd: %d\n", VAR_17);
   goto fail;
  }
 }

 VAR_13->clk = FUNC_7(&VAR_11->dev, "core_clk");
 if (FUNC_4(VAR_13->clk)) {
  FUNC_1(VAR_10->dev, "failed to get core_clk\n");
  VAR_17 = FUNC_5(VAR_13->clk);
  goto fail;
 }

 VAR_13->pclk = FUNC_7(&VAR_11->dev, "iface_clk");
 if (FUNC_4(VAR_13->pclk))
  VAR_13->pclk = ((void*)0);

 if (VAR_13->rev >= 2) {
  VAR_13->lut_clk = FUNC_7(&VAR_11->dev, "lut_clk");
  if (FUNC_4(VAR_13->lut_clk)) {
   FUNC_1(VAR_10->dev, "failed to get lut_clk\n");
   VAR_17 = FUNC_5(VAR_13->lut_clk);
   goto fail;
  }
 }

 VAR_13->axi_clk = FUNC_7(&VAR_11->dev, "bus_clk");
 if (FUNC_4(VAR_13->axi_clk)) {
  FUNC_1(VAR_10->dev, "failed to get axi_clk\n");
  VAR_17 = FUNC_5(VAR_13->axi_clk);
  goto fail;
 }

 FUNC_6(VAR_13->clk, VAR_12->max_clk);
 if (VAR_13->lut_clk)
  FUNC_6(VAR_13->lut_clk, VAR_12->max_clk);

 FUNC_23(VAR_10->dev);
 VAR_13->rpm_enabled = 1;





 FUNC_13(VAR_13);
 FUNC_15(VAR_13, VAR_5, 0);
 FUNC_15(VAR_13, VAR_6, 0);
 FUNC_15(VAR_13, VAR_4, 0);
 FUNC_12(VAR_13);
 FUNC_10(16);

 if (VAR_12->iommu) {
  VAR_15 = FUNC_18(&VAR_11->dev,
    VAR_12->iommu, "mdp4");
  if (FUNC_4(VAR_15)) {
   VAR_17 = FUNC_5(VAR_15);
   goto fail;
  }

  VAR_14->aspace = VAR_15;

  VAR_17 = VAR_15->mmu->funcs->attach(VAR_15->mmu, VAR_8,
    FUNC_0(VAR_8));
  if (VAR_17)
   goto fail;
 } else {
  FUNC_2(VAR_10->dev, "no iommu, fallback to phys "
    "contig buffers for scanout\n");
  VAR_15 = ((void*)0);
 }

 VAR_17 = FUNC_17(VAR_13);
 if (VAR_17) {
  FUNC_1(VAR_10->dev, "modeset_init failed: %d\n", VAR_17);
  goto fail;
 }

 VAR_13->blank_cursor_bo = FUNC_20(VAR_10, VAR_7, VAR_3 | VAR_2);
 if (FUNC_4(VAR_13->blank_cursor_bo)) {
  VAR_17 = FUNC_5(VAR_13->blank_cursor_bo);
  FUNC_1(VAR_10->dev, "could not allocate blank-cursor bo: %d\n", VAR_17);
  VAR_13->blank_cursor_bo = ((void*)0);
  goto fail;
 }

 VAR_17 = FUNC_19(VAR_13->blank_cursor_bo, VAR_14->aspace,
   &VAR_13->blank_cursor_iova);
 if (VAR_17) {
  FUNC_1(VAR_10->dev, "could not pin blank-cursor bo: %d\n", VAR_17);
  goto fail;
 }

 VAR_10->mode_config.min_width = 0;
 VAR_10->mode_config.min_height = 0;
 VAR_10->mode_config.max_width = 2048;
 VAR_10->mode_config.max_height = 2048;

 return VAR_14;

fail:
 if (VAR_14)
  FUNC_11(VAR_14);
 return FUNC_3(VAR_17);
}
