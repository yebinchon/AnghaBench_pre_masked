
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int vrsave; int tcr; int tsr; int mcsr; int csrr1; int csrr0; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_4__ {int vrsave; int tb; int dec; int tcr; int tsr; int dear; int esr; int mcsr; int csrr1; int csrr0; int features; } ;
struct TYPE_5__ {TYPE_1__ e; } ;
struct kvm_sregs {TYPE_2__ u; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_1,
                           struct kvm_sregs *VAR_2)
{
 u64 VAR_3 = FUNC_0();

 VAR_2->u.e.features |= VAR_0;

 VAR_2->u.e.csrr0 = VAR_1->arch.csrr0;
 VAR_2->u.e.csrr1 = VAR_1->arch.csrr1;
 VAR_2->u.e.mcsr = VAR_1->arch.mcsr;
 VAR_2->u.e.esr = FUNC_3(VAR_1);
 VAR_2->u.e.dear = FUNC_1(VAR_1);
 VAR_2->u.e.tsr = VAR_1->arch.tsr;
 VAR_2->u.e.tcr = VAR_1->arch.tcr;
 VAR_2->u.e.dec = FUNC_2(VAR_1, VAR_3);
 VAR_2->u.e.tb = VAR_3;
 VAR_2->u.e.vrsave = VAR_1->arch.vrsave;
}
