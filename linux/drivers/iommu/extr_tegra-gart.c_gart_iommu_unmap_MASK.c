
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_iotlb_gather {int dummy; } ;
struct iommu_domain {int dummy; } ;
struct gart_device {int pte_lock; } ;


 int FUNC_0 (struct gart_device*,unsigned long) ;
 struct gart_device* VAR_0 ;
 scalar_t__ FUNC_1 (struct gart_device*,unsigned long,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static size_t FUNC_4(struct iommu_domain *VAR_1, unsigned long VAR_2,
          size_t VAR_3, struct iommu_iotlb_gather *VAR_4)
{
 struct gart_device *VAR_5 = VAR_0;
 int VAR_6;

 if (FUNC_1(VAR_5, VAR_2, VAR_3))
  return 0;

 FUNC_2(&VAR_5->pte_lock);
 VAR_6 = FUNC_0(VAR_5, VAR_2);
 FUNC_3(&VAR_5->pte_lock);

 return VAR_6 ? 0 : VAR_3;
}
