
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_batch {scalar_t__ npages; int * pglist; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 long FUNC_1 (struct iommu_batch*,int ) ;
 struct iommu_batch* FUNC_2 (int *) ;

__attribute__((used)) static inline long FUNC_3(u64 VAR_2, u64 VAR_3)
{
 struct iommu_batch *VAR_4 = FUNC_2(&VAR_1);

 FUNC_0(VAR_4->npages >= VAR_0);

 VAR_4->pglist[VAR_4->npages++] = VAR_2;
 if (VAR_4->npages == VAR_0)
  return FUNC_1(VAR_4, VAR_3);

 return 0;
}
