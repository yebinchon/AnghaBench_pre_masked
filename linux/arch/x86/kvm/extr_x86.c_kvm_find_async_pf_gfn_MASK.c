
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* gfns; } ;
struct TYPE_4__ {TYPE_1__ apf; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
typedef scalar_t__ gfn_t ;


 size_t FUNC_0 (struct kvm_vcpu*,scalar_t__) ;

bool FUNC_1(struct kvm_vcpu *VAR_0, gfn_t VAR_1)
{
 return VAR_0->arch.apf.gfns[FUNC_0(VAR_0, VAR_1)] == VAR_1;
}
