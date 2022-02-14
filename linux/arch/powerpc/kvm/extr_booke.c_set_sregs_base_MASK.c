
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dec; int vrsave; int mcsr; int csrr1; int csrr0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_5__ {int features; int update_special; int tsr; int dec; int tcr; int vrsave; int dear; int esr; int mcsr; int csrr1; int csrr0; } ;
struct TYPE_6__ {TYPE_2__ e; } ;
struct kvm_sregs {TYPE_3__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_3,
                          struct kvm_sregs *VAR_4)
{
 if (!(VAR_4->u.e.features & VAR_0))
  return 0;

 VAR_3->arch.csrr0 = VAR_4->u.e.csrr0;
 VAR_3->arch.csrr1 = VAR_4->u.e.csrr1;
 VAR_3->arch.mcsr = VAR_4->u.e.mcsr;
 FUNC_2(VAR_3, VAR_4->u.e.esr);
 FUNC_1(VAR_3, VAR_4->u.e.dear);
 VAR_3->arch.vrsave = VAR_4->u.e.vrsave;
 FUNC_3(VAR_3, VAR_4->u.e.tcr);

 if (VAR_4->u.e.update_special & VAR_1) {
  VAR_3->arch.dec = VAR_4->u.e.dec;
  FUNC_0(VAR_3);
 }

 if (VAR_4->u.e.update_special & VAR_2)
  FUNC_4(VAR_3, VAR_4->u.e.tsr);

 return 0;
}
