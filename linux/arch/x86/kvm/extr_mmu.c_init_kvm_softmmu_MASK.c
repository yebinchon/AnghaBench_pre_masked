
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct kvm_mmu* mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_mmu {int inject_page_fault; int get_pdptr; int get_cr3; int set_cr3; } ;
struct TYPE_4__ {int set_cr3; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_4)
{
 struct kvm_mmu *VAR_5 = VAR_4->arch.mmu;

 FUNC_0(VAR_4);
 VAR_5->set_cr3 = VAR_3->set_cr3;
 VAR_5->get_cr3 = VAR_0;
 VAR_5->get_pdptr = VAR_2;
 VAR_5->inject_page_fault = VAR_1;
}
