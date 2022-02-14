
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_iommu_dev {int dummy; } ;
struct iommu_fwspec {struct qcom_iommu_dev* iommu_priv; int * ops; } ;


 int VAR_0 ;

__attribute__((used)) static struct qcom_iommu_dev * FUNC_0(struct iommu_fwspec *VAR_1)
{
 if (!VAR_1 || VAR_1->ops != &VAR_0)
  return ((void*)0);
 return VAR_1->iommu_priv;
}
