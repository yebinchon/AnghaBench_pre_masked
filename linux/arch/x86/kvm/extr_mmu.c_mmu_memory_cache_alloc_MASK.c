
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_mmu_memory_cache {size_t nobjs; void** objects; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void *FUNC_1(struct kvm_mmu_memory_cache *VAR_0)
{
 void *VAR_1;

 FUNC_0(!VAR_0->nobjs);
 VAR_1 = VAR_0->objects[--VAR_0->nobjs];
 return VAR_1;
}
