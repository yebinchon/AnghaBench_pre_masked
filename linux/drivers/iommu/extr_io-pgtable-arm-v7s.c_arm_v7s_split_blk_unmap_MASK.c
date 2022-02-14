
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_iotlb_gather {int dummy; } ;
struct io_pgtable_cfg {int dummy; } ;
struct TYPE_2__ {struct io_pgtable_cfg cfg; } ;
struct arm_v7s_io_pgtable {TYPE_1__ iop; } ;
typedef scalar_t__ arm_v7s_iopte ;


 int FUNC_0 (unsigned long,int) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int) ;
 int VAR_0 ;
 scalar_t__* FUNC_4 (int,int ,struct arm_v7s_io_pgtable*) ;
 int FUNC_5 (scalar_t__*,int,struct arm_v7s_io_pgtable*) ;
 int FUNC_6 (scalar_t__*,scalar_t__,int,struct io_pgtable_cfg*) ;
 size_t FUNC_7 (struct arm_v7s_io_pgtable*,struct iommu_iotlb_gather*,unsigned long,size_t,int,scalar_t__*) ;
 scalar_t__ FUNC_8 (scalar_t__*,scalar_t__*,scalar_t__,struct io_pgtable_cfg*) ;
 scalar_t__ FUNC_9 (int ,int,struct io_pgtable_cfg*) ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;
 int FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (TYPE_1__*,struct iommu_iotlb_gather*,unsigned long,size_t) ;
 scalar_t__* FUNC_13 (scalar_t__,int,struct arm_v7s_io_pgtable*) ;

__attribute__((used)) static size_t FUNC_14(struct arm_v7s_io_pgtable *VAR_1,
          struct iommu_iotlb_gather *VAR_2,
          unsigned long VAR_3, size_t VAR_4,
          arm_v7s_iopte VAR_5,
          arm_v7s_iopte *VAR_6)
{
 struct io_pgtable_cfg *VAR_7 = &VAR_1->iop.cfg;
 arm_v7s_iopte VAR_8, *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_9 = FUNC_4(2, VAR_0, VAR_1);
 if (!VAR_9)
  return 0;

 VAR_13 = FUNC_2(2);
 VAR_12 = VAR_4 >> FUNC_1(2);
 VAR_11 = FUNC_0(VAR_3, 2);

 VAR_8 = FUNC_9(FUNC_11(VAR_5, 1), 2, VAR_7);
 if (VAR_12 > 1)
  VAR_8 = FUNC_10(VAR_8, 2);

 for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10 += VAR_12, VAR_8 += VAR_4) {

  if (VAR_10 == VAR_11)
   continue;

  FUNC_6(&VAR_9[VAR_10], VAR_8, VAR_12, VAR_7);
 }

 VAR_8 = FUNC_8(VAR_9, VAR_6, VAR_5, VAR_7);
 if (VAR_8 != VAR_5) {
  FUNC_5(VAR_9, 2, VAR_1);

  if (!FUNC_3(VAR_8, 1))
   return 0;

  VAR_9 = FUNC_13(VAR_8, 1, VAR_1);
  return FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4, 2, VAR_9);
 }

 FUNC_12(&VAR_1->iop, VAR_2, VAR_3, VAR_4);
 return VAR_4;
}
