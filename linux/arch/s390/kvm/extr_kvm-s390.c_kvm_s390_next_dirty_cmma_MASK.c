
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memslots {int used_slots; struct kvm_memory_slot* memslots; } ;
struct kvm_memory_slot {unsigned long base_gfn; unsigned long npages; } ;


 unsigned long FUNC_0 (int ,unsigned long,unsigned long) ;
 int FUNC_1 (struct kvm_memslots*,unsigned long) ;
 int FUNC_2 (struct kvm_memory_slot*) ;

__attribute__((used)) static unsigned long FUNC_3(struct kvm_memslots *VAR_0,
           unsigned long VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1);
 struct kvm_memory_slot *VAR_3 = VAR_0->memslots + VAR_2;
 unsigned long VAR_4 = VAR_1 - VAR_3->base_gfn;

 if (VAR_3->base_gfn + VAR_3->npages <= VAR_1) {
  VAR_2--;

  if (VAR_2 < 0)
   VAR_2 = VAR_0->used_slots - 1;

  VAR_3 = VAR_0->memslots + VAR_2;
  VAR_4 = 0;
 }
 VAR_4 = FUNC_0(FUNC_2(VAR_3), VAR_3->npages, VAR_4);
 while ((VAR_2 > 0) && (VAR_4 >= VAR_3->npages)) {
  VAR_2--;
  VAR_3 = VAR_0->memslots + VAR_2;
  VAR_4 = FUNC_0(FUNC_2(VAR_3), VAR_3->npages, 0);
 }
 return VAR_3->base_gfn + VAR_4;
}
