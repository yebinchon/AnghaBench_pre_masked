
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nps_host_reg_mtm_cfg {int ten; int value; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(int VAR_0)
{
 struct nps_host_reg_mtm_cfg VAR_1;

 if (FUNC_1(VAR_0) == 0)
  return 1;


 VAR_1.value = FUNC_2(FUNC_0(VAR_0));
 VAR_1.ten |= (1 << (FUNC_1(VAR_0)));
 FUNC_3(VAR_1.value, FUNC_0(VAR_0));

 return 0;
}
