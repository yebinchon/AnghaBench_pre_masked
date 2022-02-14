
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_e500 {unsigned long tlb1_min_eaddr; unsigned long tlb1_max_eaddr; } ;
struct kvm_book3e_206_tlb_entry {int dummy; } ;


 unsigned long FUNC_0 (struct kvm_book3e_206_tlb_entry*) ;
 unsigned long FUNC_1 (struct kvm_book3e_206_tlb_entry*) ;

__attribute__((used)) static int FUNC_2(struct kvmppc_vcpu_e500 *VAR_0,
    struct kvm_book3e_206_tlb_entry *VAR_1)
{
 unsigned long VAR_2, VAR_3, VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 VAR_2 = FUNC_1(VAR_1) & ~(VAR_4 - 1);
 VAR_3 = VAR_2 + VAR_4 - 1;

 return VAR_0->tlb1_min_eaddr == VAR_2 ||
   VAR_0->tlb1_max_eaddr == VAR_3;
}
