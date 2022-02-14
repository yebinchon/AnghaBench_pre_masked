
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_smmu_as {int id; struct tegra_smmu* smmu; } ;
struct tegra_smmu {TYPE_1__* dev; } ;
struct of_phandle_args {unsigned int* args; scalar_t__ np; } ;
struct iommu_domain {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_2__ {scalar_t__ of_node; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device_node*,char*,char*,unsigned int,struct of_phandle_args*) ;
 int FUNC_2 (struct tegra_smmu*,struct tegra_smmu_as*) ;
 int FUNC_3 (struct tegra_smmu*,unsigned int,int ) ;
 struct tegra_smmu_as* FUNC_4 (struct iommu_domain*) ;

__attribute__((used)) static void FUNC_5(struct iommu_domain *VAR_0, struct device *VAR_1)
{
 struct tegra_smmu_as *VAR_2 = FUNC_4(VAR_0);
 struct device_node *VAR_3 = VAR_1->of_node;
 struct tegra_smmu *VAR_4 = VAR_2->smmu;
 struct of_phandle_args VAR_5;
 unsigned int VAR_6 = 0;

 while (!FUNC_1(VAR_3, "iommus", "#iommu-cells", VAR_6,
        &VAR_5)) {
  unsigned int VAR_7 = VAR_5.args[0];

  if (VAR_5.np != VAR_4->dev->of_node) {
   FUNC_0(VAR_5.np);
   continue;
  }

  FUNC_0(VAR_5.np);

  FUNC_3(VAR_4, VAR_7, VAR_2->id);
  FUNC_2(VAR_4, VAR_2);
  VAR_6++;
 }
}
