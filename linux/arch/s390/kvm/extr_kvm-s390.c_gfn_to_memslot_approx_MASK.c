
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memslots {int used_slots; int lru_slot; struct kvm_memory_slot* memslots; } ;
struct kvm_memory_slot {scalar_t__ base_gfn; scalar_t__ npages; } ;
typedef scalar_t__ gfn_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct kvm_memslots *VAR_0, gfn_t VAR_1)
{
 int VAR_2 = 0, VAR_3 = VAR_0->used_slots;
 int VAR_4 = FUNC_0(&VAR_0->lru_slot);
 struct kvm_memory_slot *VAR_5 = VAR_0->memslots;

 if (VAR_1 >= VAR_5[VAR_4].base_gfn &&
     VAR_1 < VAR_5[VAR_4].base_gfn + VAR_5[VAR_4].npages)
  return VAR_4;

 while (VAR_2 < VAR_3) {
  VAR_4 = VAR_2 + (VAR_3 - VAR_2) / 2;

  if (VAR_1 >= VAR_5[VAR_4].base_gfn)
   VAR_3 = VAR_4;
  else
   VAR_2 = VAR_4 + 1;
 }

 if (VAR_1 >= VAR_5[VAR_2].base_gfn &&
     VAR_1 < VAR_5[VAR_2].base_gfn + VAR_5[VAR_2].npages) {
  FUNC_1(&VAR_0->lru_slot, VAR_2);
 }

 return VAR_2;
}
