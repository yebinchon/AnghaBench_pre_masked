
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct vmcs12 {int cpu_based_vm_exec_control; scalar_t__ tsc_offset; } ;
struct TYPE_2__ {scalar_t__ tsc_offset; } ;
struct kvm_vcpu {TYPE_1__ arch; int vcpu_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vmcs12* FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static u64 FUNC_4(struct kvm_vcpu *VAR_2, u64 VAR_3)
{
 struct vmcs12 *VAR_4 = FUNC_0(VAR_2);
 u64 VAR_5 = 0;







 if (FUNC_1(VAR_2) &&
     (VAR_4->cpu_based_vm_exec_control & VAR_0))
  VAR_5 = VAR_4->tsc_offset;

 FUNC_2(VAR_2->vcpu_id,
       VAR_2->arch.tsc_offset - VAR_5,
       VAR_3);
 FUNC_3(VAR_1, VAR_3 + VAR_5);
 return VAR_3 + VAR_5;
}
