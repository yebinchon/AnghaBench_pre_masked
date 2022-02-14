
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {unsigned long (* get_rflags ) (struct kvm_vcpu*) ;int (* skip_emulated_instruction ) (struct kvm_vcpu*) ;} ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 TYPE_1__* VAR_1 ;
 unsigned long FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (unsigned long) ;

int FUNC_4(struct kvm_vcpu *VAR_2)
{
 unsigned long VAR_3 = VAR_1->get_rflags(VAR_2);
 int VAR_4;

 VAR_4 = VAR_1->skip_emulated_instruction(VAR_2);
 if (FUNC_3(!VAR_4))
  return 0;
 if (FUNC_3(VAR_3 & VAR_0))
  VAR_4 = FUNC_0(VAR_2);
 return VAR_4;
}
