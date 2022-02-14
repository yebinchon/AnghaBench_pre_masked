
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmcs12 {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {scalar_t__ vpid02; } ;
struct TYPE_4__ {TYPE_1__ nested; } ;


 struct vmcs12* FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct vmcs12*) ;
 scalar_t__ FUNC_2 (struct vmcs12*) ;
 TYPE_2__* FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static bool FUNC_4(struct kvm_vcpu *VAR_0)
{
 struct vmcs12 *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1) ||
        (FUNC_2(VAR_1) && FUNC_3(VAR_0)->nested.vpid02);
}
