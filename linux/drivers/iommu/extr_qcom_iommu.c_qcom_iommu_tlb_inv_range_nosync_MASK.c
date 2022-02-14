
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_iommu_ctx {unsigned long asid; } ;
struct iommu_fwspec {unsigned int num_ids; int * ids; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct qcom_iommu_ctx*,unsigned int,unsigned long) ;
 struct qcom_iommu_ctx* FUNC_1 (struct iommu_fwspec*,int ) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_2, size_t VAR_3,
         size_t VAR_4, bool VAR_5, void *VAR_6)
{
 struct iommu_fwspec *VAR_7 = VAR_6;
 unsigned VAR_8, VAR_9;

 VAR_9 = VAR_5 ? VAR_1 : VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_7->num_ids; VAR_8++) {
  struct qcom_iommu_ctx *VAR_10 = FUNC_1(VAR_7, VAR_7->ids[VAR_8]);
  size_t VAR_11 = VAR_3;

  VAR_2 = (VAR_2 >> 12) << 12;
  VAR_2 |= VAR_10->asid;
  do {
   FUNC_0(VAR_10, VAR_9, VAR_2);
   VAR_2 += VAR_4;
  } while (VAR_11 -= VAR_4);
 }
}
