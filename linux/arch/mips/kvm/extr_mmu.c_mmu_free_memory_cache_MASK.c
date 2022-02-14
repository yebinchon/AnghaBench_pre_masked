
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_mmu_memory_cache {int nobjs; scalar_t__* objects; } ;


 int FUNC_0 (unsigned long) ;

__attribute__((used)) static void FUNC_1(struct kvm_mmu_memory_cache *VAR_0)
{
 while (VAR_0->nobjs)
  FUNC_0((unsigned long)VAR_0->objects[--VAR_0->nobjs]);
}
