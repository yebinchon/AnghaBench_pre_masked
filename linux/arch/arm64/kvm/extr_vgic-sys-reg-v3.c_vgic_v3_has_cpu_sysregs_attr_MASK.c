
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sys_reg_params {int regval; int is_write; int is_aarch32; int is_32bit; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,struct sys_reg_params*,int ,int ) ;
 int VAR_3 ;

int FUNC_2(struct kvm_vcpu *VAR_4, bool VAR_5, u64 VAR_6,
    u64 *VAR_7)
{
 struct sys_reg_params VAR_8;
 u64 VAR_9 = (VAR_6 & VAR_1) | VAR_2;

 VAR_8.regval = *VAR_7;
 VAR_8.is_write = VAR_5;
 VAR_8.is_aarch32 = 0;
 VAR_8.is_32bit = 0;

 if (FUNC_1(VAR_9, &VAR_8, VAR_3,
         FUNC_0(VAR_3)))
  return 0;

 return -VAR_0;
}
