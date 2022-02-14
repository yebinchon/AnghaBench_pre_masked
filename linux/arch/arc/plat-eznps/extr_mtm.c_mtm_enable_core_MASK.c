
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nps_host_reg_mtm_cfg {int ten; int value; } ;
struct nps_host_reg_aux_mt_ctrl {int hsen; int mten; scalar_t__ value; int hs_cnt; } ;
struct nps_host_reg_aux_dpc {int ien; int men; scalar_t__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int ,scalar_t__) ;

void FUNC_8(unsigned int VAR_4)
{
 int VAR_5;
 struct nps_host_reg_aux_mt_ctrl VAR_6;
 struct nps_host_reg_mtm_cfg VAR_7;
 struct nps_host_reg_aux_dpc VAR_8;
 VAR_8.ien = 1;
 VAR_8.men = 1;
 FUNC_7(VAR_0, VAR_8.value);

 if (FUNC_1(VAR_4) != 0)
  return;


 FUNC_5(VAR_4);


 VAR_7.value = FUNC_3(FUNC_0(VAR_4));
 VAR_7.ten = 1;
 FUNC_4(VAR_7.value, FUNC_0(VAR_4));


 for (VAR_5 = 1; VAR_5 < VAR_2; VAR_5++)
  FUNC_6(VAR_4 + VAR_5);



 VAR_6.value = 0;
 VAR_6.hsen = 1;
 VAR_6.hs_cnt = VAR_3;
 VAR_6.mten = 1;
 FUNC_7(VAR_1, VAR_6.value);






 FUNC_2();
}
