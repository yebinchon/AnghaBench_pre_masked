
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hubp {int dummy; } ;
struct _vcs_dpi_display_rq_regs_st {int crq_expansion_mode; int mrq_expansion_mode; int prq_expansion_mode; int drq_expansion_mode; int plane1_base_address; } ;
struct _vcs_dpi_display_ttu_regs_st {int refcyc_per_req_delivery_pre_c; int qos_ramp_disable_c; int qos_level_fixed_c; int refcyc_per_req_delivery_c; int refcyc_per_req_delivery_pre_l; int qos_ramp_disable_l; int qos_level_fixed_l; int refcyc_per_req_delivery_l; int qos_level_flip; int min_ttu_vblank; int qos_level_high_wm; int qos_level_low_wm; } ;
struct _vcs_dpi_display_dlg_regs_st {int refcyc_per_meta_chunk_nom_c; int dst_y_per_meta_row_nom_c; int refcyc_per_pte_group_nom_c; int dst_y_per_pte_row_nom_c; int refcyc_per_meta_chunk_vblank_c; int refcyc_per_pte_group_vblank_c; int vratio_prefetch_c; int refcyc_per_line_delivery_c; int refcyc_per_line_delivery_l; int refcyc_per_line_delivery_pre_c; int refcyc_per_line_delivery_pre_l; int refcyc_per_meta_chunk_nom_l; int dst_y_per_meta_row_nom_l; int refcyc_per_pte_group_nom_l; int dst_y_per_pte_row_nom_l; int refcyc_per_meta_chunk_vblank_l; int refcyc_per_pte_group_vblank_l; int ref_freq_to_pix_freq; int dst_y_per_row_vblank; int dst_y_per_vm_vblank; int vratio_prefetch; int dst_y_prefetch; int dst_y_after_scaler; int refcyc_x_after_scaler; int refcyc_per_htotal; int min_dst_y_next_start; int dlg_vblank_end; int refcyc_h_blank_end; } ;
struct dcn_hubp_state {int qos_level_high_wm; int qos_level_low_wm; int min_ttu_vblank; int underflow_status; int ttu_disable; int blank_en; int dcc_en; int sw_mode; int h_mirror_en; int rotation_angle; int viewport_height; int viewport_width; int inuse_addr_lo; int inuse_addr_hi; int pixel_format; struct _vcs_dpi_display_rq_regs_st rq_regs; struct _vcs_dpi_display_ttu_regs_st ttu_attr; struct _vcs_dpi_display_dlg_regs_st dlg_attr; } ;
struct dcn20_hubp {struct dcn_hubp_state state; } ;


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
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *,int ,int *) ;
 int FUNC_3 (int ,int ,int *,int ,int *,int ,int *) ;
 int FUNC_4 (int ,int ,int *,int ,int *,int ,int *,int ,int *) ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 struct dcn20_hubp* FUNC_5 (struct hubp*) ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;

void FUNC_6(struct hubp *VAR_91)
{
 struct dcn20_hubp *VAR_92 = FUNC_5(VAR_91);
 struct dcn_hubp_state *VAR_93 = &VAR_92->state;
 struct _vcs_dpi_display_dlg_regs_st *VAR_94 = &VAR_93->dlg_attr;
 struct _vcs_dpi_display_ttu_regs_st *VAR_95 = &VAR_93->ttu_attr;
 struct _vcs_dpi_display_rq_regs_st *VAR_96 = &VAR_93->rq_regs;


 FUNC_1(VAR_30,
   VAR_17, &VAR_96->plane1_base_address);
 FUNC_4(VAR_4,
   VAR_19, &VAR_96->drq_expansion_mode,
   VAR_55, &VAR_96->prq_expansion_mode,
   VAR_37, &VAR_96->mrq_expansion_mode,
   VAR_2, &VAR_96->crq_expansion_mode);


 FUNC_2(VAR_0,
  VAR_61, &VAR_94->refcyc_h_blank_end,
  VAR_18, &VAR_94->dlg_vblank_end);

 FUNC_1(VAR_1,
  VAR_35, &VAR_94->min_dst_y_next_start);

 FUNC_1(VAR_21,
  VAR_62, &VAR_94->refcyc_per_htotal);

 FUNC_2(VAR_20,
  VAR_77, &VAR_94->refcyc_x_after_scaler,
  VAR_22, &VAR_94->dst_y_after_scaler);

 if (FUNC_0(VAR_50))
  FUNC_2(VAR_50,
   VAR_29, &VAR_94->dst_y_prefetch,
   VAR_89, &VAR_94->vratio_prefetch);
 else
  FUNC_2(VAR_48,
   VAR_29, &VAR_94->dst_y_prefetch,
   VAR_89, &VAR_94->vratio_prefetch);

 FUNC_2(VAR_84,
  VAR_28, &VAR_94->dst_y_per_vm_vblank,
  VAR_27, &VAR_94->dst_y_per_row_vblank);

 FUNC_1(VAR_78,
  VAR_78, &VAR_94->ref_freq_to_pix_freq);


 FUNC_1(VAR_85,
  VAR_74, &VAR_94->refcyc_per_pte_group_vblank_l);

 FUNC_1(VAR_87,
  VAR_70, &VAR_94->refcyc_per_meta_chunk_vblank_l);

 if (FUNC_0(VAR_38))
  FUNC_1(VAR_38,
   VAR_26, &VAR_94->dst_y_per_pte_row_nom_l);

 if (FUNC_0(VAR_39))
  FUNC_1(VAR_39,
   VAR_72, &VAR_94->refcyc_per_pte_group_nom_l);

 FUNC_1(VAR_42,
  VAR_24, &VAR_94->dst_y_per_meta_row_nom_l);

 FUNC_1(VAR_43,
  VAR_68, &VAR_94->refcyc_per_meta_chunk_nom_l);

 FUNC_2(VAR_47,
  VAR_66, &VAR_94->refcyc_per_line_delivery_pre_l,
  VAR_65, &VAR_94->refcyc_per_line_delivery_pre_c);

 FUNC_2(VAR_46,
  VAR_64, &VAR_94->refcyc_per_line_delivery_l,
  VAR_63, &VAR_94->refcyc_per_line_delivery_c);

 if (FUNC_0(VAR_51))
  FUNC_1(VAR_51,
   VAR_90, &VAR_94->vratio_prefetch_c);
 else
  FUNC_1(VAR_49,
   VAR_90, &VAR_94->vratio_prefetch_c);

 FUNC_1(VAR_86,
  VAR_73, &VAR_94->refcyc_per_pte_group_vblank_c);

 FUNC_1(VAR_88,
  VAR_69, &VAR_94->refcyc_per_meta_chunk_vblank_c);

 if (FUNC_0(VAR_40))
  FUNC_1(VAR_40,
   VAR_25, &VAR_94->dst_y_per_pte_row_nom_c);

 if (FUNC_0(VAR_41))
  FUNC_1(VAR_41,
   VAR_71, &VAR_94->refcyc_per_pte_group_nom_c);

 FUNC_1(VAR_44,
  VAR_23, &VAR_94->dst_y_per_meta_row_nom_c);

 FUNC_1(VAR_45,
  VAR_67, &VAR_94->refcyc_per_meta_chunk_nom_c);


 FUNC_2(VAR_10,
  VAR_59, &VAR_95->qos_level_low_wm,
  VAR_58, &VAR_95->qos_level_high_wm);

 FUNC_2(VAR_5,
  VAR_36, &VAR_95->min_ttu_vblank,
  VAR_57, &VAR_95->qos_level_flip);




 FUNC_3(VAR_6,
  VAR_75, &VAR_95->refcyc_per_req_delivery_l,
  VAR_56, &VAR_95->qos_level_fixed_l,
  VAR_60, &VAR_95->qos_ramp_disable_l);

 FUNC_1(VAR_7,
  VAR_76,
  &VAR_95->refcyc_per_req_delivery_pre_l);

 FUNC_3(VAR_8,
  VAR_75, &VAR_95->refcyc_per_req_delivery_c,
  VAR_56, &VAR_95->qos_level_fixed_c,
  VAR_60, &VAR_95->qos_ramp_disable_c);

 FUNC_1(VAR_9,
  VAR_76,
  &VAR_95->refcyc_per_req_delivery_pre_c);


 FUNC_1(VAR_12,
   VAR_82, &VAR_93->pixel_format);

 FUNC_1(VAR_15,
   VAR_81, &VAR_93->inuse_addr_hi);

 FUNC_1(VAR_14,
   VAR_80, &VAR_93->inuse_addr_lo);

 FUNC_2(VAR_11,
   VAR_54, &VAR_93->viewport_width,
   VAR_53, &VAR_93->viewport_height);

 FUNC_2(VAR_12,
   VAR_79, &VAR_93->rotation_angle,
   VAR_34, &VAR_93->h_mirror_en);

 FUNC_1(VAR_16,
   VAR_83, &VAR_93->sw_mode);

 FUNC_1(VAR_13,
   VAR_52, &VAR_93->dcc_en);

 FUNC_3(VAR_3,
   VAR_31, &VAR_93->blank_en,
   VAR_32, &VAR_93->ttu_disable,
   VAR_33, &VAR_93->underflow_status);

 FUNC_1(VAR_5,
   VAR_36, &VAR_93->min_ttu_vblank);

 FUNC_2(VAR_10,
   VAR_59, &VAR_93->qos_level_low_wm,
   VAR_58, &VAR_93->qos_level_high_wm);

}
