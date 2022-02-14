
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hubp {int dummy; } ;
struct TYPE_4__ {int pte_row_height_linear; int swath_height; int mpte_group_size; int dpte_group_size; int min_meta_chunk_size; int meta_chunk_size; int min_chunk_size; int chunk_size; } ;
struct TYPE_3__ {int pte_row_height_linear; int swath_height; int mpte_group_size; int dpte_group_size; int min_meta_chunk_size; int meta_chunk_size; int min_chunk_size; int chunk_size; } ;
struct _vcs_dpi_display_rq_regs_st {TYPE_2__ rq_regs_c; TYPE_1__ rq_regs_l; } ;
struct dcn_hubp_state {struct _vcs_dpi_display_rq_regs_st rq_regs; } ;
struct dcn10_hubp {struct dcn_hubp_state state; } ;


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
 int FUNC_0 (int ,int ,int *,int ,int *,int ,int *,int ,int *,int ,int *,int ,int *,int ,int *,int ,int *) ;
 int VAR_16 ;
 int VAR_17 ;
 struct dcn10_hubp* FUNC_1 (struct hubp*) ;
 int FUNC_2 (struct hubp*) ;

void FUNC_3(struct hubp *VAR_18)
{
 struct dcn10_hubp *VAR_19 = FUNC_1(VAR_18);
 struct dcn_hubp_state *VAR_20 = &VAR_19->state;
 struct _vcs_dpi_display_rq_regs_st *VAR_21 = &VAR_20->rq_regs;

 FUNC_2(VAR_18);

 FUNC_0(VAR_2,
  VAR_0, &VAR_21->rq_regs_l.chunk_size,
  VAR_8, &VAR_21->rq_regs_l.min_chunk_size,
  VAR_6, &VAR_21->rq_regs_l.meta_chunk_size,
  VAR_10, &VAR_21->rq_regs_l.min_meta_chunk_size,
  VAR_4, &VAR_21->rq_regs_l.dpte_group_size,
  VAR_12, &VAR_21->rq_regs_l.mpte_group_size,
  VAR_16, &VAR_21->rq_regs_l.swath_height,
  VAR_14, &VAR_21->rq_regs_l.pte_row_height_linear);

 FUNC_0(VAR_3,
  VAR_1, &VAR_21->rq_regs_c.chunk_size,
  VAR_9, &VAR_21->rq_regs_c.min_chunk_size,
  VAR_7, &VAR_21->rq_regs_c.meta_chunk_size,
  VAR_11, &VAR_21->rq_regs_c.min_meta_chunk_size,
  VAR_5, &VAR_21->rq_regs_c.dpte_group_size,
  VAR_13, &VAR_21->rq_regs_c.mpte_group_size,
  VAR_17, &VAR_21->rq_regs_c.swath_height,
  VAR_15, &VAR_21->rq_regs_c.pte_row_height_linear);

}
