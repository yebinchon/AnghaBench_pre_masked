
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ivpr; int decar; int mcsrr1; int mcsrr0; } ;
struct kvm_vcpu {TYPE_1__ arch; int vcpu_id; } ;
struct TYPE_6__ {int ivpr; int decar; int mcsrr1; int mcsrr0; int pir; int features; } ;
struct TYPE_5__ {TYPE_3__ e; } ;
struct kvm_sregs {TYPE_2__ u; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_1,
                              struct kvm_sregs *VAR_2)
{
 VAR_2->u.e.features |= VAR_0;

 VAR_2->u.e.pir = VAR_1->vcpu_id;
 VAR_2->u.e.mcsrr0 = VAR_1->arch.mcsrr0;
 VAR_2->u.e.mcsrr1 = VAR_1->arch.mcsrr1;
 VAR_2->u.e.decar = VAR_1->arch.decar;
 VAR_2->u.e.ivpr = VAR_1->arch.ivpr;
}
