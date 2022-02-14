
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvmppc_vcpu_e500 {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_book3e_206_tlb_entry {int dummy; } ;
typedef int gva_t ;
typedef int gpa_t ;


 int FUNC_0 (unsigned int) ;
 struct kvm_book3e_206_tlb_entry* FUNC_1 (struct kvmppc_vcpu_e500*,int ,int ) ;
 int FUNC_2 (struct kvm_book3e_206_tlb_entry*) ;
 int FUNC_3 (struct kvm_book3e_206_tlb_entry*) ;
 int FUNC_4 (unsigned int) ;
 struct kvmppc_vcpu_e500* FUNC_5 (struct kvm_vcpu*) ;

gpa_t FUNC_6(struct kvm_vcpu *VAR_0, unsigned int VAR_1,
   gva_t VAR_2)
{
 struct kvmppc_vcpu_e500 *VAR_3 = FUNC_5(VAR_0);
 struct kvm_book3e_206_tlb_entry *VAR_4;
 u64 VAR_5;

 VAR_4 = FUNC_1(VAR_3, FUNC_4(VAR_1), FUNC_0(VAR_1));
 VAR_5 = FUNC_2(VAR_4) - 1;

 return FUNC_3(VAR_4) | (VAR_2 & VAR_5);
}
