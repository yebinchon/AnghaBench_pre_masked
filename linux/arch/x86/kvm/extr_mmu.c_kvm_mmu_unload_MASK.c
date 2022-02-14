
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int root_hpa; } ;
struct TYPE_3__ {TYPE_2__ guest_mmu; TYPE_2__ root_mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu*,TYPE_2__*,int ) ;

void FUNC_3(struct kvm_vcpu *VAR_1)
{
 FUNC_2(VAR_1, &VAR_1->arch.root_mmu, VAR_0);
 FUNC_1(FUNC_0(VAR_1->arch.root_mmu.root_hpa));
 FUNC_2(VAR_1, &VAR_1->arch.guest_mmu, VAR_0);
 FUNC_1(FUNC_0(VAR_1->arch.guest_mmu.root_hpa));
}
