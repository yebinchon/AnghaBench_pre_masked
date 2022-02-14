
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union ctlreg0 {int lap; int val; } ;
union asce {scalar_t__ p; } ;
struct TYPE_5__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
typedef int psw_t ;
struct TYPE_6__ {scalar_t__ dat; } ;
struct TYPE_4__ {int gpsw; int * gcr; } ;


 TYPE_3__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_0,
       const union asce VAR_1)
{
 union ctlreg0 VAR_2 = {.val = VAR_0->arch.sie_block->gcr[0]};
 psw_t *VAR_3 = &VAR_0->arch.sie_block->gpsw;

 if (!VAR_2)
  return 0;
 if (FUNC_0(*VAR_3).dat && VAR_1.p)
  return 0;
 return 1;
}
