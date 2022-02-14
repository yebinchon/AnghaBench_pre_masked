
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hv_hypercall; } ;
struct TYPE_4__ {TYPE_1__ hyperv; } ;
struct kvm {TYPE_2__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

bool FUNC_1(struct kvm *VAR_1)
{
 return FUNC_0(VAR_1->arch.hyperv.hv_hypercall) & VAR_0;
}
