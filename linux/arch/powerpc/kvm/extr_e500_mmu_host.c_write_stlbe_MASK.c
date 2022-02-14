
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_e500 {int vcpu; } ;
struct kvm_book3e_206_tlb_entry {int mas1; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct kvm_book3e_206_tlb_entry*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct kvmppc_vcpu_e500*,int,int,struct kvm_book3e_206_tlb_entry*) ;

__attribute__((used)) static void FUNC_5(struct kvmppc_vcpu_e500 *VAR_0,
   struct kvm_book3e_206_tlb_entry *VAR_1,
   struct kvm_book3e_206_tlb_entry *VAR_2,
   int VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_2();
 VAR_5 = FUNC_1(&VAR_0->vcpu, VAR_1);

 VAR_2->mas1 |= FUNC_0(VAR_5);
 FUNC_4(VAR_0, VAR_3, VAR_4, VAR_2);
 FUNC_3();
}
