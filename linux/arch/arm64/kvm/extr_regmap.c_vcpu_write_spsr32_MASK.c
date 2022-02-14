
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sysregs_loaded_on_cpu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {unsigned long* spsr; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (unsigned long,int ) ;

void FUNC_4(struct kvm_vcpu *VAR_5, unsigned long VAR_6)
{
 int VAR_7 = FUNC_1(VAR_5);

 if (!VAR_5->arch.sysregs_loaded_on_cpu) {
  FUNC_0(VAR_5)->spsr[VAR_7] = VAR_6;
  return;
 }

 switch (VAR_7) {
 case 129:
  FUNC_3(VAR_6, VAR_0);
  break;
 case 132:
  FUNC_2(VAR_6, VAR_1);
  break;
 case 128:
  FUNC_2(VAR_6, VAR_4);
  break;
 case 130:
  FUNC_2(VAR_6, VAR_3);
  break;
 case 131:
  FUNC_2(VAR_6, VAR_2);
  break;
 }
}
