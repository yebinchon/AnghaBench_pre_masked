
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_interrupt {scalar_t__ irq; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,unsigned int) ;

void FUNC_1(struct kvm_vcpu *VAR_3,
                                struct kvm_interrupt *VAR_4)
{
 unsigned int VAR_5 = VAR_0;

 if (VAR_4->irq == VAR_2)
  VAR_5 = VAR_1;

 FUNC_0(VAR_3, VAR_5);
}
