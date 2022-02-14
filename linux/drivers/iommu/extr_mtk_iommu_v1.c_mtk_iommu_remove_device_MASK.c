
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_iommu_data {int iommu; } ;
struct iommu_fwspec {struct mtk_iommu_data* iommu_priv; int * ops; } ;
struct device {int dummy; } ;


 struct iommu_fwspec* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1)
{
 struct iommu_fwspec *VAR_2 = FUNC_0(VAR_1);
 struct mtk_iommu_data *VAR_3;

 if (!VAR_2 || VAR_2->ops != &VAR_0)
  return;

 VAR_3 = VAR_2->iommu_priv;
 FUNC_1(&VAR_3->iommu, VAR_1);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
}
