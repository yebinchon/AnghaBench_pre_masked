
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int shadow_root_level; int inject_page_fault; int get_pdptr; int get_cr3; int set_cr3; } ;
struct TYPE_3__ {int nested_mmu; int * walk_mmu; TYPE_2__* mmu; TYPE_2__ guest_mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct kvm_vcpu*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_4)
{
 FUNC_0(FUNC_3(VAR_4));

 VAR_4->arch.mmu = &VAR_4->arch.guest_mmu;
 FUNC_2(VAR_4);
 VAR_4->arch.mmu->set_cr3 = VAR_3;
 VAR_4->arch.mmu->get_cr3 = VAR_0;
 VAR_4->arch.mmu->get_pdptr = VAR_1;
 VAR_4->arch.mmu->inject_page_fault = VAR_2;
 VAR_4->arch.mmu->shadow_root_level = FUNC_1(VAR_4);
 FUNC_4(VAR_4, VAR_4->arch.mmu);
 VAR_4->arch.walk_mmu = &VAR_4->arch.nested_mmu;
}
