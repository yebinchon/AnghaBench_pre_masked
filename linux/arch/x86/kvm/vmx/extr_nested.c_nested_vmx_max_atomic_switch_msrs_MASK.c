
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int misc_high; int misc_low; } ;
struct TYPE_4__ {TYPE_1__ msrs; } ;
struct vcpu_vmx {TYPE_2__ nested; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 struct vcpu_vmx* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(struct kvm_vcpu *VAR_1)
{
 struct vcpu_vmx *VAR_2 = FUNC_0(VAR_1);
 u64 VAR_3 = FUNC_1(VAR_2->nested.msrs.misc_low,
           VAR_2->nested.msrs.misc_high);

 return (FUNC_2(VAR_3) + 1) * VAR_0;
}
