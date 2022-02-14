
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_6__ {TYPE_2__* vmcb; scalar_t__ nmi_singlestep; } ;
struct TYPE_4__ {unsigned long rflags; } ;
struct TYPE_5__ {TYPE_1__ save; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_3__* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_2, unsigned long VAR_3)
{
 if (FUNC_0(VAR_2)->nmi_singlestep)
  VAR_3 |= (VAR_1 | VAR_0);






 FUNC_0(VAR_2)->vmcb->save.rflags = VAR_3;
}
