
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_iotlb_gather {int dummy; } ;
struct iommu_domain {int dummy; } ;


 size_t FUNC_0 (struct iommu_domain*,unsigned long,size_t,struct iommu_iotlb_gather*) ;
 int FUNC_1 (struct iommu_iotlb_gather*) ;
 int FUNC_2 (struct iommu_domain*,struct iommu_iotlb_gather*) ;

size_t FUNC_3(struct iommu_domain *VAR_0,
     unsigned long VAR_1, size_t VAR_2)
{
 struct iommu_iotlb_gather VAR_3;
 size_t VAR_4;

 FUNC_1(&VAR_3);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3);
 FUNC_2(VAR_0, &VAR_3);

 return VAR_4;
}
