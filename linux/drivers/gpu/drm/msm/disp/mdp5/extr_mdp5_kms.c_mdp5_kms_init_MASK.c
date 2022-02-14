
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct device {struct device* parent; int iommu_fwspec; int of_node; } ;
struct platform_device {struct device dev; } ;
struct msm_kms {int irq; struct msm_gem_address_space* aspace; } ;
struct msm_gem_address_space {TYPE_7__* mmu; } ;
struct msm_drm_private {struct msm_kms* kms; } ;
struct mdp5_kms {int cfg; struct platform_device* pdev; int base; } ;
struct TYPE_10__ {scalar_t__ iommu; } ;
struct mdp5_cfg {TYPE_3__ platform; TYPE_2__* hw; } ;
struct TYPE_12__ {int max_width; int max_height; scalar_t__ min_height; scalar_t__ min_width; } ;
struct drm_device {int vblank_disable_immediate; scalar_t__ max_vblank_count; TYPE_6__* driver; TYPE_5__ mode_config; struct msm_drm_private* dev_private; } ;
struct TYPE_14__ {TYPE_4__* funcs; } ;
struct TYPE_13__ {int get_vblank_counter; int get_scanout_position; int get_vblank_timestamp; } ;
struct TYPE_11__ {int (* attach ) (TYPE_7__*,int ,int ) ;} ;
struct TYPE_8__ {int * base; int * connect; } ;
struct TYPE_9__ {TYPE_1__ intf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*) ;
 struct msm_kms* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct msm_gem_address_space*) ;
 int VAR_0 ;
 int FUNC_5 (struct msm_gem_address_space*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int ,int ) ;
 int VAR_3 ;
 int FUNC_9 (int) ;
 struct mdp5_cfg* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (struct msm_kms*) ;
 int FUNC_13 (struct mdp5_kms*,int ,int) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (struct mdp5_kms*) ;
 struct msm_gem_address_space* FUNC_16 (struct device*,scalar_t__,char*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (TYPE_7__*,int ,int ) ;
 struct mdp5_kms* FUNC_20 (int ) ;
 int FUNC_21 (struct msm_kms*) ;

struct msm_kms *FUNC_22(struct drm_device *VAR_6)
{
 struct msm_drm_private *VAR_7 = VAR_6->dev_private;
 struct platform_device *VAR_8;
 struct mdp5_kms *VAR_9;
 struct mdp5_cfg *VAR_10;
 struct msm_kms *VAR_11;
 struct msm_gem_address_space *VAR_12;
 int VAR_13, VAR_14, VAR_15;
 struct device *VAR_16;


 VAR_11 = VAR_7->kms;
 if (!VAR_11)
  return ((void*)0);

 VAR_9 = FUNC_20(FUNC_21(VAR_11));

 FUNC_14(&VAR_9->base, &VAR_3);

 VAR_8 = VAR_9->pdev;

 VAR_13 = FUNC_8(VAR_8->dev.of_node, 0);
 if (VAR_13 < 0) {
  VAR_15 = VAR_13;
  FUNC_1(&VAR_8->dev, "failed to get irq: %d\n", VAR_15);
  goto fail;
 }

 VAR_11->irq = VAR_13;

 VAR_10 = FUNC_10(VAR_9->cfg);





 FUNC_17(&VAR_8->dev);
 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  if (FUNC_11(VAR_10->hw->intf.connect[VAR_14]) ||
      !VAR_10->hw->intf.base[VAR_14])
   continue;
  FUNC_13(VAR_9, FUNC_7(VAR_14), 0);

  FUNC_13(VAR_9, FUNC_6(VAR_14), 0x3);
 }
 FUNC_9(16);

 if (VAR_10->platform.iommu) {
  VAR_16 = &VAR_8->dev;
  if (!VAR_16->iommu_fwspec)
   VAR_16 = VAR_16->parent;

  VAR_12 = FUNC_16(VAR_16,
    VAR_10->platform.iommu, "mdp5");
  if (FUNC_4(VAR_12)) {
   VAR_15 = FUNC_5(VAR_12);
   goto fail;
  }

  VAR_11->aspace = VAR_12;

  VAR_15 = VAR_12->mmu->funcs->attach(VAR_12->mmu, VAR_2,
    FUNC_0(VAR_2));
  if (VAR_15) {
   FUNC_1(&VAR_8->dev, "failed to attach iommu: %d\n",
    VAR_15);
   goto fail;
  }
 } else {
  FUNC_2(&VAR_8->dev,
    "no iommu, fallback to phys contig buffers for scanout\n");
  VAR_12 = ((void*)0);
 }

 FUNC_18(&VAR_8->dev);

 VAR_15 = FUNC_15(VAR_9);
 if (VAR_15) {
  FUNC_1(&VAR_8->dev, "modeset_init failed: %d\n", VAR_15);
  goto fail;
 }

 VAR_6->mode_config.min_width = 0;
 VAR_6->mode_config.min_height = 0;
 VAR_6->mode_config.max_width = 0xffff;
 VAR_6->mode_config.max_height = 0xffff;

 VAR_6->driver->get_vblank_timestamp = VAR_1;
 VAR_6->driver->get_scanout_position = VAR_4;
 VAR_6->driver->get_vblank_counter = VAR_5;
 VAR_6->max_vblank_count = 0;
 VAR_6->vblank_disable_immediate = 1;

 return VAR_11;
fail:
 if (VAR_11)
  FUNC_12(VAR_11);
 return FUNC_3(VAR_15);
}
