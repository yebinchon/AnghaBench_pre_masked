
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct display_mode_lib {int dummy; } ;
struct TYPE_3__ {int refcyc_per_vm_dmdata; int xfc_reg_remote_surface_flip_latency; int xfc_reg_precharge_delay; int xfc_reg_transfer_delay; int dst_y_delta_drq_limit; int vready_after_vcount0; int chunk_hdl_adjust_cur1; int dst_y_offset_cur1; int chunk_hdl_adjust_cur0; int refcyc_per_line_delivery_c; int refcyc_per_line_delivery_l; int refcyc_per_line_delivery_pre_c; int refcyc_per_line_delivery_pre_l; int refcyc_per_meta_chunk_nom_c; int refcyc_per_meta_chunk_nom_l; int dst_y_per_meta_row_nom_c; int dst_y_per_meta_row_nom_l; int refcyc_per_pte_group_nom_c; int refcyc_per_pte_group_nom_l; int dst_y_per_pte_row_nom_c; int dst_y_per_pte_row_nom_l; int refcyc_per_meta_chunk_flip_c; int refcyc_per_meta_chunk_flip_l; int refcyc_per_pte_group_flip_c; int refcyc_per_pte_group_flip_l; int refcyc_per_meta_chunk_vblank_c; int refcyc_per_meta_chunk_vblank_l; int refcyc_per_pte_group_vblank_c; int refcyc_per_pte_group_vblank_l; int vratio_prefetch_c; int vratio_prefetch; int ref_freq_to_pix_freq; int dst_y_per_row_flip; int dst_y_per_vm_flip; int dst_y_per_row_vblank; int dst_y_per_vm_vblank; int dst_y_prefetch; int dst_y_after_scaler; int refcyc_x_after_scaler; int refcyc_per_htotal; int min_dst_y_next_start; int dlg_vblank_end; int refcyc_h_blank_end; } ;
typedef TYPE_1__ display_dlg_regs_st ;


 int FUNC_0 (char*,...) ;

void FUNC_1(struct display_mode_lib *VAR_0, display_dlg_regs_st VAR_1)
{
 FUNC_0("DML_RQ_DLG_CALC: =====================================\n");
 FUNC_0("DML_RQ_DLG_CALC: DISPLAY_DLG_REGS_ST\n");
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_h_blank_end              = 0x%0x\n",
   VAR_1.refcyc_h_blank_end);
 FUNC_0(
   "DML_RQ_DLG_CALC:    dlg_vblank_end                  = 0x%0x\n",
   VAR_1.dlg_vblank_end);
 FUNC_0(
   "DML_RQ_DLG_CALC:    min_dst_y_next_start            = 0x%0x\n",
   VAR_1.min_dst_y_next_start);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_htotal               = 0x%0x\n",
   VAR_1.refcyc_per_htotal);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_x_after_scaler           = 0x%0x\n",
   VAR_1.refcyc_x_after_scaler);
 FUNC_0(
   "DML_RQ_DLG_CALC:    dst_y_after_scaler              = 0x%0x\n",
   VAR_1.dst_y_after_scaler);
 FUNC_0(
   "DML_RQ_DLG_CALC:    dst_y_prefetch                  = 0x%0x\n",
   VAR_1.dst_y_prefetch);
 FUNC_0(
   "DML_RQ_DLG_CALC:    dst_y_per_vm_vblank             = 0x%0x\n",
   VAR_1.dst_y_per_vm_vblank);
 FUNC_0(
   "DML_RQ_DLG_CALC:    dst_y_per_row_vblank            = 0x%0x\n",
   VAR_1.dst_y_per_row_vblank);
 FUNC_0(
   "DML_RQ_DLG_CALC:    dst_y_per_vm_flip               = 0x%0x\n",
   VAR_1.dst_y_per_vm_flip);
 FUNC_0(
   "DML_RQ_DLG_CALC:    dst_y_per_row_flip              = 0x%0x\n",
   VAR_1.dst_y_per_row_flip);
 FUNC_0(
   "DML_RQ_DLG_CALC:    ref_freq_to_pix_freq            = 0x%0x\n",
   VAR_1.ref_freq_to_pix_freq);
 FUNC_0(
   "DML_RQ_DLG_CALC:    vratio_prefetch                 = 0x%0x\n",
   VAR_1.vratio_prefetch);
 FUNC_0(
   "DML_RQ_DLG_CALC:    vratio_prefetch_c               = 0x%0x\n",
   VAR_1.vratio_prefetch_c);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_pte_group_vblank_l   = 0x%0x\n",
   VAR_1.refcyc_per_pte_group_vblank_l);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_pte_group_vblank_c   = 0x%0x\n",
   VAR_1.refcyc_per_pte_group_vblank_c);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_meta_chunk_vblank_l  = 0x%0x\n",
   VAR_1.refcyc_per_meta_chunk_vblank_l);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_meta_chunk_vblank_c  = 0x%0x\n",
   VAR_1.refcyc_per_meta_chunk_vblank_c);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_pte_group_flip_l     = 0x%0x\n",
   VAR_1.refcyc_per_pte_group_flip_l);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_pte_group_flip_c     = 0x%0x\n",
   VAR_1.refcyc_per_pte_group_flip_c);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_meta_chunk_flip_l    = 0x%0x\n",
   VAR_1.refcyc_per_meta_chunk_flip_l);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_meta_chunk_flip_c    = 0x%0x\n",
   VAR_1.refcyc_per_meta_chunk_flip_c);
 FUNC_0(
   "DML_RQ_DLG_CALC:    dst_y_per_pte_row_nom_l         = 0x%0x\n",
   VAR_1.dst_y_per_pte_row_nom_l);
 FUNC_0(
   "DML_RQ_DLG_CALC:    dst_y_per_pte_row_nom_c         = 0x%0x\n",
   VAR_1.dst_y_per_pte_row_nom_c);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_pte_group_nom_l      = 0x%0x\n",
   VAR_1.refcyc_per_pte_group_nom_l);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_pte_group_nom_c      = 0x%0x\n",
   VAR_1.refcyc_per_pte_group_nom_c);
 FUNC_0(
   "DML_RQ_DLG_CALC:    dst_y_per_meta_row_nom_l        = 0x%0x\n",
   VAR_1.dst_y_per_meta_row_nom_l);
 FUNC_0(
   "DML_RQ_DLG_CALC:    dst_y_per_meta_row_nom_c        = 0x%0x\n",
   VAR_1.dst_y_per_meta_row_nom_c);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_meta_chunk_nom_l     = 0x%0x\n",
   VAR_1.refcyc_per_meta_chunk_nom_l);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_meta_chunk_nom_c     = 0x%0x\n",
   VAR_1.refcyc_per_meta_chunk_nom_c);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_line_delivery_pre_l  = 0x%0x\n",
   VAR_1.refcyc_per_line_delivery_pre_l);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_line_delivery_pre_c  = 0x%0x\n",
   VAR_1.refcyc_per_line_delivery_pre_c);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_line_delivery_l      = 0x%0x\n",
   VAR_1.refcyc_per_line_delivery_l);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_line_delivery_c      = 0x%0x\n",
   VAR_1.refcyc_per_line_delivery_c);
 FUNC_0(
   "DML_RQ_DLG_CALC:    chunk_hdl_adjust_cur0           = 0x%0x\n",
   VAR_1.chunk_hdl_adjust_cur0);
 FUNC_0(
   "DML_RQ_DLG_CALC:    dst_y_offset_cur1               = 0x%0x\n",
   VAR_1.dst_y_offset_cur1);
 FUNC_0(
   "DML_RQ_DLG_CALC:    chunk_hdl_adjust_cur1           = 0x%0x\n",
   VAR_1.chunk_hdl_adjust_cur1);
 FUNC_0(
   "DML_RQ_DLG_CALC:    vready_after_vcount0            = 0x%0x\n",
   VAR_1.vready_after_vcount0);
 FUNC_0(
   "DML_RQ_DLG_CALC:    dst_y_delta_drq_limit           = 0x%0x\n",
   VAR_1.dst_y_delta_drq_limit);
 FUNC_0(
   "DML_RQ_DLG_CALC:    xfc_reg_transfer_delay          = 0x%0x\n",
   VAR_1.xfc_reg_transfer_delay);
 FUNC_0(
   "DML_RQ_DLG_CALC:    xfc_reg_precharge_delay         = 0x%0x\n",
   VAR_1.xfc_reg_precharge_delay);
 FUNC_0(
   "DML_RQ_DLG_CALC:    xfc_reg_remote_surface_flip_latency = 0x%0x\n",
   VAR_1.xfc_reg_remote_surface_flip_latency);
 FUNC_0(
   "DML_RQ_DLG_CALC:    refcyc_per_vm_dmdata            = 0x%0x\n",
   VAR_1.refcyc_per_vm_dmdata);

 FUNC_0("DML_RQ_DLG_CALC: =====================================\n");
}
