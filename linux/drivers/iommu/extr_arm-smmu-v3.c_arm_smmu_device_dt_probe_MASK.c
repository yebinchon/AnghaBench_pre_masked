
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct arm_smmu_device {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,int*) ;
 int FUNC_3 (struct arm_smmu_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2,
        struct arm_smmu_device *VAR_3)
{
 struct device *VAR_4 = &VAR_2->dev;
 u32 VAR_5;
 int VAR_6 = -VAR_1;

 if (FUNC_2(VAR_4->of_node, "#iommu-cells", &VAR_5))
  FUNC_0(VAR_4, "missing #iommu-cells property\n");
 else if (VAR_5 != 1)
  FUNC_0(VAR_4, "invalid #iommu-cells value (%d)\n", VAR_5);
 else
  VAR_6 = 0;

 FUNC_3(VAR_3);

 if (FUNC_1(VAR_4->of_node))
  VAR_3->features |= VAR_0;

 return VAR_6;
}
