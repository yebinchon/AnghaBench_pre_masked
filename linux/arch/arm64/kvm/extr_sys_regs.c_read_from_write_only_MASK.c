
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_reg_params {int dummy; } ;
struct sys_reg_desc {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct sys_reg_params*) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_0,
     struct sys_reg_params *VAR_1,
     const struct sys_reg_desc *VAR_2)
{
 FUNC_0(1, "Unexpected sys_reg read to write-only register\n");
 FUNC_2(VAR_1);
 FUNC_1(VAR_0);
 return 0;
}
