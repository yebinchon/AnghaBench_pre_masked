
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned long start; unsigned long last; } ;
struct viommu_mapping {TYPE_1__ iova; int flags; int paddr; } ;
struct viommu_domain {int mappings_lock; int mappings; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 struct viommu_mapping* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct viommu_domain *VAR_2, unsigned long VAR_3,
         phys_addr_t VAR_4, size_t VAR_5, u32 VAR_6)
{
 unsigned long VAR_7;
 struct viommu_mapping *VAR_8;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->paddr = VAR_4;
 VAR_8->iova.start = VAR_3;
 VAR_8->iova.last = VAR_3 + VAR_5 - 1;
 VAR_8->flags = VAR_6;

 FUNC_2(&VAR_2->mappings_lock, VAR_7);
 FUNC_0(&VAR_8->iova, &VAR_2->mappings);
 FUNC_3(&VAR_2->mappings_lock, VAR_7);

 return 0;
}
