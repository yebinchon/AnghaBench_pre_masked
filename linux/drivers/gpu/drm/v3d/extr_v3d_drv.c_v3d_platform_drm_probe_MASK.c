
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {struct v3d_dev* dev_private; } ;
struct v3d_dev {int va_width; int ver; int cores; int mmu_scratch_paddr; int mmu_scratch; struct drm_device drm; int gca_regs; int bridge_regs; int * reset; int * core_regs; int hub_regs; struct platform_device* pdev; struct device* dev; } ;
struct device {int coherent_dma_mask; } ;
struct platform_device {struct device dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct device*,char*) ;
 int * FUNC_7 (struct device*,int *) ;
 int FUNC_8 (struct device*,int,int *,int) ;
 int FUNC_9 (struct device*,int,int ,int ) ;
 int FUNC_10 (struct drm_device*,int *,struct device*) ;
 int FUNC_11 (struct drm_device*) ;
 int FUNC_12 (struct drm_device*,int ) ;
 int FUNC_13 (struct v3d_dev*) ;
 struct v3d_dev* FUNC_14 (int,int) ;
 int FUNC_15 (struct v3d_dev*,int *,char*) ;
 int FUNC_16 (struct platform_device*,struct drm_device*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct device*,int) ;
 int FUNC_19 (struct device*) ;
 int VAR_12 ;
 int FUNC_20 (struct drm_device*) ;
 int FUNC_21 (struct drm_device*) ;
 int FUNC_22 (struct v3d_dev*) ;
 int FUNC_23 (struct v3d_dev*) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_13)
{
 struct device *VAR_14 = &VAR_13->dev;
 struct drm_device *VAR_15;
 struct v3d_dev *VAR_16;
 int VAR_17;
 u32 VAR_18;
 u32 VAR_19;


 VAR_16 = FUNC_14(sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return -VAR_0;
 VAR_16->dev = VAR_14;
 VAR_16->pdev = VAR_13;
 VAR_15 = &VAR_16->drm;

 VAR_17 = FUNC_15(VAR_16, &VAR_16->hub_regs, "hub");
 if (VAR_17)
  goto dev_free;

 VAR_17 = FUNC_15(VAR_16, &VAR_16->core_regs[0], "core0");
 if (VAR_17)
  goto dev_free;

 VAR_18 = FUNC_4(VAR_7);
 VAR_14->coherent_dma_mask =
  FUNC_0(30 + FUNC_3(VAR_18, VAR_8));
 VAR_16->va_width = 30 + FUNC_3(VAR_18, VAR_9);

 VAR_19 = FUNC_4(VAR_3);
 VAR_16->ver = (FUNC_3(VAR_19, VAR_6) * 10 +
      FUNC_3(VAR_19, VAR_5));
 VAR_16->cores = FUNC_3(VAR_19, VAR_4);
 FUNC_5(VAR_16->cores > 1);

 VAR_16->reset = FUNC_7(VAR_14, ((void*)0));
 if (FUNC_1(VAR_16->reset)) {
  VAR_17 = FUNC_2(VAR_16->reset);

  if (VAR_17 == -VAR_1)
   goto dev_free;

  VAR_16->reset = ((void*)0);
  VAR_17 = FUNC_15(VAR_16, &VAR_16->bridge_regs, "bridge");
  if (VAR_17) {
   FUNC_6(VAR_14,
    "Failed to get reset control or bridge regs\n");
   goto dev_free;
  }
 }

 if (VAR_16->ver < 41) {
  VAR_17 = FUNC_15(VAR_16, &VAR_16->gca_regs, "gca");
  if (VAR_17)
   goto dev_free;
 }

 VAR_16->mmu_scratch = FUNC_8(VAR_14, 4096, &VAR_16->mmu_scratch_paddr,
     VAR_2 | VAR_10 | VAR_11);
 if (!VAR_16->mmu_scratch) {
  FUNC_6(VAR_14, "Failed to allocate MMU scratch page\n");
  VAR_17 = -VAR_0;
  goto dev_free;
 }

 FUNC_19(VAR_14);
 FUNC_18(VAR_14, 50);
 FUNC_17(VAR_14);

 VAR_17 = FUNC_10(&VAR_16->drm, &VAR_12, VAR_14);
 if (VAR_17)
  goto dma_free;

 FUNC_16(VAR_13, VAR_15);
 VAR_15->dev_private = VAR_16;

 VAR_17 = FUNC_21(VAR_15);
 if (VAR_17)
  goto dev_destroy;

 VAR_17 = FUNC_23(VAR_16);
 if (VAR_17)
  goto gem_destroy;

 VAR_17 = FUNC_12(VAR_15, 0);
 if (VAR_17)
  goto irq_disable;

 return 0;

irq_disable:
 FUNC_22(VAR_16);
gem_destroy:
 FUNC_20(VAR_15);
dev_destroy:
 FUNC_11(VAR_15);
dma_free:
 FUNC_9(VAR_14, 4096, VAR_16->mmu_scratch, VAR_16->mmu_scratch_paddr);
dev_free:
 FUNC_13(VAR_16);
 return VAR_17;
}
