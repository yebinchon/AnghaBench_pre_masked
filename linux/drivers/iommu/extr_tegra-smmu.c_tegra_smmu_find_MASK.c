
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_smmu {int dummy; } ;
struct tegra_mc {struct tegra_smmu* smmu; } ;
struct platform_device {int dummy; } ;
struct device_node {int dummy; } ;


 struct platform_device* FUNC_0 (struct device_node*) ;
 struct tegra_mc* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static struct tegra_smmu *FUNC_2(struct device_node *VAR_0)
{
 struct platform_device *VAR_1;
 struct tegra_mc *VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2)
  return ((void*)0);

 return VAR_2->smmu;
}
