
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_type; int mpic; int dec_timer; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;





 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 () ;

void FUNC_8(struct kvm_vcpu *VAR_0)
{

 FUNC_0(&VAR_0->arch.dec_timer);

 FUNC_3(VAR_0);

 switch (VAR_0->arch.irq_type) {
 case 130:
  FUNC_2(VAR_0->arch.mpic, VAR_0);
  break;
 case 129:
  if (FUNC_7())
   FUNC_5(VAR_0);
  else
   FUNC_4(VAR_0);
  break;
 case 128:
  FUNC_6(VAR_0);
  break;
 }

 FUNC_1(VAR_0);
}
