
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct tlbe_ref {int flags; } ;
struct kvmppc_vcpu_e500 {TYPE_1__** gtlb_priv; } ;
struct kvm_book3e_206_tlb_entry {int dummy; } ;
typedef int gfn_t ;
struct TYPE_2__ {struct tlbe_ref ref; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kvm_book3e_206_tlb_entry*) ;
 int FUNC_1 (struct kvmppc_vcpu_e500*,int ,int ,struct kvm_book3e_206_tlb_entry*,int,struct kvm_book3e_206_tlb_entry*,struct tlbe_ref*) ;
 int FUNC_2 (struct kvmppc_vcpu_e500*,struct tlbe_ref*,int) ;
 int FUNC_3 (struct kvmppc_vcpu_e500*,struct kvm_book3e_206_tlb_entry*,struct kvm_book3e_206_tlb_entry*,int,int) ;

__attribute__((used)) static int FUNC_4(struct kvmppc_vcpu_e500 *VAR_2,
  u64 VAR_3, gfn_t VAR_4, struct kvm_book3e_206_tlb_entry *VAR_5,
  struct kvm_book3e_206_tlb_entry *VAR_6, int VAR_7)
{
 struct tlbe_ref *VAR_8 = &VAR_2->gtlb_priv[1][VAR_7].ref;
 int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, 1, VAR_6,
       VAR_8);
 if (VAR_10)
  return VAR_10;


 if (FUNC_0(VAR_6) == VAR_0) {
  VAR_2->gtlb_priv[1][VAR_7].ref.flags |= VAR_1;
  FUNC_3(VAR_2, VAR_5, VAR_6, 0, 0);
  return 0;
 }


 VAR_9 = FUNC_2(VAR_2, VAR_8, VAR_7);
 FUNC_3(VAR_2, VAR_5, VAR_6, 1, VAR_9);

 return 0;
}
