
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int msr_val; } ;
struct TYPE_4__ {TYPE_1__ apf; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;

bool FUNC_1(struct kvm_vcpu *VAR_1)
{
 if (!(VAR_1->arch.apf.msr_val & VAR_0))
  return 1;
 else
  return FUNC_0(VAR_1);
}
