
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct rk_iommu_domain {size_t* dt; int dt_lock; } ;
struct iommu_domain {int dummy; } ;
typedef int phys_addr_t ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ FUNC_0 (size_t*) ;
 int FUNC_1 (size_t*) ;
 size_t* FUNC_2 (struct rk_iommu_domain*,scalar_t__) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (struct rk_iommu_domain*,size_t*,scalar_t__,scalar_t__,int ,size_t,int) ;
 size_t FUNC_5 (scalar_t__) ;
 size_t FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct rk_iommu_domain* FUNC_9 (struct iommu_domain*) ;

__attribute__((used)) static int FUNC_10(struct iommu_domain *VAR_0, unsigned long VAR_1,
   phys_addr_t VAR_2, size_t VAR_3, int VAR_4)
{
 struct rk_iommu_domain *VAR_5 = FUNC_9(VAR_0);
 unsigned long VAR_6;
 dma_addr_t VAR_7, VAR_8 = (dma_addr_t)VAR_1;
 u32 *VAR_9, *VAR_10;
 u32 VAR_11, VAR_12;
 int VAR_13;

 FUNC_7(&VAR_5->dt_lock, VAR_6);
 VAR_9 = FUNC_2(VAR_5, VAR_8);
 if (FUNC_0(VAR_9)) {
  FUNC_8(&VAR_5->dt_lock, VAR_6);
  return FUNC_1(VAR_9);
 }

 VAR_11 = VAR_5->dt[FUNC_5(VAR_8)];
 VAR_12 = FUNC_6(VAR_8);
 VAR_10 = &VAR_9[VAR_12];
 VAR_7 = FUNC_3(VAR_11) + VAR_12 * sizeof(u32);
 VAR_13 = FUNC_4(VAR_5, VAR_10, VAR_7, VAR_8,
    VAR_2, VAR_3, VAR_4);

 FUNC_8(&VAR_5->dt_lock, VAR_6);

 return VAR_13;
}
