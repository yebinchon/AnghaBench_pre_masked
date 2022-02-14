
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {int dummy; } ;
struct gart_device {int pte_lock; } ;
typedef unsigned long phys_addr_t ;
typedef int dma_addr_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 struct gart_device* VAR_3 ;
 scalar_t__ FUNC_0 (struct gart_device*,int ,int ) ;
 unsigned long FUNC_1 (struct gart_device*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static phys_addr_t FUNC_4(struct iommu_domain *VAR_4,
        dma_addr_t VAR_5)
{
 struct gart_device *VAR_6 = VAR_3;
 unsigned long VAR_7;

 if (FUNC_0(VAR_6, VAR_5, VAR_2))
  return -VAR_0;

 FUNC_2(&VAR_6->pte_lock);
 VAR_7 = FUNC_1(VAR_6, VAR_5);
 FUNC_3(&VAR_6->pte_lock);

 return VAR_7 & VAR_1;
}
