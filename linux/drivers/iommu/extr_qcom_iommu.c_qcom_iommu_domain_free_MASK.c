
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_iommu_domain {TYPE_1__* iommu; int pgtbl_ops; } ;
struct iommu_domain {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iommu_domain*) ;
 int FUNC_3 (struct qcom_iommu_domain*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct qcom_iommu_domain* FUNC_6 (struct iommu_domain*) ;

__attribute__((used)) static void FUNC_7(struct iommu_domain *VAR_0)
{
 struct qcom_iommu_domain *VAR_1 = FUNC_6(VAR_0);

 if (FUNC_0(VAR_1->iommu))
  return;

 FUNC_2(VAR_0);






 FUNC_4(VAR_1->iommu->dev);

 FUNC_1(VAR_1->pgtbl_ops);

 FUNC_5(VAR_1->iommu->dev);

 FUNC_3(VAR_1);
}
