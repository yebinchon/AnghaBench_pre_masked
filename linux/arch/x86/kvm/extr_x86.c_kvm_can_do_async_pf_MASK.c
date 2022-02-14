
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pending; } ;
struct TYPE_5__ {TYPE_1__ exception; } ;
struct kvm_vcpu {int kvm; TYPE_2__ arch; } ;
struct TYPE_6__ {int (* interrupt_allowed ) (struct kvm_vcpu*) ;} ;


 int FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* VAR_0 ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_5 (int) ;

bool FUNC_6(struct kvm_vcpu *VAR_1)
{
 if (FUNC_5(!FUNC_3(VAR_1) ||
       FUNC_1(VAR_1) ||
       VAR_1->arch.exception.pending))
  return 0;

 if (FUNC_2(VAR_1->kvm) && !FUNC_0(VAR_1))
  return 0;





 return VAR_0->interrupt_allowed(VAR_1);
}
