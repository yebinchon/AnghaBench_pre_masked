
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct iommu_ops* ops; } ;
struct tegra_smmu {TYPE_1__ iommu; } ;
struct of_phandle_args {int dummy; } ;
struct iommu_ops {int (* of_xlate ) (struct device*,struct of_phandle_args*) ;} ;
struct device {TYPE_2__* of_node; } ;
struct TYPE_4__ {int fwnode; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int *,struct iommu_ops const*) ;
 int FUNC_3 (struct device*,struct of_phandle_args*) ;

__attribute__((used)) static int FUNC_4(struct tegra_smmu *VAR_0, struct device *VAR_1,
    struct of_phandle_args *VAR_2)
{
 const struct iommu_ops *VAR_3 = VAR_0->iommu.ops;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, &VAR_1->of_node->fwnode, VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(VAR_1, "failed to initialize fwspec: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = VAR_3->of_xlate(VAR_1, VAR_2);
 if (VAR_4 < 0) {
  FUNC_0(VAR_1, "failed to parse SW group ID: %d\n", VAR_4);
  FUNC_1(VAR_1);
  return VAR_4;
 }

 return 0;
}
