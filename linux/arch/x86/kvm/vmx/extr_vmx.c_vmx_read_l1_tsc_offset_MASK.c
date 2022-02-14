
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct vmcs12 {int cpu_based_vm_exec_control; scalar_t__ tsc_offset; } ;
struct TYPE_2__ {scalar_t__ tsc_offset; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 struct vmcs12* FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static u64 FUNC_2(struct kvm_vcpu *VAR_1)
{
 struct vmcs12 *VAR_2 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_1) &&
     (VAR_2->cpu_based_vm_exec_control & VAR_0))
  return VAR_1->arch.tsc_offset - VAR_2->tsc_offset;

 return VAR_1->arch.tsc_offset;
}
