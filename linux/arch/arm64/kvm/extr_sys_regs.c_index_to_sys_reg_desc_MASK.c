
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sys_reg_params {int dummy; } ;
struct sys_reg_desc {scalar_t__ get_user; scalar_t__ reg; } ;
struct TYPE_2__ {int target; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sys_reg_desc* FUNC_1 (struct sys_reg_params*,int ,int ) ;
 struct sys_reg_desc* FUNC_2 (int,struct sys_reg_params*,struct sys_reg_desc const*,size_t) ;
 struct sys_reg_desc* FUNC_3 (int ,int,size_t*) ;
 int VAR_2 ;

__attribute__((used)) static const struct sys_reg_desc *FUNC_4(struct kvm_vcpu *VAR_3,
          u64 VAR_4)
{
 size_t VAR_5;
 const struct sys_reg_desc *VAR_6, *VAR_7;
 struct sys_reg_params VAR_8;


 if ((VAR_4 & VAR_1) != VAR_0)
  return ((void*)0);

 VAR_6 = FUNC_3(VAR_3->arch.target, 1, &VAR_5);
 VAR_7 = FUNC_2(VAR_4, &VAR_8, VAR_6, VAR_5);
 if (!VAR_7)
  VAR_7 = FUNC_1(&VAR_8, VAR_2, FUNC_0(VAR_2));


 if (VAR_7 && !(VAR_7->reg || VAR_7->get_user))
  VAR_7 = ((void*)0);

 return VAR_7;
}
