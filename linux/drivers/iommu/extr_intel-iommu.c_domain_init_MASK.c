
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_iommu {int node; int cap; int ecap; } ;
struct dmar_domain {int gaw; int agaw; int iommu_coherency; int iommu_snooping; struct dma_pte* pgd; int nid; scalar_t__ iommu_superpage; int iovad; } ;
struct dma_pte {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct intel_iommu*,struct dma_pte*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct dmar_domain*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (unsigned long*,int,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *,int ,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (int,unsigned long*) ;
 int FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct dmar_domain *VAR_8, struct intel_iommu *VAR_9,
         int VAR_10)
{
 int VAR_11, VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 FUNC_11(&VAR_8->iovad, VAR_4, VAR_2);

 VAR_14 = FUNC_12(&VAR_8->iovad,
        VAR_6, VAR_7);
 if (VAR_14)
  return VAR_14;

 FUNC_5(VAR_8);


 if (VAR_10 > FUNC_2(VAR_9->cap))
  VAR_10 = FUNC_2(VAR_9->cap);
 VAR_8->gaw = VAR_10;
 VAR_11 = FUNC_10(VAR_10);
 VAR_12 = FUNC_15(VAR_11);
 VAR_13 = FUNC_3(VAR_9->cap);
 if (!FUNC_14(VAR_12, &VAR_13)) {

  FUNC_13("Hardware doesn't support agaw %d\n", VAR_12);
  VAR_12 = FUNC_8(&VAR_13, 5, VAR_12);
  if (VAR_12 >= 5)
   return -VAR_0;
 }
 VAR_8->agaw = VAR_12;

 if (FUNC_6(VAR_9->ecap))
  VAR_8->iommu_coherency = 1;
 else
  VAR_8->iommu_coherency = 0;

 if (FUNC_7(VAR_9->ecap))
  VAR_8->iommu_snooping = 1;
 else
  VAR_8->iommu_snooping = 0;

 if (VAR_5)
  VAR_8->iommu_superpage = FUNC_9(FUNC_4(VAR_9->cap));
 else
  VAR_8->iommu_superpage = 0;

 VAR_8->nid = VAR_9->node;


 VAR_8->pgd = (struct dma_pte *)FUNC_1(VAR_8->nid);
 if (!VAR_8->pgd)
  return -VAR_1;
 FUNC_0(VAR_9, VAR_8->pgd, VAR_3);
 return 0;
}
