
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rk_iommu_domain {int dt_lock; int * dt; } ;
struct iommu_domain {int dummy; } ;
typedef scalar_t__ phys_addr_t ;
typedef int dma_addr_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 struct rk_iommu_domain* FUNC_10 (struct iommu_domain*) ;

__attribute__((used)) static phys_addr_t FUNC_11(struct iommu_domain *VAR_0,
      dma_addr_t VAR_1)
{
 struct rk_iommu_domain *VAR_2 = FUNC_10(VAR_0);
 unsigned long VAR_3;
 phys_addr_t VAR_4, VAR_5 = 0;
 u32 VAR_6, VAR_7;
 u32 *VAR_8;

 FUNC_8(&VAR_2->dt_lock, VAR_3);

 VAR_6 = VAR_2->dt[FUNC_3(VAR_1)];
 if (!FUNC_1(VAR_6))
  goto out;

 VAR_4 = FUNC_2(VAR_6);
 VAR_8 = (u32 *)FUNC_0(VAR_4);
 VAR_7 = VAR_8[FUNC_5(VAR_1)];
 if (!FUNC_6(VAR_7))
  goto out;

 VAR_5 = FUNC_7(VAR_7) + FUNC_4(VAR_1);
out:
 FUNC_9(&VAR_2->dt_lock, VAR_3);

 return VAR_5;
}
