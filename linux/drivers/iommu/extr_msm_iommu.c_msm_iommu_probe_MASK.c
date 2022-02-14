
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_9__ {TYPE_1__* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct msm_iommu_dev {scalar_t__ irq; int ncb; void* pclk; void* clk; void* base; int iommu; TYPE_2__* dev; int dev_node; int ctx_list; } ;
typedef int resource_size_t ;
struct TYPE_8__ {int fwnode; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,int ,int) ;
 int FUNC_5 (void*,int ,int ) ;
 int FUNC_6 (void*,int ,int) ;
 int FUNC_7 (void*,int ,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (TYPE_2__*,char*) ;
 void* FUNC_12 (TYPE_2__*,char*) ;
 void* FUNC_13 (TYPE_2__*,struct resource*) ;
 struct msm_iommu_dev* FUNC_14 (TYPE_2__*,int,int ) ;
 int FUNC_15 (TYPE_2__*,scalar_t__,int *,int ,int,char*,struct msm_iommu_dev*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *,TYPE_2__*,int *,char*,int *) ;
 int FUNC_20 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_21 (void*,int) ;
 int FUNC_22 (TYPE_1__*,char*,int*) ;
 int VAR_7 ;
 scalar_t__ FUNC_23 (struct platform_device*,int ) ;
 struct resource* FUNC_24 (struct platform_device*,int ,int ) ;
 int FUNC_25 (char*,...) ;
 int FUNC_26 (char*,void*,scalar_t__,int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_9)
{
 struct resource *VAR_10;
 resource_size_t VAR_11;
 struct msm_iommu_dev *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 VAR_12 = FUNC_14(&VAR_9->dev, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->dev = &VAR_9->dev;
 FUNC_1(&VAR_12->ctx_list);

 VAR_12->pclk = FUNC_12(VAR_12->dev, "smmu_pclk");
 if (FUNC_2(VAR_12->pclk)) {
  FUNC_11(VAR_12->dev, "could not get smmu_pclk\n");
  return FUNC_3(VAR_12->pclk);
 }

 VAR_13 = FUNC_9(VAR_12->pclk);
 if (VAR_13) {
  FUNC_11(VAR_12->dev, "could not prepare smmu_pclk\n");
  return VAR_13;
 }

 VAR_12->clk = FUNC_12(VAR_12->dev, "iommu_clk");
 if (FUNC_2(VAR_12->clk)) {
  FUNC_11(VAR_12->dev, "could not get iommu_clk\n");
  FUNC_10(VAR_12->pclk);
  return FUNC_3(VAR_12->clk);
 }

 VAR_13 = FUNC_9(VAR_12->clk);
 if (VAR_13) {
  FUNC_11(VAR_12->dev, "could not prepare iommu_clk\n");
  FUNC_10(VAR_12->pclk);
  return VAR_13;
 }

 VAR_10 = FUNC_24(VAR_9, VAR_2, 0);
 VAR_12->base = FUNC_13(VAR_12->dev, VAR_10);
 if (FUNC_2(VAR_12->base)) {
  FUNC_11(VAR_12->dev, "could not get iommu base\n");
  VAR_13 = FUNC_3(VAR_12->base);
  goto fail;
 }
 VAR_11 = VAR_10->start;

 VAR_12->irq = FUNC_23(VAR_9, 0);
 if (VAR_12->irq < 0) {
  VAR_13 = -VAR_0;
  goto fail;
 }

 VAR_13 = FUNC_22(VAR_12->dev->of_node, "qcom,ncb", &VAR_15);
 if (VAR_13) {
  FUNC_11(VAR_12->dev, "could not get ncb\n");
  goto fail;
 }
 VAR_12->ncb = VAR_15;

 FUNC_21(VAR_12->base, VAR_12->ncb);
 FUNC_4(VAR_12->base, 0, 1);
 FUNC_5(VAR_12->base, 0, 0);
 FUNC_6(VAR_12->base, 0, 1);
 FUNC_7(VAR_12->base, 0, 0);
 VAR_14 = FUNC_0(VAR_12->base, 0);
 FUNC_6(VAR_12->base, 0, 0);
 FUNC_4(VAR_12->base, 0, 0);

 if (!VAR_14) {
  FUNC_25("Invalid PAR value detected\n");
  VAR_13 = -VAR_0;
  goto fail;
 }

 VAR_13 = FUNC_15(VAR_12->dev, VAR_12->irq, ((void*)0),
     VAR_5,
     VAR_3 | VAR_4,
     "msm_iommu_secure_irpt_handler",
     VAR_12);
 if (VAR_13) {
  FUNC_25("Request IRQ %d failed with ret=%d\n", VAR_12->irq, VAR_13);
  goto fail;
 }

 FUNC_20(&VAR_12->dev_node, &VAR_8);

 VAR_13 = FUNC_19(&VAR_12->iommu, VAR_12->dev, ((void*)0),
         "msm-smmu.%pa", &VAR_11);
 if (VAR_13) {
  FUNC_25("Could not add msm-smmu at %pa to sysfs\n", &VAR_11);
  goto fail;
 }

 FUNC_18(&VAR_12->iommu, &VAR_6);
 FUNC_17(&VAR_12->iommu, &VAR_9->dev.of_node->fwnode);

 VAR_13 = FUNC_16(&VAR_12->iommu);
 if (VAR_13) {
  FUNC_25("Could not register msm-smmu at %pa\n", &VAR_11);
  goto fail;
 }

 FUNC_8(&VAR_7, &VAR_6);

 FUNC_26("device mapped at %p, irq %d with %d ctx banks\n",
  VAR_12->base, VAR_12->irq, VAR_12->ncb);

 return VAR_13;
fail:
 FUNC_10(VAR_12->clk);
 FUNC_10(VAR_12->pclk);
 return VAR_13;
}
