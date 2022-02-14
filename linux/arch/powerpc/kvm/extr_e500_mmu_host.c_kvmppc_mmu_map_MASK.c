
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int flags; } ;
struct tlbe_priv {TYPE_1__ ref; } ;
struct kvmppc_vcpu_e500 {struct tlbe_priv** gtlb_priv; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_book3e_206_tlb_entry {int dummy; } ;
typedef int gpa_t ;
typedef int gfn_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int) ;
 struct kvm_book3e_206_tlb_entry* FUNC_2 (struct kvmppc_vcpu_e500*,int,int) ;
 int FUNC_3 (struct kvm_vcpu*,struct kvm_book3e_206_tlb_entry*,int ,TYPE_1__*,int ,struct kvm_book3e_206_tlb_entry*) ;
 int FUNC_4 (struct kvmppc_vcpu_e500*,int,struct kvm_book3e_206_tlb_entry*) ;
 int FUNC_5 (struct kvmppc_vcpu_e500*,int ,int,struct kvm_book3e_206_tlb_entry*,struct kvm_book3e_206_tlb_entry*,int) ;
 int FUNC_6 (unsigned int) ;
 struct kvmppc_vcpu_e500* FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvmppc_vcpu_e500*,struct kvm_book3e_206_tlb_entry*,struct kvm_book3e_206_tlb_entry*,int ,int ) ;

void FUNC_9(struct kvm_vcpu *VAR_3, u64 VAR_4, gpa_t VAR_5,
      unsigned int VAR_6)
{
 struct kvmppc_vcpu_e500 *VAR_7 = FUNC_7(VAR_3);
 struct tlbe_priv *VAR_8;
 struct kvm_book3e_206_tlb_entry *VAR_9, VAR_10;
 int VAR_11 = FUNC_6(VAR_6);
 int VAR_12 = FUNC_1(VAR_6);

 VAR_9 = FUNC_2(VAR_7, VAR_11, VAR_12);

 switch (VAR_11) {
 case 0:
  VAR_8 = &VAR_7->gtlb_priv[VAR_11][VAR_12];


  if (!(VAR_8->ref.flags & VAR_1)) {
   FUNC_4(VAR_7, VAR_12, &VAR_10);
  } else {
   FUNC_3(VAR_3, VAR_9, VAR_0,
      &VAR_8->ref, VAR_4, &VAR_10);
   FUNC_8(VAR_7, VAR_9, &VAR_10, 0, 0);
  }
  break;

 case 1: {
  gfn_t VAR_13 = VAR_5 >> VAR_2;
  FUNC_5(VAR_7, VAR_4, VAR_13, VAR_9, &VAR_10,
         VAR_12);
  break;
 }

 default:
  FUNC_0();
  break;
 }
}
