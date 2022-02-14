
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* rmap; } ;
struct kvm_memory_slot {unsigned long base_gfn; unsigned long npages; TYPE_1__ arch; } ;
struct kvm {int dummy; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm*) ;
 int FUNC_1 (struct kvm*,struct kvm_memory_slot*,unsigned long) ;
 int FUNC_2 (struct kvm*,struct kvm_memory_slot*) ;

void FUNC_3(struct kvm *VAR_1,
      struct kvm_memory_slot *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;
 unsigned long *VAR_5;

 VAR_3 = VAR_2->base_gfn;
 VAR_5 = VAR_2->arch.rmap;
 if (FUNC_0(VAR_1)) {
  FUNC_2(VAR_1, VAR_2);
  return;
 }

 for (VAR_4 = VAR_2->npages; VAR_4; --VAR_4, ++VAR_3) {






  if (*VAR_5 & VAR_0)
   FUNC_1(VAR_1, VAR_2, VAR_3);
  ++VAR_5;
 }
}
