
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_e500 {int dummy; } ;
struct kvm_book3e_206_tlb_entry {scalar_t__ mas1; } ;


 struct kvm_book3e_206_tlb_entry* FUNC_0 (struct kvmppc_vcpu_e500*,int,int) ;
 int FUNC_1 (struct kvm_book3e_206_tlb_entry*) ;
 scalar_t__ FUNC_2 (struct kvmppc_vcpu_e500*,struct kvm_book3e_206_tlb_entry*) ;
 int FUNC_3 (struct kvmppc_vcpu_e500*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline int FUNC_5(
    struct kvmppc_vcpu_e500 *VAR_0,
    int VAR_1, int VAR_2)
{
 struct kvm_book3e_206_tlb_entry *VAR_3 =
  FUNC_0(VAR_0, VAR_1, VAR_2);

 if (FUNC_4(FUNC_1(VAR_3)))
  return -1;

 if (VAR_1 == 1 && FUNC_2(VAR_0, VAR_3))
  FUNC_3(VAR_0);

 VAR_3->mas1 = 0;

 return 0;
}
