
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxd2880_tnrdmd_create_param {int dummy; } ;
struct cxd2880_tnrdmd {int srl_ts_clk_mod_cnts; int en_fef_intmtnt_base; int en_fef_intmtnt_lite; int cancel; int * lna_thrs_tbl_cable; int * lna_thrs_tbl_air; int * rf_lvl_cmpstn; int * diver_sub; int diver_mode; struct cxd2880_tnrdmd_create_param create_param; struct cxd2880_io* io; } ;
struct cxd2880_io {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct cxd2880_tnrdmd*,int ,int) ;

int FUNC_2(struct cxd2880_tnrdmd *VAR_2,
     struct cxd2880_io *VAR_3,
     struct cxd2880_tnrdmd_create_param
     *VAR_4)
{
 if (!VAR_2 || !VAR_3 || !VAR_4)
  return -VAR_1;

 FUNC_1(VAR_2, 0, sizeof(struct cxd2880_tnrdmd));

 VAR_2->io = VAR_3;
 VAR_2->create_param = *VAR_4;

 VAR_2->diver_mode = VAR_0;
 VAR_2->diver_sub = ((void*)0);

 VAR_2->srl_ts_clk_mod_cnts = 1;
 VAR_2->en_fef_intmtnt_base = 1;
 VAR_2->en_fef_intmtnt_lite = 1;
 VAR_2->rf_lvl_cmpstn = ((void*)0);
 VAR_2->lna_thrs_tbl_air = ((void*)0);
 VAR_2->lna_thrs_tbl_cable = ((void*)0);
 FUNC_0(&VAR_2->cancel, 0);

 return 0;
}
