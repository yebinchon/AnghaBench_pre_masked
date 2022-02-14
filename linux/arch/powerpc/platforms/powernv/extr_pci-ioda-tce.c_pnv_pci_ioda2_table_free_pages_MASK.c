
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {unsigned long it_level_size; unsigned long it_size; int it_indirect_levels; int * it_userspace; scalar_t__ it_base; } ;
typedef int __be64 ;


 int FUNC_0 (int *,unsigned long const,int ) ;

void FUNC_1(struct iommu_table *VAR_0)
{
 const unsigned long VAR_1 = VAR_0->it_indirect_levels ?
   VAR_0->it_level_size : VAR_0->it_size;

 if (!VAR_0->it_size)
  return;

 FUNC_0((__be64 *)VAR_0->it_base, VAR_1,
   VAR_0->it_indirect_levels);
 if (VAR_0->it_userspace) {
  FUNC_0(VAR_0->it_userspace, VAR_1,
    VAR_0->it_indirect_levels);
 }
}
