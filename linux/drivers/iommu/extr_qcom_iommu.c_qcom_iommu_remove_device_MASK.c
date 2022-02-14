
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_iommu_dev {int iommu; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (int *,struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 struct qcom_iommu_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct qcom_iommu_dev *VAR_1 = FUNC_4(FUNC_0(VAR_0));

 if (!VAR_1)
  return;

 FUNC_1(&VAR_1->iommu, VAR_0);
 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
}
