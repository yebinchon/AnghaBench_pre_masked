
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_iotlb_gather {int dummy; } ;
struct io_pgtable_cfg {int dummy; } ;
struct TYPE_2__ {struct io_pgtable_cfg cfg; } ;
struct arm_lpae_io_pgtable {TYPE_1__ iop; } ;
typedef int pte ;
typedef size_t phys_addr_t ;
typedef int arm_lpae_iopte ;


 size_t FUNC_0 (int,struct arm_lpae_io_pgtable*) ;
 size_t FUNC_1 (struct arm_lpae_io_pgtable*) ;
 int FUNC_2 (unsigned long,int,struct arm_lpae_io_pgtable*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (size_t,int ,struct io_pgtable_cfg*) ;
 int FUNC_5 (int *,size_t,struct io_pgtable_cfg*) ;
 int FUNC_6 (struct arm_lpae_io_pgtable*,size_t,int ,int,int *) ;
 size_t FUNC_7 (struct arm_lpae_io_pgtable*,struct iommu_iotlb_gather*,unsigned long,size_t,int,int *) ;
 int FUNC_8 (int *,int *,int ,struct io_pgtable_cfg*) ;
 int FUNC_9 (TYPE_1__*,struct iommu_iotlb_gather*,unsigned long,size_t) ;
 int * FUNC_10 (int ,struct arm_lpae_io_pgtable*) ;
 int FUNC_11 (int ) ;
 size_t FUNC_12 (int ,struct arm_lpae_io_pgtable*) ;
 scalar_t__ FUNC_13 (int ,int) ;

__attribute__((used)) static size_t FUNC_14(struct arm_lpae_io_pgtable *VAR_3,
           struct iommu_iotlb_gather *VAR_4,
           unsigned long VAR_5, size_t VAR_6,
           arm_lpae_iopte VAR_7, int VAR_8,
           arm_lpae_iopte *VAR_9)
{
 struct io_pgtable_cfg *VAR_10 = &VAR_3->iop.cfg;
 arm_lpae_iopte VAR_11, *VAR_12;
 phys_addr_t VAR_13;
 size_t VAR_14 = FUNC_1(VAR_3);
 size_t VAR_15 = FUNC_0(VAR_8, VAR_3);
 int VAR_16, VAR_17 = -1;

 if (FUNC_3(VAR_8 == VAR_0))
  return 0;

 VAR_12 = FUNC_4(VAR_14, VAR_2, VAR_10);
 if (!VAR_12)
  return 0;

 if (VAR_6 == VAR_15)
  VAR_17 = FUNC_2(VAR_5, VAR_8, VAR_3);

 VAR_13 = FUNC_12(VAR_7, VAR_3);
 VAR_11 = FUNC_11(VAR_7);

 for (VAR_16 = 0; VAR_16 < VAR_14 / sizeof(VAR_11); VAR_16++, VAR_13 += VAR_15) {

  if (VAR_16 == VAR_17)
   continue;

  FUNC_6(VAR_3, VAR_13, VAR_11, VAR_8, &VAR_12[VAR_16]);
 }

 VAR_11 = FUNC_8(VAR_12, VAR_9, VAR_7, VAR_10);
 if (VAR_11 != VAR_7) {
  FUNC_5(VAR_12, VAR_14, VAR_10);





  if (FUNC_13(VAR_11, VAR_8 - 1) != VAR_1)
   return 0;

  VAR_12 = FUNC_10(VAR_11, VAR_3);
 } else if (VAR_17 >= 0) {
  FUNC_9(&VAR_3->iop, VAR_4, VAR_5, VAR_6);
  return VAR_6;
 }

 return FUNC_7(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8, VAR_12);
}
