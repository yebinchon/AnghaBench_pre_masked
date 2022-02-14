
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct pasid_entry {int dummy; } ;
struct intel_iommu {int agaw; size_t seq_id; int cap; int ecap; int name; } ;
struct dmar_domain {int agaw; int * iommu_did; struct dma_pte* pgd; } ;
struct dma_pte {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pasid_entry*,int) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct dma_pte*) ;
 int FUNC_4 (struct dma_pte*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct pasid_entry* FUNC_8 (struct device*,int) ;
 int FUNC_9 (struct intel_iommu*) ;
 int FUNC_10 (struct intel_iommu*,int ,int) ;
 int FUNC_11 (struct intel_iommu*,int ,int) ;
 int FUNC_12 (struct pasid_entry*) ;
 int FUNC_13 (struct pasid_entry*,int) ;
 int FUNC_14 (struct pasid_entry*,int ) ;
 int FUNC_15 (struct pasid_entry*) ;
 int FUNC_16 (struct pasid_entry*,int) ;
 int FUNC_17 (struct pasid_entry*) ;
 int FUNC_18 (struct pasid_entry*,int ) ;
 int FUNC_19 (struct pasid_entry*) ;
 int FUNC_20 (struct pasid_entry*,int) ;
 struct dma_pte* FUNC_21 (int ) ;
 int FUNC_22 (char*,int ) ;
 int FUNC_23 (struct dma_pte*) ;

int FUNC_24(struct intel_iommu *VAR_2,
       struct dmar_domain *VAR_3,
       struct device *VAR_4, int VAR_5)
{
 struct pasid_entry *VAR_6;
 struct dma_pte *VAR_7;
 u64 VAR_8;
 int VAR_9;
 u16 VAR_10;





 if (!FUNC_6(VAR_2->ecap)) {
  FUNC_22("No second level translation support on %s\n",
         VAR_2->name);
  return -VAR_0;
 }





 VAR_7 = VAR_3->pgd;
 for (VAR_9 = VAR_3->agaw; VAR_9 > VAR_2->agaw; VAR_9--) {
  VAR_7 = FUNC_21(FUNC_3(VAR_7));
  if (!FUNC_4(VAR_7)) {
   FUNC_2(VAR_4, "Invalid domain page table\n");
   return -VAR_0;
  }
 }

 VAR_8 = FUNC_23(VAR_7);
 VAR_10 = VAR_3->iommu_did[VAR_2->seq_id];

 VAR_6 = FUNC_8(VAR_4, VAR_5);
 if (!VAR_6) {
  FUNC_2(VAR_4, "Failed to get pasid entry of PASID %d\n", VAR_5);
  return -VAR_1;
 }

 FUNC_12(VAR_6);
 FUNC_14(VAR_6, VAR_10);
 FUNC_18(VAR_6, VAR_8);
 FUNC_13(VAR_6, VAR_9);
 FUNC_20(VAR_6, 2);
 FUNC_15(VAR_6);
 FUNC_16(VAR_6, !!FUNC_7(VAR_2->ecap));





 FUNC_19(VAR_6);
 FUNC_17(VAR_6);

 if (!FUNC_5(VAR_2->ecap))
  FUNC_1(VAR_6, sizeof(*VAR_6));

 if (FUNC_0(VAR_2->cap)) {
  FUNC_11(VAR_2, VAR_10, VAR_5);
  FUNC_10(VAR_2, VAR_10, VAR_5);
 } else {
  FUNC_9(VAR_2);
 }

 return 0;
}
