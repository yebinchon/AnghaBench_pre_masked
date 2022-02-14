
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long pending_exceptions; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (int ,unsigned long*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct kvm_vcpu*,unsigned long,unsigned long) ;

void FUNC_3(struct kvm_vcpu *VAR_0,
       unsigned int VAR_1)
{
 unsigned long VAR_2 = VAR_0->arch.pending_exceptions;

 FUNC_0(FUNC_1(VAR_1),
    &VAR_0->arch.pending_exceptions);

 FUNC_2(VAR_0, VAR_0->arch.pending_exceptions,
      VAR_2);
}
