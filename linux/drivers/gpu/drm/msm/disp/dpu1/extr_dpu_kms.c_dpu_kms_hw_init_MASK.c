
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef size_t u32 ;
struct msm_kms {int dummy; } ;
struct msm_drm_private {int dummy; } ;
struct TYPE_26__ {int max_width; int max_height; int allow_fb_modifiers; scalar_t__ min_height; scalar_t__ min_width; } ;
struct drm_device {TYPE_3__ mode_config; struct msm_drm_private* dev_private; } ;
struct dpu_kms {int rm_init; TYPE_5__* pdev; int perf; TYPE_4__* catalog; TYPE_4__* hw_intr; TYPE_4__* mmio; TYPE_4__** hw_vbif; TYPE_4__** vbif; TYPE_4__* hw_mdp; int rm; int core_rev; void* reg_dma_len; TYPE_4__* reg_dma; void** vbif_len; void* mmio_len; int bandwidth_ref; struct drm_device* dev; } ;
struct TYPE_28__ {int dev; } ;
struct TYPE_27__ {int vbif_count; TYPE_2__* caps; TYPE_1__* vbif; } ;
struct TYPE_25__ {int max_mixer_width; } ;
struct TYPE_24__ {size_t id; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_4__*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_6 (struct dpu_kms*) ;
 int FUNC_7 (struct dpu_kms*,char*) ;
 int FUNC_8 (struct dpu_kms*) ;
 int FUNC_9 (struct dpu_kms*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,struct drm_device*,TYPE_4__*,int ) ;
 TYPE_4__* FUNC_13 (int ) ;
 TYPE_4__* FUNC_14 (TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_15 (int ,TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_16 (size_t,TYPE_4__*,TYPE_4__*) ;
 void* FUNC_17 (TYPE_5__*,char*) ;
 int FUNC_18 (int *,TYPE_4__*,TYPE_4__*) ;
 int FUNC_19 (struct dpu_kms*) ;
 void* FUNC_20 (TYPE_5__*,char*,char*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (char*,int ) ;
 int FUNC_24 (TYPE_4__*) ;
 struct dpu_kms* FUNC_25 (struct msm_kms*) ;

__attribute__((used)) static int FUNC_26(struct msm_kms *VAR_4)
{
 struct dpu_kms *VAR_5;
 struct drm_device *VAR_6;
 struct msm_drm_private *VAR_7;
 int VAR_8, VAR_9 = -VAR_0;

 if (!VAR_4) {
  FUNC_1("invalid kms\n");
  return VAR_9;
 }

 VAR_5 = FUNC_25(VAR_4);
 VAR_6 = VAR_5->dev;
 if (!VAR_6) {
  FUNC_1("invalid device\n");
  return VAR_9;
 }

 VAR_7 = VAR_6->dev_private;
 if (!VAR_7) {
  FUNC_1("invalid private data\n");
  return VAR_9;
 }

 FUNC_10(&VAR_5->bandwidth_ref, 0);

 VAR_5->mmio = FUNC_20(VAR_5->pdev, "mdp", "mdp");
 if (FUNC_3(VAR_5->mmio)) {
  VAR_9 = FUNC_5(VAR_5->mmio);
  FUNC_1("mdp register memory map failed: %d\n", VAR_9);
  VAR_5->mmio = ((void*)0);
  goto error;
 }
 FUNC_2("mapped dpu address space @%pK\n", VAR_5->mmio);
 VAR_5->mmio_len = FUNC_17(VAR_5->pdev, "mdp");

 VAR_5->vbif[VAR_3] = FUNC_20(VAR_5->pdev, "vbif", "vbif");
 if (FUNC_3(VAR_5->vbif[VAR_3])) {
  VAR_9 = FUNC_5(VAR_5->vbif[VAR_3]);
  FUNC_1("vbif register memory map failed: %d\n", VAR_9);
  VAR_5->vbif[VAR_3] = ((void*)0);
  goto error;
 }
 VAR_5->vbif_len[VAR_3] = FUNC_17(VAR_5->pdev, "vbif");
 VAR_5->vbif[VAR_2] = FUNC_20(VAR_5->pdev, "vbif_nrt", "vbif_nrt");
 if (FUNC_3(VAR_5->vbif[VAR_2])) {
  VAR_5->vbif[VAR_2] = ((void*)0);
  FUNC_0("VBIF NRT is not defined");
 } else {
  VAR_5->vbif_len[VAR_2] = FUNC_17(VAR_5->pdev,
            "vbif_nrt");
 }

 VAR_5->reg_dma = FUNC_20(VAR_5->pdev, "regdma", "regdma");
 if (FUNC_3(VAR_5->reg_dma)) {
  VAR_5->reg_dma = ((void*)0);
  FUNC_0("REG_DMA is not defined");
 } else {
  VAR_5->reg_dma_len = FUNC_17(VAR_5->pdev, "regdma");
 }

 FUNC_21(&VAR_5->pdev->dev);

 VAR_5->core_rev = FUNC_24(VAR_5->mmio + 0x0);

 FUNC_23("dpu hardware revision:0x%x\n", VAR_5->core_rev);

 VAR_5->catalog = FUNC_13(VAR_5->core_rev);
 if (FUNC_4(VAR_5->catalog)) {
  VAR_9 = FUNC_5(VAR_5->catalog);
  if (!VAR_5->catalog)
   VAR_9 = -VAR_0;
  FUNC_1("catalog init failed: %d\n", VAR_9);
  VAR_5->catalog = ((void*)0);
  goto power_error;
 }





 VAR_9 = FUNC_9(VAR_5);
 if (VAR_9) {
  FUNC_1("dpu_kms_mmu_init failed: %d\n", VAR_9);
  goto power_error;
 }

 VAR_9 = FUNC_18(&VAR_5->rm, VAR_5->catalog, VAR_5->mmio);
 if (VAR_9) {
  FUNC_1("rm init failed: %d\n", VAR_9);
  goto power_error;
 }

 VAR_5->rm_init = 1;

 VAR_5->hw_mdp = FUNC_15(VAR_1, VAR_5->mmio,
          VAR_5->catalog);
 if (FUNC_3(VAR_5->hw_mdp)) {
  VAR_9 = FUNC_5(VAR_5->hw_mdp);
  FUNC_1("failed to get hw_mdp: %d\n", VAR_9);
  VAR_5->hw_mdp = ((void*)0);
  goto power_error;
 }

 for (VAR_8 = 0; VAR_8 < VAR_5->catalog->vbif_count; VAR_8++) {
  u32 VAR_10 = VAR_5->catalog->vbif[VAR_8].id;

  VAR_5->hw_vbif[VAR_8] = FUNC_16(VAR_10,
    VAR_5->vbif[VAR_10], VAR_5->catalog);
  if (FUNC_4(VAR_5->hw_vbif[VAR_10])) {
   VAR_9 = FUNC_5(VAR_5->hw_vbif[VAR_10]);
   if (!VAR_5->hw_vbif[VAR_10])
    VAR_9 = -VAR_0;
   FUNC_1("failed to init vbif %d: %d\n", VAR_10, VAR_9);
   VAR_5->hw_vbif[VAR_10] = ((void*)0);
   goto power_error;
  }
 }

 VAR_9 = FUNC_12(&VAR_5->perf, VAR_6, VAR_5->catalog,
   FUNC_7(VAR_5, "core"));
 if (VAR_9) {
  FUNC_1("failed to init perf %d\n", VAR_9);
  goto perf_err;
 }

 VAR_5->hw_intr = FUNC_14(VAR_5->mmio, VAR_5->catalog);
 if (FUNC_4(VAR_5->hw_intr)) {
  VAR_9 = FUNC_5(VAR_5->hw_intr);
  FUNC_1("hw_intr init failed: %d\n", VAR_9);
  VAR_5->hw_intr = ((void*)0);
  goto hw_intr_init_err;
 }

 VAR_6->mode_config.min_width = 0;
 VAR_6->mode_config.min_height = 0;





 VAR_6->mode_config.max_width =
   VAR_5->catalog->caps->max_mixer_width * 2;
 VAR_6->mode_config.max_height = 4096;




 VAR_6->mode_config.allow_fb_modifiers = 1;





 VAR_9 = FUNC_6(VAR_5);
 if (VAR_9) {
  FUNC_1("modeset init failed: %d\n", VAR_9);
  goto drm_obj_init_err;
 }

 FUNC_19(VAR_5);

 FUNC_22(&VAR_5->pdev->dev);

 return 0;

drm_obj_init_err:
 FUNC_11(&VAR_5->perf);
hw_intr_init_err:
perf_err:
power_error:
 FUNC_22(&VAR_5->pdev->dev);
error:
 FUNC_8(VAR_5);

 return VAR_9;
}
