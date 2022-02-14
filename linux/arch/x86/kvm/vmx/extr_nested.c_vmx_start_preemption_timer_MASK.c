
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int preemption_timer; } ;
struct vcpu_vmx {TYPE_1__ nested; } ;
struct TYPE_5__ {int virtual_tsc_khz; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_6__ {int vmx_preemption_timer_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 TYPE_3__* FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int) ;
 struct vcpu_vmx* FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_2)
{
 u64 VAR_3 = FUNC_1(VAR_2)->vmx_preemption_timer_value;
 struct vcpu_vmx *VAR_4 = FUNC_4(VAR_2);





 if (VAR_3 == 0) {
  FUNC_5(&VAR_4->nested.preemption_timer);
  return;
 }

 if (VAR_2->arch.virtual_tsc_khz == 0)
  return;

 VAR_3 <<= VAR_1;
 VAR_3 *= 1000000;
 FUNC_0(VAR_3, VAR_2->arch.virtual_tsc_khz);
 FUNC_2(&VAR_4->nested.preemption_timer,
        FUNC_3(VAR_3), VAR_0);
}
