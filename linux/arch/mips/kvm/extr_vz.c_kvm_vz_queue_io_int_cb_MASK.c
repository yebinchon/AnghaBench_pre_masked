
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_mips_interrupt {scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_3,
       struct kvm_mips_interrupt *VAR_4)
{
 int VAR_5 = (int)VAR_4->irq;





 switch (VAR_5) {
 case 2:
  FUNC_0(VAR_3, VAR_0);
  break;

 case 3:
  FUNC_0(VAR_3, VAR_1);
  break;

 case 4:
  FUNC_0(VAR_3, VAR_2);
  break;

 default:
  break;
 }

}
