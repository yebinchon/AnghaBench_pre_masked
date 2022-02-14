
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_iotlb_gather {int dummy; } ;
struct TYPE_2__ {int quirks; } ;
struct io_pgtable {int fmt; TYPE_1__ cfg; } ;
struct arm_lpae_io_pgtable {struct io_pgtable iop; } ;
typedef int arm_lpae_iopte ;


 size_t FUNC_0 (int,struct arm_lpae_io_pgtable*) ;
 int FUNC_1 (struct arm_lpae_io_pgtable*) ;
 int FUNC_2 (unsigned long,int,struct arm_lpae_io_pgtable*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct arm_lpae_io_pgtable*,int,int *) ;
 int FUNC_6 (int *,int ,TYPE_1__*) ;
 size_t FUNC_7 (struct arm_lpae_io_pgtable*,struct iommu_iotlb_gather*,unsigned long,size_t,int ,int,int *) ;
 int FUNC_8 (struct io_pgtable*,struct iommu_iotlb_gather*,unsigned long,size_t) ;
 int FUNC_9 (struct io_pgtable*,unsigned long,size_t,int ) ;
 int * FUNC_10 (int ,struct arm_lpae_io_pgtable*) ;
 scalar_t__ FUNC_11 (int ,int,int ) ;
 int FUNC_12 () ;

__attribute__((used)) static size_t FUNC_13(struct arm_lpae_io_pgtable *VAR_2,
          struct iommu_iotlb_gather *VAR_3,
          unsigned long VAR_4, size_t VAR_5, int VAR_6,
          arm_lpae_iopte *VAR_7)
{
 arm_lpae_iopte VAR_8;
 struct io_pgtable *VAR_9 = &VAR_2->iop;


 if (FUNC_4(VAR_6 == VAR_0))
  return 0;

 VAR_7 += FUNC_2(VAR_4, VAR_6, VAR_2);
 VAR_8 = FUNC_3(*VAR_7);
 if (FUNC_4(!VAR_8))
  return 0;


 if (VAR_5 == FUNC_0(VAR_6, VAR_2)) {
  FUNC_6(VAR_7, 0, &VAR_9->cfg);

  if (!FUNC_11(VAR_8, VAR_6, VAR_9->fmt)) {

   FUNC_9(VAR_9, VAR_4, VAR_5,
        FUNC_1(VAR_2));
   VAR_7 = FUNC_10(VAR_8, VAR_2);
   FUNC_5(VAR_2, VAR_6 + 1, VAR_7);
  } else if (VAR_9->cfg.quirks & VAR_1) {





   FUNC_12();
  } else {
   FUNC_8(VAR_9, VAR_3, VAR_4, VAR_5);
  }

  return VAR_5;
 } else if (FUNC_11(VAR_8, VAR_6, VAR_9->fmt)) {




  return FUNC_7(VAR_2, VAR_3, VAR_4, VAR_5, VAR_8,
      VAR_6 + 1, VAR_7);
 }


 VAR_7 = FUNC_10(VAR_8, VAR_2);
 return FUNC_13(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6 + 1, VAR_7);
}
