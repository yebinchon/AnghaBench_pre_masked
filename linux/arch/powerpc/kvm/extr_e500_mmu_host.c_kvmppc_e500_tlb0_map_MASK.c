
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tlbe_ref {int dummy; } ;
struct kvmppc_vcpu_e500 {TYPE_1__** gtlb_priv; } ;
struct kvm_book3e_206_tlb_entry {int dummy; } ;
struct TYPE_2__ {struct tlbe_ref ref; } ;


 int VAR_0 ;
 struct kvm_book3e_206_tlb_entry* FUNC_0 (struct kvmppc_vcpu_e500*,int ,int) ;
 int FUNC_1 (struct kvm_book3e_206_tlb_entry*) ;
 int FUNC_2 (struct kvm_book3e_206_tlb_entry*) ;
 int FUNC_3 (struct kvmppc_vcpu_e500*,int ,int,struct kvm_book3e_206_tlb_entry*,int ,struct kvm_book3e_206_tlb_entry*,struct tlbe_ref*) ;
 int FUNC_4 (struct kvmppc_vcpu_e500*,struct kvm_book3e_206_tlb_entry*,struct kvm_book3e_206_tlb_entry*,int,int) ;

__attribute__((used)) static int FUNC_5(struct kvmppc_vcpu_e500 *VAR_1, int VAR_2,
    struct kvm_book3e_206_tlb_entry *VAR_3)
{
 struct kvm_book3e_206_tlb_entry *VAR_4;
 struct tlbe_ref *VAR_5;
 int VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8;

 VAR_4 = FUNC_0(VAR_1, 0, VAR_2);
 VAR_5 = &VAR_1->gtlb_priv[0][VAR_2].ref;

 VAR_8 = FUNC_3(VAR_1, FUNC_1(VAR_4),
   FUNC_2(VAR_4) >> VAR_0,
   VAR_4, 0, VAR_3, VAR_5);
 if (VAR_8)
  return VAR_8;

 FUNC_4(VAR_1, VAR_4, VAR_3, VAR_6, VAR_7);

 return 0;
}
