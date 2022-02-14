
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hv_vapic; } ;
struct TYPE_4__ {TYPE_1__ hyperv; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct kvm_vcpu *VAR_1)
{
 return VAR_1->arch.hyperv.hv_vapic & VAR_0;
}
