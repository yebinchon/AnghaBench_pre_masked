
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_mmu_memory_cache {int nobjs; void** objects; } ;


 int FUNC_0 (void**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_mmu_memory_cache *VAR_2,
           int VAR_3)
{
 void *VAR_4;

 if (VAR_2->nobjs >= VAR_3)
  return 0;
 while (VAR_2->nobjs < FUNC_0(VAR_2->objects)) {
  VAR_4 = (void *)FUNC_1(VAR_1);
  if (!VAR_4)
   return VAR_2->nobjs >= VAR_3 ? 0 : -VAR_0;
  VAR_2->objects[VAR_2->nobjs++] = VAR_4;
 }
 return 0;
}
