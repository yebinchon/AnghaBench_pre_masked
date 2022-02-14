
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct x86_exception {int nested_page_fault; } ;
struct TYPE_4__ {int (* inject_page_fault ) (struct kvm_vcpu*,struct x86_exception*) ;} ;
struct TYPE_6__ {TYPE_2__* mmu; TYPE_1__ nested_mmu; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_5__ {int (* inject_page_fault ) (struct kvm_vcpu*,struct x86_exception*) ;} ;


 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,struct x86_exception*) ;
 int FUNC_2 (struct kvm_vcpu*,struct x86_exception*) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_0, struct x86_exception *VAR_1)
{
 if (FUNC_0(VAR_0) && !VAR_1->nested_page_fault)
  VAR_0->arch.nested_mmu.inject_page_fault(VAR_0, VAR_1);
 else
  VAR_0->arch.mmu->inject_page_fault(VAR_0, VAR_1);

 return VAR_1->nested_page_fault;
}
