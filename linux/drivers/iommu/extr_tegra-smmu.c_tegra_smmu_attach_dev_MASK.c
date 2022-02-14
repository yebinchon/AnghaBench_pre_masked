
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_smmu_as {int id; } ;
struct tegra_smmu {TYPE_1__* dev; } ;
struct of_phandle_args {unsigned int* args; scalar_t__ np; } ;
struct iommu_domain {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {struct tegra_smmu* iommu; } ;
struct device {struct device_node* of_node; TYPE_2__ archdata; } ;
struct TYPE_3__ {scalar_t__ of_node; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device_node*,char*,char*,unsigned int,struct of_phandle_args*) ;
 int FUNC_2 (struct tegra_smmu*,struct tegra_smmu_as*) ;
 int FUNC_3 (struct tegra_smmu*,unsigned int,int ) ;
 struct tegra_smmu_as* FUNC_4 (struct iommu_domain*) ;

__attribute__((used)) static int FUNC_5(struct iommu_domain *VAR_1,
     struct device *VAR_2)
{
 struct tegra_smmu *VAR_3 = VAR_2->archdata.iommu;
 struct tegra_smmu_as *VAR_4 = FUNC_4(VAR_1);
 struct device_node *VAR_5 = VAR_2->of_node;
 struct of_phandle_args VAR_6;
 unsigned int VAR_7 = 0;
 int VAR_8 = 0;

 while (!FUNC_1(VAR_5, "iommus", "#iommu-cells", VAR_7,
        &VAR_6)) {
  unsigned int VAR_9 = VAR_6.args[0];

  if (VAR_6.np != VAR_3->dev->of_node) {
   FUNC_0(VAR_6.np);
   continue;
  }

  FUNC_0(VAR_6.np);

  VAR_8 = FUNC_2(VAR_3, VAR_4);
  if (VAR_8 < 0)
   return VAR_8;

  FUNC_3(VAR_3, VAR_9, VAR_4->id);
  VAR_7++;
 }

 if (VAR_7 == 0)
  return -VAR_0;

 return 0;
}
