
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_6__ {scalar_t__ direct_map; scalar_t__ cr3; } ;
struct kvm_async_pf {int gva; TYPE_3__ arch; scalar_t__ wakeup_all; } ;
struct TYPE_4__ {scalar_t__ direct_map; scalar_t__ (* get_cr3 ) (struct kvm_vcpu*) ;int (* page_fault ) (struct kvm_vcpu*,int ,int ,int) ;} ;


 int FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(struct kvm_vcpu *VAR_0, struct kvm_async_pf *VAR_1)
{
 int VAR_2;

 if ((VAR_0->arch.mmu->direct_map != VAR_1->arch.direct_map) ||
       VAR_1->wakeup_all)
  return;

 VAR_2 = FUNC_0(VAR_0);
 if (FUNC_3(VAR_2))
  return;

 if (!VAR_0->arch.mmu->direct_map &&
       VAR_1->arch.cr3 != VAR_0->arch.mmu->get_cr3(VAR_0))
  return;

 VAR_0->arch.mmu->page_fault(VAR_0, VAR_1->gva, 0, 1);
}
