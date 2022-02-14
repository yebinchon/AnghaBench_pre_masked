
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_pending; int xive_esc_on; scalar_t__ ceded; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct kvm_vcpu *VAR_3 = VAR_2;

 VAR_3->arch.irq_pending = 1;
 FUNC_1();
 if (VAR_3->arch.ceded)
  FUNC_0(VAR_3);
 VAR_3->arch.xive_esc_on = 0;


 FUNC_2();

 return VAR_0;
}
