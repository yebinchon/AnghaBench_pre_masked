
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct vmcb_control_area {int exit_info_2; int exit_info_1; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_4__ {TYPE_1__* vmcb; } ;
struct TYPE_3__ {struct vmcb_control_area control; } ;


 TYPE_2__* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_0, u64 *VAR_1, u64 *VAR_2)
{
 struct vmcb_control_area *VAR_3 = &FUNC_0(VAR_0)->vmcb->control;

 *VAR_1 = VAR_3->exit_info_1;
 *VAR_2 = VAR_3->exit_info_2;
}
