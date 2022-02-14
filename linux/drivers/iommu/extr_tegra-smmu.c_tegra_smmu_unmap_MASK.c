
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_smmu_as {int dummy; } ;
struct iommu_iotlb_gather {int dummy; } ;
struct iommu_domain {int dummy; } ;
typedef int dma_addr_t ;


 int * FUNC_0 (struct tegra_smmu_as*,unsigned long,int *) ;
 int FUNC_1 (struct tegra_smmu_as*,unsigned long) ;
 int FUNC_2 (struct tegra_smmu_as*,unsigned long,int *,int ,int ) ;
 struct tegra_smmu_as* FUNC_3 (struct iommu_domain*) ;

__attribute__((used)) static size_t FUNC_4(struct iommu_domain *VAR_0, unsigned long VAR_1,
          size_t VAR_2, struct iommu_iotlb_gather *VAR_3)
{
 struct tegra_smmu_as *VAR_4 = FUNC_3(VAR_0);
 dma_addr_t VAR_5;
 u32 *VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_1, &VAR_5);
 if (!VAR_6 || !*VAR_6)
  return 0;

 FUNC_2(VAR_4, VAR_1, VAR_6, VAR_5, 0);
 FUNC_1(VAR_4, VAR_1);

 return VAR_2;
}
