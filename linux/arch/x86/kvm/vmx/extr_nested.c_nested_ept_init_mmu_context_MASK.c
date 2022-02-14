
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int get_pdptr; int inject_page_fault; int (* get_cr3 ) (struct kvm_vcpu*) ;int set_cr3; } ;
struct TYPE_9__ {int nested_mmu; int * walk_mmu; TYPE_3__* mmu; TYPE_3__ guest_mmu; } ;
struct kvm_vcpu {TYPE_4__ arch; } ;
struct TYPE_6__ {int ept_caps; } ;
struct TYPE_7__ {TYPE_1__ msrs; } ;
struct TYPE_10__ {TYPE_2__ nested; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*,int,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int VAR_2 ;
 TYPE_5__* FUNC_5 (struct kvm_vcpu*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_4)
{
 FUNC_0(FUNC_2(VAR_4));

 VAR_4->arch.mmu = &VAR_4->arch.guest_mmu;
 FUNC_1(VAR_4,
   FUNC_5(VAR_4)->nested.msrs.ept_caps &
   VAR_0,
   FUNC_3(VAR_4),
   FUNC_4(VAR_4));
 VAR_4->arch.mmu->set_cr3 = VAR_3;
 VAR_4->arch.mmu->get_cr3 = FUNC_4;
 VAR_4->arch.mmu->inject_page_fault = VAR_2;
 VAR_4->arch.mmu->get_pdptr = VAR_1;

 VAR_4->arch.walk_mmu = &VAR_4->arch.nested_mmu;
}
