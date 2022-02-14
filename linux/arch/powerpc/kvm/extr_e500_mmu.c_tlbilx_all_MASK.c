
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vcpu_e500 {TYPE_1__* gtlb_params; } ;
struct kvm_book3e_206_tlb_entry {int dummy; } ;
struct TYPE_2__ {int entries; } ;


 struct kvm_book3e_206_tlb_entry* FUNC_0 (struct kvmppc_vcpu_e500*,int,int) ;
 int FUNC_1 (struct kvm_book3e_206_tlb_entry*) ;
 int FUNC_2 (struct kvmppc_vcpu_e500*,int,int) ;
 int FUNC_3 (struct kvmppc_vcpu_e500*,int,int) ;

__attribute__((used)) static void FUNC_4(struct kvmppc_vcpu_e500 *VAR_0, int VAR_1,
         int VAR_2, int VAR_3)
{
 struct kvm_book3e_206_tlb_entry *VAR_4;
 int VAR_5, VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_0->gtlb_params[VAR_1].entries; VAR_6++) {
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_6);
  VAR_5 = FUNC_1(VAR_4);
  if (VAR_3 == 0 || VAR_5 == VAR_2) {
   FUNC_2(VAR_0, VAR_1, VAR_6);
   FUNC_3(VAR_0, VAR_1, VAR_6);
  }
 }
}
