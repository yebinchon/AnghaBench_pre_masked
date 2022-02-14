
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* rmap; } ;
struct kvm_memory_slot {unsigned long base_gfn; TYPE_1__ arch; } ;
struct kvm {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct kvm*,unsigned long*,unsigned long,unsigned long) ;

void FUNC_1(struct kvm *VAR_2,
      const struct kvm_memory_slot *VAR_3,
      unsigned long VAR_4, unsigned long VAR_5,
      unsigned long VAR_6)
{
 unsigned long VAR_7, VAR_8;
 unsigned long VAR_9;

 if (!VAR_3)
  return;
 VAR_7 = (VAR_4 >> VAR_0) - VAR_3->base_gfn;
 VAR_8 = VAR_7 + (VAR_6 >> VAR_0);

 VAR_9 = VAR_1 & ~(VAR_6 - 1);
 VAR_5 &= VAR_9;

 for (; VAR_7 < VAR_8; VAR_7++) {
  unsigned long *VAR_10 = &VAR_3->arch.rmap[VAR_7];
  FUNC_0(VAR_2, VAR_10, VAR_5, VAR_9);
 }
}
