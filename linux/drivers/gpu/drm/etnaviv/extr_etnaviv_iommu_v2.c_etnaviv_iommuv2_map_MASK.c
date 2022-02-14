
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etnaviv_iommuv2_context {int** stlb_cpu; } ;
struct etnaviv_iommu_context {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 size_t VAR_9 ;
 int FUNC_1 (struct etnaviv_iommuv2_context*,int) ;
 int FUNC_2 (int ) ;
 struct etnaviv_iommuv2_context* FUNC_3 (struct etnaviv_iommu_context*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct etnaviv_iommu_context *VAR_10,
          unsigned long VAR_11, phys_addr_t VAR_12,
          size_t VAR_13, int VAR_14)
{
 struct etnaviv_iommuv2_context *VAR_15 = FUNC_3(VAR_10);
 int VAR_16, VAR_17, VAR_18;
 u32 VAR_19 = FUNC_2(VAR_12) | VAR_5;

 if (VAR_13 != VAR_9)
  return -VAR_1;

 if (FUNC_0(VAR_0))
  VAR_19 |= (FUNC_4(VAR_12) & 0xff) << 4;

 if (VAR_14 & VAR_2)
  VAR_19 |= VAR_6;

 VAR_16 = (VAR_11 & VAR_3) >> VAR_4;
 VAR_17 = (VAR_11 & VAR_7) >> VAR_8;

 VAR_18 = FUNC_1(VAR_15, VAR_16);
 if (VAR_18)
  return VAR_18;

 VAR_15->stlb_cpu[VAR_16][VAR_17] = VAR_19;

 return 0;
}
