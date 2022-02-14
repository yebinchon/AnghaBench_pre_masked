
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pgdir; } ;
struct kvm_vcpu {TYPE_1__ arch; struct kvm* kvm; } ;
struct kvm_memory_slot {int flags; } ;
struct kvm {int dummy; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int * FUNC_0 (int ,unsigned long,int *,unsigned int*) ;
 unsigned long FUNC_1 (struct kvm_memory_slot*,unsigned long) ;
 struct kvm_memory_slot* FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct kvm*) ;
 int FUNC_4 (int *,int) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct kvm_vcpu *VAR_6, unsigned long VAR_7,
     int VAR_8, unsigned long *VAR_9,
     struct kvm_memory_slot **VAR_10)
{
 struct kvm *VAR_11 = VAR_6->kvm;
 struct kvm_memory_slot *VAR_12;
 unsigned long VAR_13, VAR_14, VAR_15, VAR_16 = VAR_5;
 unsigned int VAR_17;
 pte_t *VAR_18, VAR_19;


 VAR_13 = VAR_7 >> VAR_5;
 VAR_12 = FUNC_2(FUNC_3(VAR_11), VAR_13);
 if (!VAR_12 || (VAR_12->flags & VAR_3))
  return VAR_0;


 VAR_14 = FUNC_1(VAR_12, VAR_13);


 VAR_18 = FUNC_0(VAR_6->arch.pgdir, VAR_14, ((void*)0), &VAR_17);
 if (!VAR_18)
  return VAR_2;
 VAR_19 = FUNC_4(VAR_18, VAR_8);
 if (!FUNC_6(VAR_19))
  return VAR_2;


 if (VAR_17)
  VAR_16 = 1UL << VAR_17;
 VAR_15 = FUNC_5(VAR_19) << VAR_5;
 VAR_15 |= VAR_14 & (VAR_16 - 1);
 VAR_15 |= VAR_7 & ~VAR_4;

 if (VAR_9)
  *VAR_9 = VAR_15;
 if (VAR_10)
  *VAR_10 = VAR_12;

 return VAR_1;
}
