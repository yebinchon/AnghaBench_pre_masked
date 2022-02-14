
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_memory_slot {scalar_t__ dirty_bitmap; } ;
struct TYPE_4__ {int num_1G_pages; int num_2M_pages; } ;
struct TYPE_3__ {unsigned int lpid; } ;
struct kvm {TYPE_2__ stat; TYPE_1__ arch; } ;
typedef int pte_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int VAR_4 ;
 unsigned long VAR_5 ;
 struct kvm_memory_slot* FUNC_0 (struct kvm*,unsigned long) ;
 int FUNC_1 (struct kvm*,struct kvm_memory_slot const*,unsigned long,unsigned long,unsigned long) ;
 int FUNC_2 (struct kvm*,unsigned long,unsigned int,unsigned int) ;
 unsigned long FUNC_3 (struct kvm*,int *,unsigned long,int ,unsigned long,unsigned int) ;
 int FUNC_4 (struct kvm_memory_slot const*,unsigned long,unsigned long) ;

void FUNC_5(struct kvm *VAR_6, pte_t *VAR_7, unsigned long VAR_8,
        unsigned int VAR_9,
        const struct kvm_memory_slot *VAR_10,
        unsigned int VAR_11)

{
 unsigned long VAR_12;
 unsigned long VAR_13 = VAR_8 >> VAR_0;
 unsigned long VAR_14 = VAR_1;
 unsigned long VAR_15;

 VAR_12 = FUNC_3(VAR_6, VAR_7, ~0UL, 0, VAR_8, VAR_9);
 FUNC_2(VAR_6, VAR_8, VAR_9, VAR_11);


 if (VAR_11 != VAR_6->arch.lpid)
  return;

 if (!VAR_10) {
  VAR_10 = FUNC_0(VAR_6, VAR_13);
  if (!VAR_10)
   return;
 }
 if (VAR_9) {
  VAR_14 = 1ul << VAR_9;
  if (VAR_9 == VAR_2)
   VAR_6->stat.num_2M_pages--;
  else if (VAR_9 == VAR_4)
   VAR_6->stat.num_1G_pages--;
 }

 VAR_8 &= ~(VAR_14 - 1);
 VAR_15 = VAR_12 & VAR_3;
 FUNC_1(VAR_6, VAR_10, VAR_8, VAR_15, VAR_14);

 if ((VAR_12 & VAR_5) && VAR_10->dirty_bitmap)
  FUNC_4(VAR_10, VAR_13, VAR_14);
}
