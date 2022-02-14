
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vpa {int dirty; unsigned long gpa; int pinned_addr; } ;
struct kvm_memory_slot {unsigned long base_gfn; unsigned long npages; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long*) ;

void FUNC_1(struct kvmppc_vpa *VAR_1,
         struct kvm_memory_slot *VAR_2,
         unsigned long *VAR_3)
{
 unsigned long VAR_4;

 if (!VAR_1->dirty || !VAR_1->pinned_addr)
  return;
 VAR_4 = VAR_1->gpa >> VAR_0;
 if (VAR_4 < VAR_2->base_gfn ||
     VAR_4 >= VAR_2->base_gfn + VAR_2->npages)
  return;

 VAR_1->dirty = 0;
 if (VAR_3)
  FUNC_0(VAR_4 - VAR_2->base_gfn, VAR_3);
}
