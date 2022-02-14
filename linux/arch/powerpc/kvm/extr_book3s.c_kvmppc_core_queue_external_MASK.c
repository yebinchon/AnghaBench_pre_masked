
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int external_oneshot; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_interrupt {scalar_t__ irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;

void FUNC_1(struct kvm_vcpu *VAR_2,
                                struct kvm_interrupt *VAR_3)
{
 if (VAR_3->irq == VAR_1)
  VAR_2->arch.external_oneshot = 1;

 FUNC_0(VAR_2, VAR_0);
}
