
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hubp {int dummy; } ;
struct dcn20_hubp {int dummy; } ;
struct _vcs_dpi_display_ttu_regs_st {int qos_level_flip; int min_ttu_vblank; int refcyc_per_req_delivery_pre_cur1; int refcyc_per_req_delivery_pre_cur0; int refcyc_per_req_delivery_pre_c; int refcyc_per_req_delivery_pre_l; } ;
struct _vcs_dpi_display_dlg_regs_st {int refcyc_per_line_delivery_pre_c; int refcyc_per_line_delivery_pre_l; int refcyc_per_meta_chunk_flip_l; int refcyc_per_meta_chunk_vblank_c; int refcyc_per_meta_chunk_vblank_l; int dst_y_per_row_flip; int dst_y_per_vm_flip; int dst_y_per_row_vblank; int dst_y_per_vm_vblank; int vratio_prefetch_c; int vratio_prefetch; int dst_y_prefetch; } ;


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
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 struct dcn20_hubp* FUNC_2 (struct hubp*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;

void FUNC_3(
  struct hubp *VAR_28,
  struct _vcs_dpi_display_dlg_regs_st *VAR_29,
  struct _vcs_dpi_display_ttu_regs_st *VAR_30)
{
 struct dcn20_hubp *VAR_31 = FUNC_2(VAR_28);

 FUNC_1(VAR_14, 0,
   VAR_9, VAR_29->dst_y_prefetch,
   VAR_26, VAR_29->vratio_prefetch);

 FUNC_0(VAR_15, 0,
   VAR_27, VAR_29->vratio_prefetch_c);

 FUNC_1(VAR_23, 0,
  VAR_8, VAR_29->dst_y_per_vm_vblank,
  VAR_6, VAR_29->dst_y_per_row_vblank);

 FUNC_1(VAR_10, 0,
  VAR_7, VAR_29->dst_y_per_vm_flip,
  VAR_5, VAR_29->dst_y_per_row_flip);

 FUNC_0(VAR_24, 0,
  VAR_21, VAR_29->refcyc_per_meta_chunk_vblank_l);

 FUNC_0(VAR_25, 0,
  VAR_20, VAR_29->refcyc_per_meta_chunk_vblank_c);

 FUNC_0(VAR_11, 0,
  VAR_19, VAR_29->refcyc_per_meta_chunk_flip_l);

 FUNC_1(VAR_13, 0,
  VAR_18, VAR_29->refcyc_per_line_delivery_pre_l,
  VAR_17, VAR_29->refcyc_per_line_delivery_pre_c);

 FUNC_0(VAR_3, 0,
  VAR_22,
  VAR_30->refcyc_per_req_delivery_pre_l);
 FUNC_0(VAR_4, 0,
  VAR_22,
  VAR_30->refcyc_per_req_delivery_pre_c);
 FUNC_0(VAR_0, 0,
  VAR_22, VAR_30->refcyc_per_req_delivery_pre_cur0);
 FUNC_0(VAR_1, 0,
  VAR_22, VAR_30->refcyc_per_req_delivery_pre_cur1);

 FUNC_1(VAR_2, 0,
  VAR_12, VAR_30->min_ttu_vblank,
  VAR_16, VAR_30->qos_level_flip);
}
