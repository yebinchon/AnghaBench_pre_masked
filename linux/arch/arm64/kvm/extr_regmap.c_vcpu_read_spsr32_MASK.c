
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sysregs_loaded_on_cpu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {unsigned long* spsr; } ;


 int FUNC_0 () ;





 int VAR_0 ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_3 (struct kvm_vcpu const*) ;
 int FUNC_4 (struct kvm_vcpu const*) ;

unsigned long FUNC_5(const struct kvm_vcpu *VAR_5)
{
 int VAR_6 = FUNC_4(VAR_5);

 if (!VAR_5->arch.sysregs_loaded_on_cpu)
  return FUNC_3(VAR_5)->spsr[VAR_6];

 switch (VAR_6) {
 case 129:
  return FUNC_2(VAR_0);
 case 132:
  return FUNC_1(VAR_1);
 case 128:
  return FUNC_1(VAR_4);
 case 130:
  return FUNC_1(VAR_3);
 case 131:
  return FUNC_1(VAR_2);
 default:
  FUNC_0();
 }
}
