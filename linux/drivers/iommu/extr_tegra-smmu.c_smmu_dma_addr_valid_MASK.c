
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_smmu {int pfn_mask; } ;
typedef int dma_addr_t ;



__attribute__((used)) static bool FUNC_0(struct tegra_smmu *VAR_0, dma_addr_t VAR_1)
{
 VAR_1 >>= 12;
 return (VAR_1 & VAR_0->pfn_mask) == VAR_1;
}
