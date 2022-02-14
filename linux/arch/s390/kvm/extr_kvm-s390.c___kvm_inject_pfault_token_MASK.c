
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {int kvm; } ;
struct TYPE_3__ {unsigned long ext_params2; } ;
struct TYPE_4__ {TYPE_1__ ext; } ;
struct kvm_s390_irq {int type; TYPE_2__ u; } ;
struct kvm_s390_interrupt {unsigned long parm64; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_s390_irq*) ;
 int FUNC_2 (int ,struct kvm_s390_interrupt*) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_2, bool VAR_3,
          unsigned long VAR_4)
{
 struct kvm_s390_interrupt VAR_5;
 struct kvm_s390_irq VAR_6;

 if (VAR_3) {
  VAR_6.u.ext.ext_params2 = VAR_4;
  VAR_6.type = VAR_1;
  FUNC_0(FUNC_1(VAR_2, &VAR_6));
 } else {
  VAR_5.type = VAR_0;
  VAR_5.parm64 = VAR_4;
  FUNC_0(FUNC_2(VAR_2->kvm, &VAR_5));
 }
}
