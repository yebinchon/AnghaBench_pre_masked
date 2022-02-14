
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct iommu_dev_data {int defer_attach; } ;
struct amd_iommu {int dummy; } ;


 struct iommu_dev_data* FUNC_0 (size_t) ;
 struct amd_iommu** VAR_0 ;
 struct iommu_dev_data* FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (struct amd_iommu*) ;

__attribute__((used)) static struct iommu_dev_data *FUNC_3(u16 VAR_1)
{
 struct iommu_dev_data *VAR_2;
 struct amd_iommu *VAR_3 = VAR_0[VAR_1];

 VAR_2 = FUNC_1(VAR_1);

 if (VAR_2 == ((void*)0)) {
  VAR_2 = FUNC_0(VAR_1);
  if (!VAR_2)
   return ((void*)0);

  if (FUNC_2(VAR_3))
   VAR_2->defer_attach = 1;
 }

 return VAR_2;
}
