
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_iommu_domain {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct rk_iommu_domain*,scalar_t__,size_t) ;

__attribute__((used)) static void FUNC_1(struct rk_iommu_domain *VAR_1,
      dma_addr_t VAR_2, size_t VAR_3)
{
 FUNC_0(VAR_1, VAR_2, VAR_0);
 if (VAR_3 > VAR_0)
  FUNC_0(VAR_1, VAR_2 + VAR_3 - VAR_0,
     VAR_0);
}
