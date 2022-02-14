
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_iotlb_gather {int dummy; } ;
struct TYPE_2__ {int quirks; } ;
struct io_pgtable {TYPE_1__ cfg; } ;
struct arm_v7s_io_pgtable {int split_lock; struct io_pgtable iop; } ;
typedef int arm_v7s_iopte ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long,int) ;
 size_t FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,int,struct arm_v7s_io_pgtable*) ;
 int FUNC_8 (int *,int ,int,TYPE_1__*) ;
 scalar_t__ FUNC_9 (int ,int) ;
 size_t FUNC_10 (struct arm_v7s_io_pgtable*,struct iommu_iotlb_gather*,unsigned long,size_t,int ,int *) ;
 int FUNC_11 (struct arm_v7s_io_pgtable*,unsigned long,int,int,int *) ;
 int FUNC_12 (struct io_pgtable*,struct iommu_iotlb_gather*,unsigned long,size_t) ;
 int FUNC_13 (struct io_pgtable*,unsigned long,size_t,size_t) ;
 int * FUNC_14 (int ,int,struct arm_v7s_io_pgtable*) ;
 int FUNC_15 () ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;

__attribute__((used)) static size_t FUNC_18(struct arm_v7s_io_pgtable *VAR_2,
         struct iommu_iotlb_gather *VAR_3,
         unsigned long VAR_4, size_t VAR_5, int VAR_6,
         arm_v7s_iopte *VAR_7)
{
 arm_v7s_iopte VAR_8[VAR_0];
 struct io_pgtable *VAR_9 = &VAR_2->iop;
 int VAR_10, VAR_11 = 0, VAR_12 = VAR_5 >> FUNC_2(VAR_6);


 if (FUNC_6(VAR_6 > 2))
  return 0;

 VAR_10 = FUNC_1(VAR_4, VAR_6);
 VAR_7 += VAR_10;
 do {
  VAR_8[VAR_11] = FUNC_5(VAR_7[VAR_11]);
  if (FUNC_6(!FUNC_4(VAR_8[VAR_11])))
   return 0;
 } while (++VAR_11 < VAR_12);
 if (VAR_12 <= 1 && FUNC_9(VAR_8[0], VAR_6)) {
  unsigned long VAR_13;

  FUNC_16(&VAR_2->split_lock, VAR_13);
  VAR_8[0] = FUNC_11(VAR_2, VAR_4, VAR_10, VAR_6, VAR_7);
  FUNC_17(&VAR_2->split_lock, VAR_13);
 }


 if (VAR_12) {
  size_t VAR_14 = FUNC_0(VAR_6);

  FUNC_8(VAR_7, 0, VAR_12, &VAR_9->cfg);

  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
   if (FUNC_3(VAR_8[VAR_11], VAR_6)) {

    FUNC_13(VAR_9, VAR_4, VAR_14,
      FUNC_0(VAR_6 + 1));
    VAR_7 = FUNC_14(VAR_8[VAR_11], VAR_6, VAR_2);
    FUNC_7(VAR_7, VAR_6 + 1, VAR_2);
   } else if (VAR_9->cfg.quirks & VAR_1) {





    FUNC_15();
   } else {
    FUNC_12(VAR_9, VAR_3, VAR_4, VAR_14);
   }
   VAR_4 += VAR_14;
  }
  return VAR_5;
 } else if (VAR_6 == 1 && !FUNC_3(VAR_8[0], VAR_6)) {




  return FUNC_10(VAR_2, VAR_3, VAR_4, VAR_5, VAR_8[0],
            VAR_7);
 }


 VAR_7 = FUNC_14(VAR_8[0], VAR_6, VAR_2);
 return FUNC_18(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6 + 1, VAR_7);
}
