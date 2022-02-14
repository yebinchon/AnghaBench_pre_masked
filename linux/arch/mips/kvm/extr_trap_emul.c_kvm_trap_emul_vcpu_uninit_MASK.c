
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pgd; } ;
struct TYPE_4__ {int pgd; } ;
struct TYPE_6__ {TYPE_2__ guest_user_mm; TYPE_1__ guest_kernel_mm; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_0)
{
 FUNC_0(VAR_0->arch.guest_kernel_mm.pgd);
 FUNC_0(VAR_0->arch.guest_user_mm.pgd);
}
