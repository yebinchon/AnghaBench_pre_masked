
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct powerdomain {int pwrstctrl_offs; int prcm_offs; int * mem_ret_mask; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,size_t,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct powerdomain *VAR_1, u8 VAR_2,
     u8 VAR_3)
{
 u32 VAR_4;

 VAR_4 = VAR_1->mem_ret_mask[VAR_2];
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(VAR_4, (VAR_3 << FUNC_0(VAR_4)),
    VAR_1->prcm_offs, VAR_1->pwrstctrl_offs);

 return 0;
}
