
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_batch {unsigned long entry; unsigned long npages; } ;


 int VAR_0 ;
 int FUNC_0 (struct iommu_batch*,int ) ;
 struct iommu_batch* FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(unsigned long VAR_1, u64 VAR_2)
{
 struct iommu_batch *VAR_3 = FUNC_1(&VAR_0);

 if (VAR_3->entry + VAR_3->npages == VAR_1)
  return;
 if (VAR_3->entry != ~0UL)
  FUNC_0(VAR_3, VAR_2);
 VAR_3->entry = VAR_1;
}
