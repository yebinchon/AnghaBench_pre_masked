
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {int dummy; } ;
struct gart_device {int pte_lock; } ;
typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct gart_device*,unsigned long,unsigned long) ;
 struct gart_device* VAR_1 ;
 scalar_t__ FUNC_1 (struct gart_device*,unsigned long,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iommu_domain *VAR_2, unsigned long VAR_3,
     phys_addr_t VAR_4, size_t VAR_5, int VAR_6)
{
 struct gart_device *VAR_7 = VAR_1;
 int VAR_8;

 if (FUNC_1(VAR_7, VAR_3, VAR_5))
  return -VAR_0;

 FUNC_2(&VAR_7->pte_lock);
 VAR_8 = FUNC_0(VAR_7, VAR_3, (unsigned long)VAR_4);
 FUNC_3(&VAR_7->pte_lock);

 return VAR_8;
}
