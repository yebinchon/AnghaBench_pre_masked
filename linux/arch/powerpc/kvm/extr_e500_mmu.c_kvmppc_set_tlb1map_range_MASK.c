
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_e500 {int tlb1_max_eaddr; int tlb1_min_eaddr; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_book3e_206_tlb_entry {int dummy; } ;


 unsigned long FUNC_0 (struct kvm_book3e_206_tlb_entry*) ;
 unsigned long FUNC_1 (struct kvm_book3e_206_tlb_entry*) ;
 int FUNC_2 (struct kvm_book3e_206_tlb_entry*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 struct kvmppc_vcpu_e500* FUNC_5 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_0,
    struct kvm_book3e_206_tlb_entry *VAR_1)
{
 unsigned long VAR_2, VAR_3, VAR_4;
 struct kvmppc_vcpu_e500 *VAR_5 = FUNC_5(VAR_0);

 if (!FUNC_2(VAR_1))
  return;

 VAR_4 = FUNC_0(VAR_1);
 VAR_2 = FUNC_1(VAR_1) & ~(VAR_4 - 1);
 VAR_3 = VAR_2 + VAR_4 - 1;

 VAR_5->tlb1_min_eaddr = FUNC_4(VAR_5->tlb1_min_eaddr, VAR_2);
 VAR_5->tlb1_max_eaddr = FUNC_3(VAR_5->tlb1_max_eaddr, VAR_3);
}
