
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_mips_interrupt {scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct kvm_vcpu *VAR_6,
         struct kvm_mips_interrupt *VAR_7)
{
 int VAR_8 = (int)VAR_7->irq;






 switch (VAR_8) {
 case 2:
  FUNC_1(VAR_6->arch.cop0, (VAR_0));

  FUNC_0(VAR_6, VAR_3);
  break;

 case 3:
  FUNC_1(VAR_6->arch.cop0, (VAR_1));
  FUNC_0(VAR_6, VAR_4);
  break;

 case 4:
  FUNC_1(VAR_6->arch.cop0, (VAR_2));
  FUNC_0(VAR_6, VAR_5);
  break;

 default:
  break;
 }

}
