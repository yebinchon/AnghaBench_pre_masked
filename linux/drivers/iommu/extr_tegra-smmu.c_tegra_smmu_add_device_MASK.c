
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_smmu {int iommu; } ;
struct of_phandle_args {int np; } ;
struct iommu_group {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct tegra_smmu* iommu; } ;
struct device {TYPE_1__ archdata; struct device_node* of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iommu_group*) ;
 int FUNC_1 (struct iommu_group*) ;
 int FUNC_2 (int *,struct device*) ;
 struct iommu_group* FUNC_3 (struct device*) ;
 int FUNC_4 (struct iommu_group*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct device_node*,char*,char*,unsigned int,struct of_phandle_args*) ;
 int FUNC_7 (struct tegra_smmu*,struct device*,struct of_phandle_args*) ;
 struct tegra_smmu* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->of_node;
 struct tegra_smmu *VAR_3 = ((void*)0);
 struct iommu_group *VAR_4;
 struct of_phandle_args VAR_5;
 unsigned int VAR_6 = 0;
 int VAR_7;

 while (FUNC_6(VAR_2, "iommus", "#iommu-cells", VAR_6,
       &VAR_5) == 0) {
  VAR_3 = FUNC_8(VAR_5.np);
  if (VAR_3) {
   VAR_7 = FUNC_7(VAR_3, VAR_1, &VAR_5);
   FUNC_5(VAR_5.np);

   if (VAR_7 < 0)
    return VAR_7;






   VAR_1->archdata.iommu = VAR_3;

   FUNC_2(&VAR_3->iommu, VAR_1);

   break;
  }

  FUNC_5(VAR_5.np);
  VAR_6++;
 }

 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_3(VAR_1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_4(VAR_4);

 return 0;
}
