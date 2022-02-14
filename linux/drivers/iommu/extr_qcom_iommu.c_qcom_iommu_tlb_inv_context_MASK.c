
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_iommu_ctx {int asid; } ;
struct iommu_fwspec {unsigned int num_ids; int * ids; } ;


 int VAR_0 ;
 int FUNC_0 (struct qcom_iommu_ctx*,int ,int ) ;
 int FUNC_1 (void*) ;
 struct qcom_iommu_ctx* FUNC_2 (struct iommu_fwspec*,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 struct iommu_fwspec *VAR_2 = VAR_1;
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_ids; VAR_3++) {
  struct qcom_iommu_ctx *VAR_4 = FUNC_2(VAR_2, VAR_2->ids[VAR_3]);
  FUNC_0(VAR_4, VAR_0, VAR_4->asid);
 }

 FUNC_1(VAR_1);
}
