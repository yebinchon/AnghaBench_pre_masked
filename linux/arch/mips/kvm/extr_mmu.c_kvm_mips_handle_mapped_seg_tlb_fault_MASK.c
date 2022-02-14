
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pc; } ;
struct kvm_vcpu {TYPE_1__ arch; struct kvm* kvm; } ;
struct kvm_mips_tlb {long* tlb_lo; } ;
struct kvm {int mmu_lock; } ;
typedef int pte_t ;


 long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 size_t FUNC_1 (struct kvm_mips_tlb,unsigned long) ;
 unsigned long VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,long,long) ;
 int FUNC_4 (char*,unsigned long) ;
 int FUNC_5 (int ,long) ;
 int FUNC_6 (struct kvm_vcpu*,unsigned long,int,int) ;
 scalar_t__ FUNC_7 (struct kvm_vcpu*,int ,int,int *,int *) ;
 int * FUNC_8 (struct kvm*,int *,int ) ;
 int * FUNC_9 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_10 (long) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct kvm_vcpu *VAR_5,
      struct kvm_mips_tlb *VAR_6,
      unsigned long VAR_7,
      bool VAR_8)
{
 struct kvm *VAR_9 = VAR_5->kvm;
 long VAR_10[2];
 pte_t VAR_11[2], *VAR_12, *VAR_13;
 unsigned int VAR_14 = FUNC_1(*VAR_6, VAR_7);
 bool VAR_15 = FUNC_0(VAR_5);

 VAR_10[0] = VAR_6->tlb_lo[0];
 VAR_10[1] = VAR_6->tlb_lo[1];





 if (!((VAR_7 ^ VAR_1) & VAR_4 & (VAR_2 << 1)))
  VAR_10[FUNC_1(*VAR_6, VAR_1)] = 0;


 if (FUNC_7(VAR_5, FUNC_10(VAR_10[VAR_14]),
         VAR_8, &VAR_11[VAR_14], ((void*)0)) < 0)
  return -1;


 VAR_11[!VAR_14] = FUNC_11(0, FUNC_2(0));
 if (VAR_10[!VAR_14] & VAR_0) {
  FUNC_12(&VAR_9->mmu_lock);
  VAR_12 = FUNC_8(VAR_9, ((void*)0),
     FUNC_10(VAR_10[!VAR_14]));
  if (VAR_12)
   VAR_11[!VAR_14] = *VAR_12;
  FUNC_13(&VAR_9->mmu_lock);
 }


 VAR_13 = FUNC_9(VAR_5, VAR_7 & ~VAR_3);
 if (!VAR_13) {
  FUNC_4("No ptep for gva %lx\n", VAR_7);
  return -1;
 }


 VAR_13[0] = FUNC_5(VAR_11[0], VAR_10[0]);
 VAR_13[1] = FUNC_5(VAR_11[1], VAR_10[1]);


 FUNC_6(VAR_5, VAR_7, !VAR_15, VAR_15);

 FUNC_3("@ %#lx tlb_lo0: 0x%08lx tlb_lo1: 0x%08lx\n", VAR_5->arch.pc,
    VAR_6->tlb_lo[0], VAR_6->tlb_lo[1]);

 return 0;
}
