
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device {scalar_t__ pm_domain; int fwnode; scalar_t__ of_node; } ;
struct platform_device {struct device dev; } ;
struct arm_smmu_device {int num_global_irqs; int* irqs; int num_clks; scalar_t__ version; int iommu; struct device* dev; int num_context_banks; int num_context_irqs; int clks; int numpage; struct arm_smmu_device* base; } ;
typedef int resource_size_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct arm_smmu_device*) ;
 int FUNC_1 (struct arm_smmu_device*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct platform_device*,struct arm_smmu_device*) ;
 int FUNC_4 (struct arm_smmu_device*) ;
 int FUNC_5 (struct platform_device*,struct arm_smmu_device*) ;
 int FUNC_6 (struct arm_smmu_device*) ;
 int VAR_7 ;
 struct arm_smmu_device* FUNC_7 (struct arm_smmu_device*) ;
 int VAR_8 ;
 int FUNC_8 (struct arm_smmu_device*) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (struct device*,char*,...) ;
 int FUNC_11 (struct device*,int *) ;
 struct arm_smmu_device* FUNC_12 (struct device*,struct resource*) ;
 int* FUNC_13 (struct device*,int,int,int ) ;
 struct arm_smmu_device* FUNC_14 (struct device*,int,int ) ;
 int FUNC_15 (struct device*,int,int ,int ,char*,struct arm_smmu_device*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *,struct device*,int *,char*,int *) ;
 int FUNC_20 (struct platform_device*,int) ;
 struct resource* FUNC_21 (struct platform_device*,int ,int) ;
 int FUNC_22 (struct platform_device*,struct arm_smmu_device*) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (struct resource*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_10)
{
 struct resource *VAR_11;
 resource_size_t VAR_12;
 struct arm_smmu_device *VAR_13;
 struct device *VAR_14 = &VAR_10->dev;
 int VAR_15, VAR_16, VAR_17;

 VAR_13 = FUNC_14(VAR_14, sizeof(*VAR_13), VAR_3);
 if (!VAR_13) {
  FUNC_10(VAR_14, "failed to allocate arm_smmu_device\n");
  return -VAR_2;
 }
 VAR_13->dev = VAR_14;

 if (VAR_14->of_node)
  VAR_17 = FUNC_5(VAR_10, VAR_13);
 else
  VAR_17 = FUNC_3(VAR_10, VAR_13);

 if (VAR_17)
  return VAR_17;

 VAR_13 = FUNC_7(VAR_13);
 if (FUNC_0(VAR_13))
  return FUNC_1(VAR_13);

 VAR_11 = FUNC_21(VAR_10, VAR_5, 0);
 VAR_12 = VAR_11->start;
 VAR_13->base = FUNC_12(VAR_14, VAR_11);
 if (FUNC_0(VAR_13->base))
  return FUNC_1(VAR_13->base);




 VAR_13->numpage = FUNC_25(VAR_11);

 VAR_15 = 0;
 while ((VAR_11 = FUNC_21(VAR_10, VAR_4, VAR_15))) {
  VAR_15++;
  if (VAR_15 > VAR_13->num_global_irqs)
   VAR_13->num_context_irqs++;
 }

 if (!VAR_13->num_context_irqs) {
  FUNC_10(VAR_14, "found %d interrupts but expected at least %d\n",
   VAR_15, VAR_13->num_global_irqs + 1);
  return -VAR_1;
 }

 VAR_13->irqs = FUNC_13(VAR_14, VAR_15, sizeof(*VAR_13->irqs),
      VAR_3);
 if (!VAR_13->irqs) {
  FUNC_10(VAR_14, "failed to allocate %d irqs\n", VAR_15);
  return -VAR_2;
 }

 for (VAR_16 = 0; VAR_16 < VAR_15; ++VAR_16) {
  int VAR_18 = FUNC_20(VAR_10, VAR_16);

  if (VAR_18 < 0) {
   FUNC_10(VAR_14, "failed to get irq index %d\n", VAR_16);
   return -VAR_1;
  }
  VAR_13->irqs[VAR_16] = VAR_18;
 }

 VAR_17 = FUNC_11(VAR_14, &VAR_13->clks);
 if (VAR_17 < 0) {
  FUNC_10(VAR_14, "failed to get clocks %d\n", VAR_17);
  return VAR_17;
 }
 VAR_13->num_clks = VAR_17;

 VAR_17 = FUNC_9(VAR_13->num_clks, VAR_13->clks);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_4(VAR_13);
 if (VAR_17)
  return VAR_17;

 if (VAR_13->version == VAR_0) {
  if (VAR_13->num_context_banks > VAR_13->num_context_irqs) {
   FUNC_10(VAR_14,
         "found only %d context irq(s) but %d required\n",
         VAR_13->num_context_irqs, VAR_13->num_context_banks);
   return -VAR_1;
  }


  VAR_13->num_context_irqs = VAR_13->num_context_banks;
 }

 for (VAR_16 = 0; VAR_16 < VAR_13->num_global_irqs; ++VAR_16) {
  VAR_17 = FUNC_15(VAR_13->dev, VAR_13->irqs[VAR_16],
           VAR_7,
           VAR_6,
           "arm-smmu global fault",
           VAR_13);
  if (VAR_17) {
   FUNC_10(VAR_14, "failed to request global IRQ %d (%u)\n",
    VAR_16, VAR_13->irqs[VAR_16]);
   return VAR_17;
  }
 }

 VAR_17 = FUNC_19(&VAR_13->iommu, VAR_13->dev, ((void*)0),
         "smmu.%pa", &VAR_12);
 if (VAR_17) {
  FUNC_10(VAR_14, "Failed to register iommu in sysfs\n");
  return VAR_17;
 }

 FUNC_18(&VAR_13->iommu, &VAR_8);
 FUNC_17(&VAR_13->iommu, VAR_14->fwnode);

 VAR_17 = FUNC_16(&VAR_13->iommu);
 if (VAR_17) {
  FUNC_10(VAR_14, "Failed to register iommu\n");
  return VAR_17;
 }

 FUNC_22(VAR_10, VAR_13);
 FUNC_6(VAR_13);
 FUNC_8(VAR_13);







 if (VAR_14->pm_domain) {
  FUNC_24(VAR_14);
  FUNC_23(VAR_14);
 }






 if (!VAR_9)
  FUNC_2();

 return 0;
}
