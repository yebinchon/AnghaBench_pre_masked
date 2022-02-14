
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_reg_desc {int val; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_1, const struct sys_reg_desc *VAR_2)
{
 ((struct sys_reg_desc *)VAR_2)->val = FUNC_0(VAR_0);
}
