
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct resource {int start; } ;
struct device {int fwnode; scalar_t__ of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_11__ {int irq; } ;
struct TYPE_12__ {TYPE_3__ q; } ;
struct TYPE_9__ {int irq; } ;
struct TYPE_10__ {TYPE_1__ q; } ;
struct arm_smmu_device {int combined_irq; int gerr_irq; int iommu; TYPE_4__ priq; TYPE_2__ evtq; int base; struct device* dev; } ;
typedef int resource_size_t ;
struct TYPE_13__ {int * iommu_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_5__ VAR_5 ;
 int FUNC_2 (struct platform_device*,struct arm_smmu_device*) ;
 int FUNC_3 (struct platform_device*,struct arm_smmu_device*) ;
 int FUNC_4 (struct arm_smmu_device*) ;
 int FUNC_5 (struct arm_smmu_device*,int) ;
 int FUNC_6 (struct arm_smmu_device*) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (struct arm_smmu_device*) ;
 int FUNC_8 (TYPE_5__*,int *) ;
 int FUNC_9 (struct device*,char*,...) ;
 int FUNC_10 (struct device*,struct resource*) ;
 struct arm_smmu_device* FUNC_11 (struct device*,int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,struct device*,int *,char*,int *) ;
 TYPE_5__ VAR_7 ;
 int FUNC_16 () ;
 TYPE_5__ VAR_8 ;
 int FUNC_17 (struct platform_device*,char*) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct arm_smmu_device*) ;
 scalar_t__ FUNC_20 (struct resource*) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_9)
{
 int VAR_10, VAR_11;
 struct resource *VAR_12;
 resource_size_t VAR_13;
 struct arm_smmu_device *VAR_14;
 struct device *VAR_15 = &VAR_9->dev;
 bool VAR_16;

 VAR_14 = FUNC_11(VAR_15, sizeof(*VAR_14), VAR_3);
 if (!VAR_14) {
  FUNC_9(VAR_15, "failed to allocate arm_smmu_device\n");
  return -VAR_2;
 }
 VAR_14->dev = VAR_15;

 if (VAR_15->of_node) {
  VAR_11 = FUNC_3(VAR_9, VAR_14);
 } else {
  VAR_11 = FUNC_2(VAR_9, VAR_14);
  if (VAR_11 == -VAR_1)
   return VAR_11;
 }


 VAR_16 = !!VAR_11;


 VAR_12 = FUNC_18(VAR_9, VAR_4, 0);
 if (FUNC_20(VAR_12) + 1 < FUNC_7(VAR_14)) {
  FUNC_9(VAR_15, "MMIO region too small (%pr)\n", VAR_12);
  return -VAR_0;
 }
 VAR_13 = VAR_12->start;

 VAR_14->base = FUNC_10(VAR_15, VAR_12);
 if (FUNC_0(VAR_14->base))
  return FUNC_1(VAR_14->base);



 VAR_10 = FUNC_17(VAR_9, "combined");
 if (VAR_10 > 0)
  VAR_14->combined_irq = VAR_10;
 else {
  VAR_10 = FUNC_17(VAR_9, "eventq");
  if (VAR_10 > 0)
   VAR_14->evtq.q.irq = VAR_10;

  VAR_10 = FUNC_17(VAR_9, "priq");
  if (VAR_10 > 0)
   VAR_14->priq.q.irq = VAR_10;

  VAR_10 = FUNC_17(VAR_9, "gerror");
  if (VAR_10 > 0)
   VAR_14->gerr_irq = VAR_10;
 }

 VAR_11 = FUNC_4(VAR_14);
 if (VAR_11)
  return VAR_11;


 VAR_11 = FUNC_6(VAR_14);
 if (VAR_11)
  return VAR_11;


 FUNC_19(VAR_9, VAR_14);


 VAR_11 = FUNC_5(VAR_14, VAR_16);
 if (VAR_11)
  return VAR_11;


 VAR_11 = FUNC_15(&VAR_14->iommu, VAR_15, ((void*)0),
         "smmu3.%pa", &VAR_13);
 if (VAR_11)
  return VAR_11;

 FUNC_14(&VAR_14->iommu, &VAR_6);
 FUNC_13(&VAR_14->iommu, VAR_15->fwnode);

 VAR_11 = FUNC_12(&VAR_14->iommu);
 if (VAR_11) {
  FUNC_9(VAR_15, "Failed to register iommu\n");
  return VAR_11;
 }
 if (VAR_8.iommu_ops != &VAR_6) {
  VAR_11 = FUNC_8(&VAR_8, &VAR_6);
  if (VAR_11)
   return VAR_11;
 }
 return 0;
}
