
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxd2880_tnrdmd_diver_create_param {int stationary_use; int is_cxd2881gg; int xosc_i_sub; int ts_output_if; int en_internal_ldo; int xosc_i_main; scalar_t__ xosc_cap_main; } ;
struct cxd2880_tnrdmd_create_param {int stationary_use; int is_cxd2881gg; int xosc_i; scalar_t__ xosc_cap; int xtal_share_type; int ts_output_if; int en_internal_ldo; } ;
struct cxd2880_tnrdmd {int srl_ts_clk_mod_cnts; int en_fef_intmtnt_base; int en_fef_intmtnt_lite; int * lna_thrs_tbl_cable; int * lna_thrs_tbl_air; int * rf_lvl_cmpstn; struct cxd2880_tnrdmd* diver_sub; int diver_mode; struct cxd2880_io* io; struct cxd2880_tnrdmd_create_param create_param; } ;
struct cxd2880_io {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,int ,int) ;

int FUNC_1(struct cxd2880_tnrdmd
    *VAR_5,
    struct cxd2880_io *VAR_6,
    struct cxd2880_tnrdmd *VAR_7,
    struct cxd2880_io *VAR_8,
    struct
    cxd2880_tnrdmd_diver_create_param
    *VAR_9)
{
 struct cxd2880_tnrdmd_create_param *VAR_10, *VAR_11;

 if (!VAR_5 || !VAR_6 || !VAR_7 || !VAR_8 ||
     !VAR_9)
  return -VAR_4;

 FUNC_0(VAR_5, 0, sizeof(struct cxd2880_tnrdmd));
 FUNC_0(VAR_7, 0, sizeof(struct cxd2880_tnrdmd));

 VAR_10 = &VAR_5->create_param;
 VAR_11 = &VAR_7->create_param;

 VAR_5->io = VAR_6;
 VAR_5->diver_mode = VAR_0;
 VAR_5->diver_sub = VAR_7;
 VAR_5->create_param.en_internal_ldo =
     VAR_9->en_internal_ldo;

 VAR_10->ts_output_if = VAR_9->ts_output_if;
 VAR_10->xtal_share_type = VAR_2;
 VAR_10->xosc_cap = VAR_9->xosc_cap_main;
 VAR_10->xosc_i = VAR_9->xosc_i_main;
 VAR_10->is_cxd2881gg = VAR_9->is_cxd2881gg;
 VAR_10->stationary_use = VAR_9->stationary_use;

 VAR_7->io = VAR_8;
 VAR_7->diver_mode = VAR_1;
 VAR_7->diver_sub = ((void*)0);

 VAR_11->en_internal_ldo = VAR_9->en_internal_ldo;
 VAR_11->ts_output_if = VAR_9->ts_output_if;
 VAR_11->xtal_share_type = VAR_3;
 VAR_11->xosc_cap = 0;
 VAR_11->xosc_i = VAR_9->xosc_i_sub;
 VAR_11->is_cxd2881gg = VAR_9->is_cxd2881gg;
 VAR_11->stationary_use = VAR_9->stationary_use;

 VAR_5->srl_ts_clk_mod_cnts = 1;
 VAR_5->en_fef_intmtnt_base = 1;
 VAR_5->en_fef_intmtnt_lite = 1;
 VAR_5->rf_lvl_cmpstn = ((void*)0);
 VAR_5->lna_thrs_tbl_air = ((void*)0);
 VAR_5->lna_thrs_tbl_cable = ((void*)0);

 VAR_7->srl_ts_clk_mod_cnts = 1;
 VAR_7->en_fef_intmtnt_base = 1;
 VAR_7->en_fef_intmtnt_lite = 1;
 VAR_7->rf_lvl_cmpstn = ((void*)0);
 VAR_7->lna_thrs_tbl_air = ((void*)0);
 VAR_7->lna_thrs_tbl_cable = ((void*)0);

 return 0;
}
