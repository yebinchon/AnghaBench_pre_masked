
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_iommu_domain {int * iommu; } ;
struct qcom_iommu_dev {int dev; } ;
struct qcom_iommu_ctx {int * domain; } ;
struct iommu_fwspec {unsigned int num_ids; int * ids; } ;
struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct iommu_fwspec* FUNC_0 (struct device*) ;
 int FUNC_1 (struct qcom_iommu_ctx*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct qcom_iommu_ctx* FUNC_4 (struct iommu_fwspec*,int ) ;
 struct qcom_iommu_dev* FUNC_5 (struct iommu_fwspec*) ;
 struct qcom_iommu_domain* FUNC_6 (struct iommu_domain*) ;

__attribute__((used)) static void FUNC_7(struct iommu_domain *VAR_1, struct device *VAR_2)
{
 struct iommu_fwspec *VAR_3 = FUNC_0(VAR_2);
 struct qcom_iommu_dev *VAR_4 = FUNC_5(VAR_3);
 struct qcom_iommu_domain *VAR_5 = FUNC_6(VAR_1);
 unsigned VAR_6;

 if (!VAR_5->iommu)
  return;

 FUNC_2(VAR_4->dev);
 for (VAR_6 = 0; VAR_6 < VAR_3->num_ids; VAR_6++) {
  struct qcom_iommu_ctx *VAR_7 = FUNC_4(VAR_3, VAR_3->ids[VAR_6]);


  FUNC_1(VAR_7, VAR_0, 0);

  VAR_7->domain = ((void*)0);
 }
 FUNC_3(VAR_4->dev);

 VAR_5->iommu = ((void*)0);
}
