
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int msr_val; } ;
struct TYPE_4__ {int hv_vapic; } ;
struct TYPE_6__ {TYPE_2__ pv_eoi; TYPE_1__ hyperv; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;

bool FUNC_0(struct kvm_vcpu *VAR_2)
{
 if (!(VAR_2->arch.hyperv.hv_vapic & VAR_0))
  return 0;
 return VAR_2->arch.pv_eoi.msr_val & VAR_1;
}
