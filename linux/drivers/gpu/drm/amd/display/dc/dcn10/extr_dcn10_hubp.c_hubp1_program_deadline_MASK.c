
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hubp {int dummy; } ;
struct dcn10_hubp {int dummy; } ;
struct _vcs_dpi_display_ttu_regs_st {int qos_ramp_disable_cur0; int qos_level_fixed_cur0; int refcyc_per_req_delivery_cur0; int qos_ramp_disable_c; int qos_level_fixed_c; int refcyc_per_req_delivery_c; int qos_ramp_disable_l; int qos_level_fixed_l; int refcyc_per_req_delivery_l; int qos_level_high_wm; int qos_level_low_wm; } ;
struct _vcs_dpi_display_dlg_regs_st {int refcyc_per_meta_chunk_nom_c; int dst_y_per_meta_row_nom_c; int refcyc_per_pte_group_nom_c; int dst_y_per_pte_row_nom_c; int refcyc_per_pte_group_vblank_c; int refcyc_per_line_delivery_c; int refcyc_per_line_delivery_l; int refcyc_per_meta_chunk_nom_l; int dst_y_per_meta_row_nom_l; int refcyc_per_pte_group_nom_l; int dst_y_per_pte_row_nom_l; int refcyc_per_pte_group_vblank_l; int ref_freq_to_pix_freq; int dst_y_after_scaler; int refcyc_x_after_scaler; int refcyc_per_htotal; int min_dst_y_next_start; int dlg_vblank_end; int refcyc_h_blank_end; } ;


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
 int VAR_40 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 struct dcn10_hubp* FUNC_4 (struct hubp*) ;
 int VAR_41 ;
 int VAR_42 ;

void FUNC_5(
  struct hubp *VAR_43,
  struct _vcs_dpi_display_dlg_regs_st *VAR_44,
  struct _vcs_dpi_display_ttu_regs_st *VAR_45)
{
 struct dcn10_hubp *VAR_46 = FUNC_4(VAR_43);


 FUNC_2(VAR_0, 0,
  VAR_28, VAR_44->refcyc_h_blank_end,
  VAR_6, VAR_44->dlg_vblank_end);

 FUNC_1(VAR_1, 0,
  VAR_14, VAR_44->min_dst_y_next_start);

 FUNC_1(VAR_8, 0,
  VAR_29, VAR_44->refcyc_per_htotal);

 FUNC_2(VAR_7, 0,
  VAR_39, VAR_44->refcyc_x_after_scaler,
  VAR_9, VAR_44->dst_y_after_scaler);

 FUNC_1(VAR_40, 0,
  VAR_40, VAR_44->ref_freq_to_pix_freq);


 FUNC_1(VAR_41, 0,
  VAR_37, VAR_44->refcyc_per_pte_group_vblank_l);

 if (FUNC_0(VAR_15))
  FUNC_1(VAR_15, 0,
   VAR_13, VAR_44->dst_y_per_pte_row_nom_l);

 if (FUNC_0(VAR_16))
  FUNC_1(VAR_16, 0,
   VAR_35, VAR_44->refcyc_per_pte_group_nom_l);

 FUNC_1(VAR_19, 0,
  VAR_11, VAR_44->dst_y_per_meta_row_nom_l);

 FUNC_1(VAR_20, 0,
  VAR_33, VAR_44->refcyc_per_meta_chunk_nom_l);

 FUNC_2(VAR_23, 0,
  VAR_31, VAR_44->refcyc_per_line_delivery_l,
  VAR_30, VAR_44->refcyc_per_line_delivery_c);

 FUNC_1(VAR_42, 0,
  VAR_36, VAR_44->refcyc_per_pte_group_vblank_c);

 if (FUNC_0(VAR_17))
  FUNC_1(VAR_17, 0,
   VAR_12, VAR_44->dst_y_per_pte_row_nom_c);

 if (FUNC_0(VAR_18))
  FUNC_1(VAR_18, 0,
   VAR_34, VAR_44->refcyc_per_pte_group_nom_c);

 FUNC_1(VAR_21, 0,
  VAR_10, VAR_44->dst_y_per_meta_row_nom_c);

 FUNC_1(VAR_22, 0,
  VAR_32, VAR_44->refcyc_per_meta_chunk_nom_c);


 FUNC_2(VAR_5, 0,
  VAR_26, VAR_45->qos_level_low_wm,
  VAR_25, VAR_45->qos_level_high_wm);




 FUNC_3(VAR_3, 0,
  VAR_38, VAR_45->refcyc_per_req_delivery_l,
  VAR_24, VAR_45->qos_level_fixed_l,
  VAR_27, VAR_45->qos_ramp_disable_l);

 FUNC_3(VAR_4, 0,
  VAR_38, VAR_45->refcyc_per_req_delivery_c,
  VAR_24, VAR_45->qos_level_fixed_c,
  VAR_27, VAR_45->qos_ramp_disable_c);

 FUNC_3(VAR_2, 0,
  VAR_38, VAR_45->refcyc_per_req_delivery_cur0,
  VAR_24, VAR_45->qos_level_fixed_cur0,
  VAR_27, VAR_45->qos_ramp_disable_cur0);
}
