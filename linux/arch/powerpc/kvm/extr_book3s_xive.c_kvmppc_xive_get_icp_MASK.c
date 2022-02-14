
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kvmppc_xive_vcpu {scalar_t__ mfrr; scalar_t__ cppr; } ;
struct TYPE_2__ {struct kvmppc_xive_vcpu* xive_vcpu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

u64 FUNC_0(struct kvm_vcpu *VAR_3)
{
 struct kvmppc_xive_vcpu *VAR_4 = VAR_3->arch.xive_vcpu;

 if (!VAR_4)
  return 0;


 return (u64)VAR_4->cppr << VAR_0 |
        (u64)VAR_4->mfrr << VAR_1 |
        (u64)0xff << VAR_2;
}
