
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rk_iommu_domain {int dt_lock; int * dt; } ;
struct iommu_iotlb_gather {int dummy; } ;
struct iommu_domain {int dummy; } ;
typedef scalar_t__ phys_addr_t ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 size_t FUNC_3 (struct rk_iommu_domain*,int *,scalar_t__,size_t) ;
 int FUNC_4 (struct rk_iommu_domain*,scalar_t__,size_t) ;
 size_t FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct rk_iommu_domain* FUNC_9 (struct iommu_domain*) ;

__attribute__((used)) static size_t FUNC_10(struct iommu_domain *VAR_0, unsigned long VAR_1,
        size_t VAR_2, struct iommu_iotlb_gather *VAR_3)
{
 struct rk_iommu_domain *VAR_4 = FUNC_9(VAR_0);
 unsigned long VAR_5;
 dma_addr_t VAR_6, VAR_7 = (dma_addr_t)VAR_1;
 phys_addr_t VAR_8;
 u32 VAR_9;
 u32 *VAR_10;
 size_t VAR_11;

 FUNC_7(&VAR_4->dt_lock, VAR_5);
 VAR_9 = VAR_4->dt[FUNC_5(VAR_7)];

 if (!FUNC_1(VAR_9)) {
  FUNC_8(&VAR_4->dt_lock, VAR_5);
  return 0;
 }

 VAR_8 = FUNC_2(VAR_9);
 VAR_10 = (u32 *)FUNC_0(VAR_8) + FUNC_6(VAR_7);
 VAR_6 = VAR_8 + FUNC_6(VAR_7) * sizeof(u32);
 VAR_11 = FUNC_3(VAR_4, VAR_10, VAR_6, VAR_2);

 FUNC_8(&VAR_4->dt_lock, VAR_5);


 FUNC_4(VAR_4, VAR_7, VAR_11);

 return VAR_11;
}
