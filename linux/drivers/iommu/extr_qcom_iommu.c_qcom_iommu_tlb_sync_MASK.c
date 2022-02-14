
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_iommu_ctx {int dev; scalar_t__ base; } ;
struct iommu_fwspec {unsigned int num_ids; int * ids; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct qcom_iommu_ctx*,int ,int ) ;
 unsigned int FUNC_2 (scalar_t__,unsigned int,int,int ,int) ;
 struct qcom_iommu_ctx* FUNC_3 (struct iommu_fwspec*,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_2)
{
 struct iommu_fwspec *VAR_3 = VAR_2;
 unsigned VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_ids; VAR_4++) {
  struct qcom_iommu_ctx *VAR_5 = FUNC_3(VAR_3, VAR_3->ids[VAR_4]);
  unsigned int VAR_6, VAR_7;

  FUNC_1(VAR_5, VAR_1, 0);

  VAR_7 = FUNC_2(VAR_5->base + VAR_0, VAR_6,
      (VAR_6 & 0x1) == 0, 0, 5000000);
  if (VAR_7)
   FUNC_0(VAR_5->dev, "timeout waiting for TLB SYNC\n");
 }
}
