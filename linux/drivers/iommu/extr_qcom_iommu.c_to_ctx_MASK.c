
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_iommu_dev {struct qcom_iommu_ctx** ctxs; } ;
struct qcom_iommu_ctx {int dummy; } ;
struct iommu_fwspec {int dummy; } ;


 struct qcom_iommu_dev* FUNC_0 (struct iommu_fwspec*) ;

__attribute__((used)) static struct qcom_iommu_ctx * FUNC_1(struct iommu_fwspec *VAR_0, unsigned VAR_1)
{
 struct qcom_iommu_dev *VAR_2 = FUNC_0(VAR_0);
 if (!VAR_2)
  return ((void*)0);
 return VAR_2->ctxs[VAR_1 - 1];
}
