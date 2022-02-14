
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int table ;
struct sys_reg_params {int dummy; } ;
struct sys_reg_desc {int dummy; } ;


 struct sys_reg_desc const* FUNC_0 (void*,struct sys_reg_desc const*,unsigned int,int,int ) ;
 int VAR_0 ;
 unsigned long FUNC_1 (struct sys_reg_params const*) ;

__attribute__((used)) static const struct sys_reg_desc *FUNC_2(const struct sys_reg_params *VAR_1,
      const struct sys_reg_desc VAR_2[],
      unsigned int VAR_3)
{
 unsigned long VAR_4 = FUNC_1(VAR_1);

 return FUNC_0((void *)VAR_4, VAR_2, VAR_3, sizeof(VAR_2[0]), VAR_0);
}
