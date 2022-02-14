
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hubp {int dummy; } ;
struct dcn10_hubp {int dummy; } ;
struct TYPE_4__ {int pte_row_height_linear; int swath_height; int mpte_group_size; int dpte_group_size; int min_meta_chunk_size; int meta_chunk_size; int min_chunk_size; int chunk_size; } ;
struct TYPE_3__ {int pte_row_height_linear; int swath_height; int mpte_group_size; int dpte_group_size; int min_meta_chunk_size; int meta_chunk_size; int min_chunk_size; int chunk_size; } ;
struct _vcs_dpi_display_rq_regs_st {TYPE_2__ rq_regs_c; TYPE_1__ rq_regs_l; int crq_expansion_mode; int mrq_expansion_mode; int prq_expansion_mode; int drq_expansion_mode; int plane1_base_address; } ;


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
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 struct dcn10_hubp* FUNC_3 (struct hubp*) ;

void FUNC_4(
  struct hubp *VAR_25,
  struct _vcs_dpi_display_rq_regs_st *VAR_26)
{
 struct dcn10_hubp *VAR_27 = FUNC_3(VAR_25);

 FUNC_2(VAR_10,
   VAR_6, VAR_26->plane1_base_address);
 FUNC_0(VAR_5, 0,
   VAR_9, VAR_26->drq_expansion_mode,
   VAR_20, VAR_26->prq_expansion_mode,
   VAR_19, VAR_26->mrq_expansion_mode,
   VAR_2, VAR_26->crq_expansion_mode);
 FUNC_1(VAR_3, 0,
  VAR_0, VAR_26->rq_regs_l.chunk_size,
  VAR_13, VAR_26->rq_regs_l.min_chunk_size,
  VAR_11, VAR_26->rq_regs_l.meta_chunk_size,
  VAR_15, VAR_26->rq_regs_l.min_meta_chunk_size,
  VAR_7, VAR_26->rq_regs_l.dpte_group_size,
  VAR_17, VAR_26->rq_regs_l.mpte_group_size,
  VAR_23, VAR_26->rq_regs_l.swath_height,
  VAR_21, VAR_26->rq_regs_l.pte_row_height_linear);
 FUNC_1(VAR_4, 0,
  VAR_1, VAR_26->rq_regs_c.chunk_size,
  VAR_14, VAR_26->rq_regs_c.min_chunk_size,
  VAR_12, VAR_26->rq_regs_c.meta_chunk_size,
  VAR_16, VAR_26->rq_regs_c.min_meta_chunk_size,
  VAR_8, VAR_26->rq_regs_c.dpte_group_size,
  VAR_18, VAR_26->rq_regs_c.mpte_group_size,
  VAR_24, VAR_26->rq_regs_c.swath_height,
  VAR_22, VAR_26->rq_regs_c.pte_row_height_linear);
}
