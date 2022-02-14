
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_iommu_data {int iommu; } ;
struct iommu_group {int dummy; } ;
struct iommu_fwspec {struct mtk_iommu_data* iommu_priv; int * ops; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iommu_group*) ;
 int FUNC_1 (struct iommu_group*) ;
 struct iommu_fwspec* FUNC_2 (struct device*) ;
 int FUNC_3 (int *,struct device*) ;
 struct iommu_group* FUNC_4 (struct device*) ;
 int FUNC_5 (struct iommu_group*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2)
{
 struct iommu_fwspec *VAR_3 = FUNC_2(VAR_2);
 struct mtk_iommu_data *VAR_4;
 struct iommu_group *VAR_5;

 if (!VAR_3 || VAR_3->ops != &VAR_1)
  return -VAR_0;

 VAR_4 = VAR_3->iommu_priv;
 FUNC_3(&VAR_4->iommu, VAR_2);

 VAR_5 = FUNC_4(VAR_2);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 FUNC_5(VAR_5);
 return 0;
}
