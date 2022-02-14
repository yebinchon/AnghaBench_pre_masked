
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_mmu_memory_cache {int nobjs; void** objects; } ;
struct kmem_cache {int dummy; } ;


 int FUNC_0 (void**) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (struct kmem_cache*,int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_mmu_memory_cache *VAR_2,
      struct kmem_cache *VAR_3, int VAR_4)
{
 void *VAR_5;

 if (VAR_2->nobjs >= VAR_4)
  return 0;
 while (VAR_2->nobjs < FUNC_0(VAR_2->objects)) {
  VAR_5 = FUNC_1(VAR_3, VAR_1);
  if (!VAR_5)
   return VAR_2->nobjs >= VAR_4 ? 0 : -VAR_0;
  VAR_2->objects[VAR_2->nobjs++] = VAR_5;
 }
 return 0;
}
