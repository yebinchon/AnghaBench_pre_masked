
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {struct kvm* kvm; } ;
struct kvm_memory_slot {unsigned long npages; } ;
struct TYPE_2__ {int hpt; } ;
struct kvm {TYPE_1__ arch; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int *) ;
 long FUNC_3 (struct kvm*,int ,unsigned long,unsigned long,unsigned long,unsigned long*) ;
 int FUNC_4 (char*,unsigned long,long) ;

void FUNC_5(struct kvm_vcpu *VAR_10, struct kvm_memory_slot *VAR_11,
       unsigned long VAR_12)
{
 unsigned long VAR_13;
 unsigned long VAR_14;
 unsigned long VAR_15, VAR_16;
 unsigned long VAR_17, VAR_18;
 unsigned long VAR_19;
 unsigned long VAR_20, VAR_21;
 unsigned long VAR_22;
 long VAR_23;
 struct kvm *VAR_24 = VAR_10->kvm;

 VAR_19 = 1ul << VAR_12;
 VAR_14 = VAR_11->npages >> (VAR_12 - VAR_7);


 if (VAR_14 > 1ul << (40 - VAR_12))
  VAR_14 = 1ul << (40 - VAR_12);

 if (VAR_14 > FUNC_2(&VAR_24->arch.hpt) + 1)
  VAR_14 = FUNC_2(&VAR_24->arch.hpt) + 1;

 VAR_20 = VAR_3 | (VAR_9 << (40 - 16)) |
  VAR_4 | FUNC_0(VAR_19);
 VAR_21 = FUNC_1(VAR_19) |
  VAR_2 | VAR_0 | VAR_1 | VAR_8;

 for (VAR_13 = 0; VAR_13 < VAR_14; ++VAR_13) {
  VAR_17 = VAR_13 << VAR_12;

  VAR_18 = (VAR_13 ^ (VAR_9 ^ (VAR_9 << 25)))
   & FUNC_2(&VAR_24->arch.hpt);






  VAR_18 = (VAR_18 << 3) + 7;
  VAR_15 = VAR_20 | ((VAR_17 >> 16) & ~0x7fUL);
  VAR_16 = VAR_21 | VAR_17;
  VAR_23 = FUNC_3(VAR_24, VAR_5, VAR_18, VAR_15, VAR_16,
       &VAR_22);
  if (VAR_23 != VAR_6) {
   FUNC_4("KVM: map_vrma at %lx failed, ret=%ld\n",
          VAR_17, VAR_23);
   break;
  }
 }
}
