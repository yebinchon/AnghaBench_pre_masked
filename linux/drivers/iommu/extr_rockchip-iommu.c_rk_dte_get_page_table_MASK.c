
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct rk_iommu_domain {size_t* dt; scalar_t__ dt_dma; int dt_lock; } ;
typedef int phys_addr_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,size_t*,int ,int ) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (size_t) ;
 int FUNC_9 (size_t) ;
 size_t FUNC_10 (scalar_t__) ;
 size_t FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct rk_iommu_domain*,scalar_t__,int) ;

__attribute__((used)) static u32 *FUNC_13(struct rk_iommu_domain *VAR_7,
      dma_addr_t VAR_8)
{
 u32 *VAR_9, *VAR_10;
 u32 VAR_11, VAR_12;
 phys_addr_t VAR_13;
 dma_addr_t VAR_14;

 FUNC_1(&VAR_7->dt_lock);

 VAR_11 = FUNC_10(VAR_8);
 VAR_10 = &VAR_7->dt[VAR_11];
 VAR_12 = *VAR_10;
 if (FUNC_8(VAR_12))
  goto done;

 VAR_9 = (u32 *)FUNC_6(VAR_2 | VAR_3);
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 VAR_14 = FUNC_3(VAR_6, VAR_9, VAR_5, VAR_0);
 if (FUNC_4(VAR_6, VAR_14)) {
  FUNC_2(VAR_6, "DMA mapping error while allocating page table\n");
  FUNC_5((unsigned long)VAR_9);
  return FUNC_0(-VAR_1);
 }

 VAR_12 = FUNC_11(VAR_14);
 *VAR_10 = VAR_12;

 FUNC_12(VAR_7, VAR_14, VAR_4);
 FUNC_12(VAR_7,
         VAR_7->dt_dma + VAR_11 * sizeof(u32), 1);
done:
 VAR_13 = FUNC_9(VAR_12);
 return (u32 *)FUNC_7(VAR_13);
}
