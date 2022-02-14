
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hubp {int dummy; } ;
struct dcn10_hubp {int dummy; } ;
struct _vcs_dpi_display_ttu_regs_st {int qos_level_flip; int min_ttu_vblank; int refcyc_per_req_delivery_pre_cur0; int refcyc_per_req_delivery_pre_c; int refcyc_per_req_delivery_pre_l; } ;
struct _vcs_dpi_display_dlg_regs_st {int refcyc_per_line_delivery_pre_c; int refcyc_per_line_delivery_pre_l; int refcyc_per_meta_chunk_vblank_c; int refcyc_per_meta_chunk_vblank_l; int dst_y_per_row_vblank; int dst_y_per_vm_vblank; int vratio_prefetch_c; int vratio_prefetch; int dst_y_prefetch; } ;


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
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 struct dcn10_hubp* FUNC_2 (struct hubp*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static void FUNC_3(
  struct hubp *VAR_22,
  struct _vcs_dpi_display_dlg_regs_st *VAR_23,
  struct _vcs_dpi_display_ttu_regs_st *VAR_24)
{
 struct dcn10_hubp *VAR_25 = FUNC_2(VAR_22);

 FUNC_1(VAR_9, 0,
  VAR_6, VAR_23->dst_y_prefetch,
  VAR_20, VAR_23->vratio_prefetch);

 FUNC_0(VAR_10, 0,
  VAR_21, VAR_23->vratio_prefetch_c);

 FUNC_1(VAR_17, 0,
  VAR_5, VAR_23->dst_y_per_vm_vblank,
  VAR_4, VAR_23->dst_y_per_row_vblank);

 FUNC_0(VAR_18, 0,
  VAR_15, VAR_23->refcyc_per_meta_chunk_vblank_l);

 FUNC_0(VAR_19, 0,
  VAR_14, VAR_23->refcyc_per_meta_chunk_vblank_c);

 FUNC_1(VAR_8, 0,
  VAR_13, VAR_23->refcyc_per_line_delivery_pre_l,
  VAR_12, VAR_23->refcyc_per_line_delivery_pre_c);

 FUNC_0(VAR_2, 0,
  VAR_16,
  VAR_24->refcyc_per_req_delivery_pre_l);
 FUNC_0(VAR_3, 0,
  VAR_16,
  VAR_24->refcyc_per_req_delivery_pre_c);
 FUNC_0(VAR_0, 0,
  VAR_16, VAR_24->refcyc_per_req_delivery_pre_cur0);

 FUNC_1(VAR_1, 0,
  VAR_7, VAR_24->min_ttu_vblank,
  VAR_11, VAR_24->qos_level_flip);
}
