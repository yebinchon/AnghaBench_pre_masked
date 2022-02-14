
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sys_reg_desc {size_t reg; int val; } ;
struct TYPE_3__ {int * dbg_wvr; } ;
struct TYPE_4__ {TYPE_1__ vcpu_debug_state; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;



__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_0,
        const struct sys_reg_desc *VAR_1)
{
 VAR_0->arch.vcpu_debug_state.dbg_wvr[VAR_1->reg] = VAR_1->val;
}
