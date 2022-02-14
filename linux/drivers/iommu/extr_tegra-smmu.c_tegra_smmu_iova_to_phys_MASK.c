
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct tegra_smmu_as {TYPE_1__* smmu; } ;
struct iommu_domain {int dummy; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {unsigned long pfn_mask; } ;


 int FUNC_0 (unsigned long) ;
 unsigned long* FUNC_1 (struct tegra_smmu_as*,int ,int *) ;
 struct tegra_smmu_as* FUNC_2 (struct iommu_domain*) ;

__attribute__((used)) static phys_addr_t FUNC_3(struct iommu_domain *VAR_0,
        dma_addr_t VAR_1)
{
 struct tegra_smmu_as *VAR_2 = FUNC_2(VAR_0);
 unsigned long VAR_3;
 dma_addr_t VAR_4;
 u32 *VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_1, &VAR_4);
 if (!VAR_5 || !*VAR_5)
  return 0;

 VAR_3 = *VAR_5 & VAR_2->smmu->pfn_mask;

 return FUNC_0(VAR_3);
}
