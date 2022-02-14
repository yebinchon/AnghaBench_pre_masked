
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_interrupt {scalar_t__ irq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,struct kvm_interrupt*) ;

int FUNC_3(struct kvm_vcpu *VAR_1, struct kvm_interrupt *VAR_2)
{
 if (VAR_2->irq == VAR_0) {
  FUNC_1(VAR_1);
  return 0;
 }

 FUNC_2(VAR_1, VAR_2);

 FUNC_0(VAR_1);

 return 0;
}
