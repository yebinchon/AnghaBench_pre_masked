
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct revmap_entry {unsigned long guest_rpte; size_t forw; size_t back; } ;
struct kvm_memory_slot {int dummy; } ;
struct TYPE_3__ {int * rev; } ;
struct TYPE_4__ {TYPE_1__ hpt; } ;
struct kvm {TYPE_2__ arch; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (struct kvm_memory_slot*,unsigned long,int ) ;
 int FUNC_2 (unsigned long*) ;
 struct revmap_entry* FUNC_3 (int *) ;
 unsigned long* FUNC_4 (struct kvm*,unsigned long,unsigned long,struct kvm_memory_slot**,unsigned long*) ;
 int FUNC_5 (unsigned long*) ;

__attribute__((used)) static void FUNC_6(struct kvm *VAR_5, long VAR_6,
    struct revmap_entry *VAR_7,
    unsigned long VAR_8, unsigned long VAR_9)
{
 struct revmap_entry *VAR_10, *VAR_11;
 unsigned long VAR_12, VAR_13;
 unsigned long *VAR_14;
 unsigned long VAR_15;
 struct kvm_memory_slot *VAR_16;
 unsigned long VAR_17;

 VAR_15 = VAR_9 & (VAR_1 | VAR_0);
 VAR_12 = VAR_7->guest_rpte |= VAR_15;
 VAR_14 = FUNC_4(VAR_5, VAR_8, VAR_12, &VAR_16, &VAR_17);
 if (!VAR_14)
  return;
 FUNC_2(VAR_14);

 VAR_13 = *VAR_14 & VAR_2;
 VAR_10 = FUNC_3(&VAR_5->arch.hpt.rev[VAR_7->forw]);
 VAR_11 = FUNC_3(&VAR_5->arch.hpt.rev[VAR_7->back]);
 VAR_10->back = VAR_7->back;
 VAR_11->forw = VAR_7->forw;
 if (VAR_13 == VAR_6) {
  VAR_13 = VAR_7->forw;
  if (VAR_13 == VAR_6)
   *VAR_14 &= ~(VAR_3 | VAR_2);
  else
   *VAR_14 = (*VAR_14 & ~VAR_2) | VAR_13;
 }
 *VAR_14 |= VAR_15 << VAR_4;
 if (VAR_15 & VAR_0)
  FUNC_1(VAR_16, VAR_17,
     FUNC_0(VAR_8, VAR_9));
 FUNC_5(VAR_14);
}
