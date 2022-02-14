
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tegra_smmu_as {int dummy; } ;
struct iommu_domain {int dummy; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__* FUNC_1 (struct tegra_smmu_as*,unsigned long,int *) ;
 int FUNC_2 (struct tegra_smmu_as*,unsigned long) ;
 int FUNC_3 (struct tegra_smmu_as*,unsigned long,scalar_t__*,int ,scalar_t__) ;
 struct tegra_smmu_as* FUNC_4 (struct iommu_domain*) ;

__attribute__((used)) static int FUNC_5(struct iommu_domain *VAR_6, unsigned long VAR_7,
     phys_addr_t VAR_8, size_t VAR_9, int VAR_10)
{
 struct tegra_smmu_as *VAR_11 = FUNC_4(VAR_6);
 dma_addr_t VAR_12;
 u32 VAR_13;
 u32 *VAR_14;

 VAR_14 = FUNC_1(VAR_11, VAR_7, &VAR_12);
 if (!VAR_14)
  return -VAR_0;


 if (*VAR_14 == 0)
  FUNC_2(VAR_11, VAR_7);

 VAR_13 = VAR_3;

 if (VAR_10 & VAR_1)
  VAR_13 |= VAR_4;

 if (VAR_10 & VAR_2)
  VAR_13 |= VAR_5;

 FUNC_3(VAR_11, VAR_7, VAR_14, VAR_12,
      FUNC_0(VAR_8) | VAR_13);

 return 0;
}
