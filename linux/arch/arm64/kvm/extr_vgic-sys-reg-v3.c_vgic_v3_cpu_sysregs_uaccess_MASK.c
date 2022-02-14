
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sys_reg_params {int regval; int is_write; int is_aarch32; int is_32bit; } ;
struct sys_reg_desc {int (* access ) (struct kvm_vcpu*,struct sys_reg_params*,struct sys_reg_desc const*) ;} ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sys_reg_desc* FUNC_1 (int,struct sys_reg_params*,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct kvm_vcpu*,struct sys_reg_params*,struct sys_reg_desc const*) ;

int FUNC_3(struct kvm_vcpu *VAR_5, bool VAR_6, u64 VAR_7,
    u64 *VAR_8)
{
 struct sys_reg_params VAR_9;
 const struct sys_reg_desc *VAR_10;
 u64 VAR_11 = (VAR_7 & VAR_2) | VAR_3;

 if (VAR_6)
  VAR_9.regval = *VAR_8;
 VAR_9.is_write = VAR_6;
 VAR_9.is_aarch32 = 0;
 VAR_9.is_32bit = 0;

 VAR_10 = FUNC_1(VAR_11, &VAR_9, VAR_4,
      FUNC_0(VAR_4));
 if (!VAR_10)
  return -VAR_1;

 if (!VAR_10->access(VAR_5, &VAR_9, VAR_10))
  return -VAR_0;

 if (!VAR_6)
  *VAR_8 = VAR_9.regval;

 return 0;
}
