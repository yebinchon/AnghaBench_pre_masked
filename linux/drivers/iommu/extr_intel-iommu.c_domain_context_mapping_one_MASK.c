
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef scalar_t__ u16 ;
struct pasid_table {struct dma_pte* table; } ;
struct TYPE_2__ {int (* flush_iotlb ) (struct intel_iommu*,scalar_t__,int ,int ,int ) ;int (* flush_context ) (struct intel_iommu*,scalar_t__,scalar_t__,int ,int ) ;} ;
struct intel_iommu {size_t seq_id; int agaw; int msagaw; int lock; TYPE_1__ flush; int cap; } ;
struct dmar_domain {scalar_t__* iommu_did; int agaw; struct dma_pte* pgd; } ;
struct dma_pte {int dummy; } ;
struct device_domain_info {scalar_t__ ats_supported; scalar_t__ pri_supported; } ;
struct context_entry {int lo; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct context_entry*) ;
 scalar_t__ FUNC_7 (struct context_entry*) ;
 scalar_t__ FUNC_8 (struct context_entry*) ;
 unsigned long FUNC_9 (struct pasid_table*) ;
 int FUNC_10 (unsigned long) ;
 scalar_t__ FUNC_11 (struct context_entry*) ;
 int FUNC_12 (struct context_entry*,scalar_t__) ;
 int FUNC_13 (struct context_entry*,int) ;
 int FUNC_14 (struct context_entry*,scalar_t__) ;
 int FUNC_15 (struct context_entry*) ;
 int FUNC_16 (struct context_entry*) ;
 int FUNC_17 (struct context_entry*) ;
 int FUNC_18 (struct context_entry*) ;
 int FUNC_19 (struct context_entry*,int ) ;
 int FUNC_20 (struct context_entry*,int) ;
 int VAR_8 ;
 int FUNC_21 (struct dma_pte*) ;
 int FUNC_22 (struct dma_pte*) ;
 int FUNC_23 (struct dmar_domain*,struct context_entry*,int) ;
 scalar_t__ FUNC_24 (struct dmar_domain*) ;
 scalar_t__ VAR_9 ;
 struct context_entry* FUNC_25 (struct intel_iommu*,scalar_t__,scalar_t__,int) ;
 int FUNC_26 (struct device_domain_info*) ;
 int FUNC_27 (struct intel_iommu*) ;
 struct device_domain_info* FUNC_28 (struct dmar_domain*,struct intel_iommu*,scalar_t__,scalar_t__) ;
 struct dma_pte* FUNC_29 (int ) ;
 int FUNC_30 (char*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_31 (struct intel_iommu*) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *,unsigned long) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *,unsigned long) ;
 int FUNC_36 (struct intel_iommu*,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_37 (struct intel_iommu*,scalar_t__,int ,int ,int ) ;
 int FUNC_38 (struct intel_iommu*,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_39 (struct intel_iommu*,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_40 (struct dma_pte*) ;

__attribute__((used)) static int FUNC_41(struct dmar_domain *VAR_10,
          struct intel_iommu *VAR_11,
          struct pasid_table *VAR_12,
          u8 VAR_13, u8 VAR_14)
{
 u16 VAR_15 = VAR_10->iommu_did[VAR_11->seq_id];
 int VAR_16 = VAR_1;
 struct device_domain_info *VAR_17 = ((void*)0);
 struct context_entry *VAR_18;
 unsigned long VAR_19;
 int VAR_20;

 FUNC_3(VAR_15 == 0);

 if (VAR_9 && FUNC_24(VAR_10))
  VAR_16 = VAR_2;

 FUNC_30("Set context mapping for %02x:%02x.%d\n",
  VAR_13, FUNC_2(VAR_14), FUNC_1(VAR_14));

 FUNC_0(!VAR_10->pgd);

 FUNC_33(&VAR_8, VAR_19);
 FUNC_32(&VAR_11->lock);

 VAR_20 = -VAR_6;
 VAR_18 = FUNC_25(VAR_11, VAR_13, VAR_14, 1);
 if (!VAR_18)
  goto out_unlock;

 VAR_20 = 0;
 if (FUNC_11(VAR_18))
  goto out_unlock;
 if (FUNC_7(VAR_18)) {
  u16 VAR_21 = FUNC_8(VAR_18);

  if (VAR_21 < FUNC_5(VAR_11->cap)) {
   VAR_11->flush.flush_context(VAR_11, VAR_21,
         (((u16)VAR_13) << 8) | VAR_14,
         VAR_4,
         VAR_3);
   VAR_11->flush.flush_iotlb(VAR_11, VAR_21, 0, 0,
       VAR_5);
  }
 }

 FUNC_6(VAR_18);

 if (FUNC_31(VAR_11)) {
  unsigned long VAR_22;

  FUNC_3(!VAR_12);


  VAR_22 = FUNC_9(VAR_12);
  VAR_18->lo = (u64)FUNC_40(VAR_12->table) |
    FUNC_10(VAR_22);


  FUNC_19(VAR_18, VAR_7);





  VAR_17 = FUNC_28(VAR_10, VAR_11, VAR_13, VAR_14);
  if (VAR_17 && VAR_17->ats_supported)
   FUNC_17(VAR_18);
  if (VAR_17 && VAR_17->pri_supported)
   FUNC_18(VAR_18);
 } else {
  struct dma_pte *VAR_23 = VAR_10->pgd;
  int VAR_24;

  FUNC_14(VAR_18, VAR_15);

  if (VAR_16 != VAR_2) {




   for (VAR_24 = VAR_10->agaw; VAR_24 > VAR_11->agaw; VAR_24--) {
    VAR_20 = -VAR_6;
    VAR_23 = FUNC_29(FUNC_21(VAR_23));
    if (!FUNC_22(VAR_23))
     goto out_unlock;
   }

   VAR_17 = FUNC_28(VAR_10, VAR_11, VAR_13, VAR_14);
   if (VAR_17 && VAR_17->ats_supported)
    VAR_16 = VAR_0;
   else
    VAR_16 = VAR_1;

   FUNC_12(VAR_18, FUNC_40(VAR_23));
   FUNC_13(VAR_18, VAR_24);
  } else {





   FUNC_13(VAR_18, VAR_11->msagaw);
  }

  FUNC_20(VAR_18, VAR_16);
 }

 FUNC_15(VAR_18);
 FUNC_16(VAR_18);
 FUNC_23(VAR_10, VAR_18, sizeof(*VAR_18));







 if (FUNC_4(VAR_11->cap)) {
  VAR_11->flush.flush_context(VAR_11, 0,
        (((u16)VAR_13) << 8) | VAR_14,
        VAR_4,
        VAR_3);
  VAR_11->flush.flush_iotlb(VAR_11, VAR_15, 0, 0, VAR_5);
 } else {
  FUNC_27(VAR_11);
 }
 FUNC_26(VAR_17);

 VAR_20 = 0;

out_unlock:
 FUNC_34(&VAR_11->lock);
 FUNC_35(&VAR_8, VAR_19);

 return VAR_20;
}
