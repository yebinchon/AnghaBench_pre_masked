
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void** regs; int regs_avail; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef enum kvm_reg { ____Placeholder_kvm_reg } kvm_reg ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int,unsigned long*) ;
 int VAR_2 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_3, enum kvm_reg VAR_4)
{
 FUNC_0(VAR_4, (unsigned long *)&VAR_3->arch.regs_avail);
 switch (VAR_4) {
 case 128:
  VAR_3->arch.regs[128] = FUNC_2(VAR_1);
  break;
 case 129:
  VAR_3->arch.regs[129] = FUNC_2(VAR_0);
  break;
 case 130:
  if (VAR_2)
   FUNC_1(VAR_3);
  break;
 default:
  break;
 }
}
