
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sys_reg_params {int dummy; } ;
struct sys_reg_desc {int dummy; } ;


 struct sys_reg_desc const* FUNC_0 (struct sys_reg_params*,struct sys_reg_desc const*,unsigned int) ;
 int FUNC_1 (int ,struct sys_reg_params*) ;

const struct sys_reg_desc *FUNC_2(u64 VAR_0,
       struct sys_reg_params *VAR_1,
       const struct sys_reg_desc VAR_2[],
       unsigned int VAR_3)
{
 if (!FUNC_1(VAR_0, VAR_1))
  return ((void*)0);

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
