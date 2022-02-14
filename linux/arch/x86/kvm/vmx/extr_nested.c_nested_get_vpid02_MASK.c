
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ vpid02; } ;
struct vcpu_vmx {scalar_t__ vpid; TYPE_1__ nested; } ;
struct kvm_vcpu {int dummy; } ;


 struct vcpu_vmx* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static u16 FUNC_1(struct kvm_vcpu *VAR_0)
{
 struct vcpu_vmx *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->nested.vpid02 ? VAR_1->nested.vpid02 : VAR_1->vpid;
}
