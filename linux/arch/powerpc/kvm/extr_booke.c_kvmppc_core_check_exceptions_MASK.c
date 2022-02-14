
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long pending_exceptions; TYPE_1__* shared; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int int_pending; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned long) ;
 unsigned int FUNC_1 (unsigned long*,int,unsigned int) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_2)
{
 unsigned long *VAR_3 = &VAR_2->arch.pending_exceptions;
 unsigned int VAR_4;

 VAR_4 = FUNC_0(*VAR_3);
 while (VAR_4 < VAR_1) {
  if (FUNC_2(VAR_2, VAR_4))
   break;

  VAR_4 = FUNC_1(VAR_3,
                           VAR_0 * sizeof(*VAR_3),
                           VAR_4 + 1);
 }


 VAR_2->arch.shared->int_pending = !!*VAR_3;
}
