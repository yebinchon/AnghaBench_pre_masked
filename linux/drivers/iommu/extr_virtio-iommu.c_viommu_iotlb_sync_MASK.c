
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viommu_domain {int viommu; } ;
struct iommu_iotlb_gather {int dummy; } ;
struct iommu_domain {int dummy; } ;


 struct viommu_domain* FUNC_0 (struct iommu_domain*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct iommu_domain *VAR_0,
         struct iommu_iotlb_gather *VAR_1)
{
 struct viommu_domain *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2->viommu);
}
