
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_book3e_206_tlb_entry {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_book3e_206_tlb_entry*) ;
 int FUNC_2 (struct kvm_book3e_206_tlb_entry*) ;
 unsigned int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct kvm_vcpu*) ;

unsigned int FUNC_5(struct kvm_vcpu *VAR_0,
          struct kvm_book3e_206_tlb_entry *VAR_1)
{
 return FUNC_3(FUNC_4(VAR_0), FUNC_2(VAR_1),
       FUNC_1(VAR_1), FUNC_0(VAR_0), 0);
}
