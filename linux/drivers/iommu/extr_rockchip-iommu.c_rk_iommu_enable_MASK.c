
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_iommu_domain {int dt_dma; } ;
struct rk_iommu {int num_mmu; int clocks; int num_clocks; int * bases; struct iommu_domain* domain; } ;
struct iommu_domain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct rk_iommu*) ;
 int FUNC_4 (struct rk_iommu*) ;
 int FUNC_5 (struct rk_iommu*) ;
 int FUNC_6 (struct rk_iommu*) ;
 int FUNC_7 (int ,int ,int ) ;
 struct rk_iommu_domain* FUNC_8 (struct iommu_domain*) ;

__attribute__((used)) static int FUNC_9(struct rk_iommu *VAR_4)
{
 struct iommu_domain *VAR_5 = VAR_4->domain;
 struct rk_iommu_domain *VAR_6 = FUNC_8(VAR_5);
 int VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_4->num_clocks, VAR_4->clocks);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7)
  goto out_disable_clocks;

 VAR_7 = FUNC_6(VAR_4);
 if (VAR_7)
  goto out_disable_stall;

 for (VAR_8 = 0; VAR_8 < VAR_4->num_mmu; VAR_8++) {
  FUNC_7(VAR_4->bases[VAR_8], VAR_1,
          VAR_6->dt_dma);
  FUNC_2(VAR_4->bases[VAR_8], VAR_0);
  FUNC_7(VAR_4->bases[VAR_8], VAR_2, VAR_3);
 }

 VAR_7 = FUNC_4(VAR_4);

out_disable_stall:
 FUNC_3(VAR_4);
out_disable_clocks:
 FUNC_0(VAR_4->num_clocks, VAR_4->clocks);
 return VAR_7;
}
