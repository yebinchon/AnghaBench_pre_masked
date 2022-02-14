
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct powerdomain {int prcm_offs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct powerdomain *VAR_1, u8 VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_2);

 return FUNC_0(VAR_1->prcm_offs,
          VAR_0, VAR_3);
}
