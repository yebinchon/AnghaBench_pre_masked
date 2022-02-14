
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct amd_iommu {int max_counters; } ;


 struct amd_iommu* FUNC_0 (unsigned int) ;

u8 FUNC_1(unsigned int VAR_0)
{
 struct amd_iommu *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1)
  return VAR_1->max_counters;

 return 0;
}
