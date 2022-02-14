
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ enlightened_vmcs_enabled; } ;
struct vcpu_vmx {TYPE_1__ nested; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 struct vcpu_vmx* FUNC_0 (struct kvm_vcpu*) ;

uint16_t FUNC_1(struct kvm_vcpu *VAR_1)
{
       struct vcpu_vmx *VAR_2 = FUNC_0(VAR_1);






       if (VAR_2->nested.enlightened_vmcs_enabled)
               return (VAR_0 << 8) | 1;

       return 0;
}
