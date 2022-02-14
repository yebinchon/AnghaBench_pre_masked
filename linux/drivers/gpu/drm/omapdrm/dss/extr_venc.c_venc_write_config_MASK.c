
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_device {int dummy; } ;
struct venc_config {int sync_ctrl; int f_control; int gen_ctrl; int tvdetgp_int_start_stop_y; int tvdetgp_int_start_stop_x; int htrigger_vtrigger; int ln_sel; int line21; int x_color; int hfltr_ctrl; int vidout_ctrl; int fid_ext_start_y__fid_ext_offset_y; int fid_int_offset_y__fid_ext_start_x; int fid_int_start_x__fid_int_start_y; int avid_start_stop_y; int avid_start_stop_x; int vs_ext_stop_y; int vs_ext_stop_x__vs_ext_start_y; int vs_int_stop_y__vs_ext_start_x; int vs_int_stop_x__vs_int_start_y; int vs_int_start_x; int hs_ext_start_stop_x; int hs_int_start_stop_x; int lal__phase_reset; int flen__fal; int savid__eavid; int l21__wc_ctl; int s_carr; int bstamp_wss_data; int m_control; int blank_level; int black_level; int gain_y; int gain_v; int gain_u; int c_phase; int cc_carr_wss_carr; int flens; int llen; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_1 (struct venc_device*,int ) ;
 int FUNC_2 (struct venc_device*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct venc_device *VAR_40,
         const struct venc_config *VAR_41)
{
 FUNC_0("write venc conf\n");

 FUNC_2(VAR_40, VAR_25, VAR_41->llen);
 FUNC_2(VAR_40, VAR_11, VAR_41->flens);
 FUNC_2(VAR_40, VAR_5, VAR_41->cc_carr_wss_carr);
 FUNC_2(VAR_40, VAR_6, VAR_41->c_phase);
 FUNC_2(VAR_40, VAR_14, VAR_41->gain_u);
 FUNC_2(VAR_40, VAR_15, VAR_41->gain_v);
 FUNC_2(VAR_40, VAR_16, VAR_41->gain_y);
 FUNC_2(VAR_40, VAR_2, VAR_41->black_level);
 FUNC_2(VAR_40, VAR_3, VAR_41->blank_level);
 FUNC_2(VAR_40, VAR_27, VAR_41->m_control);
 FUNC_2(VAR_40, VAR_4, VAR_41->bstamp_wss_data);
 FUNC_2(VAR_40, VAR_30, VAR_41->s_carr);
 FUNC_2(VAR_40, VAR_22, VAR_41->l21__wc_ctl);
 FUNC_2(VAR_40, VAR_28, VAR_41->savid__eavid);
 FUNC_2(VAR_40, VAR_12, VAR_41->flen__fal);
 FUNC_2(VAR_40, VAR_23, VAR_41->lal__phase_reset);
 FUNC_2(VAR_40, VAR_20,
         VAR_41->hs_int_start_stop_x);
 FUNC_2(VAR_40, VAR_19,
         VAR_41->hs_ext_start_stop_x);
 FUNC_2(VAR_40, VAR_36, VAR_41->vs_int_start_x);
 FUNC_2(VAR_40, VAR_37,
         VAR_41->vs_int_stop_x__vs_int_start_y);
 FUNC_2(VAR_40, VAR_38,
         VAR_41->vs_int_stop_y__vs_ext_start_x);
 FUNC_2(VAR_40, VAR_34,
         VAR_41->vs_ext_stop_x__vs_ext_start_y);
 FUNC_2(VAR_40, VAR_35, VAR_41->vs_ext_stop_y);
 FUNC_2(VAR_40, VAR_0, VAR_41->avid_start_stop_x);
 FUNC_2(VAR_40, VAR_1, VAR_41->avid_start_stop_y);
 FUNC_2(VAR_40, VAR_10,
         VAR_41->fid_int_start_x__fid_int_start_y);
 FUNC_2(VAR_40, VAR_9,
         VAR_41->fid_int_offset_y__fid_ext_start_x);
 FUNC_2(VAR_40, VAR_8,
         VAR_41->fid_ext_start_y__fid_ext_offset_y);

 FUNC_2(VAR_40, VAR_7,
         FUNC_1(VAR_40, VAR_7));
 FUNC_2(VAR_40, VAR_33, VAR_41->vidout_ctrl);
 FUNC_2(VAR_40, VAR_18, VAR_41->hfltr_ctrl);
 FUNC_2(VAR_40, VAR_39, VAR_41->x_color);
 FUNC_2(VAR_40, VAR_24, VAR_41->line21);
 FUNC_2(VAR_40, VAR_26, VAR_41->ln_sel);
 FUNC_2(VAR_40, VAR_21, VAR_41->htrigger_vtrigger);
 FUNC_2(VAR_40, VAR_31,
         VAR_41->tvdetgp_int_start_stop_x);
 FUNC_2(VAR_40, VAR_32,
         VAR_41->tvdetgp_int_start_stop_y);
 FUNC_2(VAR_40, VAR_17, VAR_41->gen_ctrl);
 FUNC_2(VAR_40, VAR_13, VAR_41->f_control);
 FUNC_2(VAR_40, VAR_29, VAR_41->sync_ctrl);
}
