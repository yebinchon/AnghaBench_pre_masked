
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sys_reg_desc {int dummy; } ;
struct TYPE_2__ {int target; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_run {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct sys_reg_desc* FUNC_1 (int ,int,size_t*) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int ,struct sys_reg_desc const*,size_t) ;

int FUNC_3(struct kvm_vcpu *VAR_1, struct kvm_run *VAR_2)
{
 const struct sys_reg_desc *VAR_3;
 size_t VAR_4;

 VAR_3 = FUNC_1(VAR_1->arch.target, 0, &VAR_4);
 return FUNC_2(VAR_1,
    VAR_0, FUNC_0(VAR_0),
    VAR_3, VAR_4);
}
