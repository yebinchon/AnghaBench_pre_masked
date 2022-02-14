
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef size_t u16 ;
struct creq_initialize_fw_resp {int dummy; } ;
struct cmdq_initialize_fw {size_t qpc_pg_size_qpc_lvl; size_t mrw_pg_size_mrw_lvl; size_t srq_pg_size_srq_lvl; size_t cq_pg_size_cq_lvl; size_t tim_pg_size_tim_lvl; size_t tqm_pg_size_tqm_lvl; void* stat_ctx_id; void* max_gid_per_vf; void* max_cq_per_vf; void* max_srq_per_vf; void* max_mrw_per_vf; void* max_qp_per_vf; void* number_of_cq; void* number_of_srq; void* number_of_mrw; void* number_of_qp; void* tqm_page_dir; void* tim_page_dir; void* cq_page_dir; void* srq_page_dir; void* mrw_page_dir; void* qpc_page_dir; int log2_dbr_pg_size; } ;
struct bnxt_qplib_rcfw {int flags; TYPE_1__* res; } ;
struct TYPE_20__ {int fw_id; } ;
struct TYPE_19__ {int max_gid_per_vf; int max_cq_per_vf; int max_srq_per_vf; int max_mrw_per_vf; int max_qp_per_vf; } ;
struct TYPE_18__ {size_t level; int max_elements; TYPE_10__* pbl; } ;
struct TYPE_17__ {size_t level; int max_elements; TYPE_10__* pbl; } ;
struct TYPE_16__ {size_t level; int max_elements; TYPE_10__* pbl; } ;
struct TYPE_15__ {size_t level; int max_elements; TYPE_10__* pbl; } ;
struct TYPE_14__ {TYPE_10__* pbl; } ;
struct TYPE_13__ {size_t level; TYPE_10__* pbl; } ;
struct bnxt_qplib_ctx {size_t tqm_pde_level; TYPE_9__ stats; TYPE_8__ vf_res; TYPE_7__ cq_tbl; TYPE_6__ srqc_tbl; TYPE_5__ mrw_tbl; TYPE_4__ qpc_tbl; TYPE_3__ tqm_pde; TYPE_2__ tim_tbl; } ;
struct TYPE_12__ {int cctx; } ;
struct TYPE_11__ {int * pg_map_arr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (struct cmdq_initialize_fw,int ,size_t) ;
 scalar_t__ VAR_10 ;
 size_t FUNC_1 (TYPE_10__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct bnxt_qplib_rcfw*,void*,void*,int *,int ) ;
 int FUNC_4 (scalar_t__) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;

int FUNC_8(struct bnxt_qplib_rcfw *VAR_11,
    struct bnxt_qplib_ctx *VAR_12, int VAR_13)
{
 struct cmdq_initialize_fw VAR_14;
 struct creq_initialize_fw_resp VAR_15;
 u16 VAR_16 = 0, VAR_17;
 int VAR_18;

 FUNC_0(VAR_14, VAR_7, VAR_16);



 VAR_14.log2_dbr_pg_size = FUNC_4(VAR_8 -
        VAR_10);







 if (VAR_13 || FUNC_2(VAR_11->res->cctx))
  goto skip_ctx_setup;

 VAR_17 = VAR_12->qpc_tbl.level;
 VAR_14.qpc_pg_size_qpc_lvl = (VAR_17 << VAR_2) |
    FUNC_1(&VAR_12->qpc_tbl.pbl[VAR_17]);
 VAR_17 = VAR_12->mrw_tbl.level;
 VAR_14.mrw_pg_size_mrw_lvl = (VAR_17 << VAR_1) |
    FUNC_1(&VAR_12->mrw_tbl.pbl[VAR_17]);
 VAR_17 = VAR_12->srqc_tbl.level;
 VAR_14.srq_pg_size_srq_lvl = (VAR_17 << VAR_3) |
    FUNC_1(&VAR_12->srqc_tbl.pbl[VAR_17]);
 VAR_17 = VAR_12->cq_tbl.level;
 VAR_14.cq_pg_size_cq_lvl = (VAR_17 << VAR_0) |
    FUNC_1(&VAR_12->cq_tbl.pbl[VAR_17]);
 VAR_17 = VAR_12->srqc_tbl.level;
 VAR_14.srq_pg_size_srq_lvl = (VAR_17 << VAR_3) |
    FUNC_1(&VAR_12->srqc_tbl.pbl[VAR_17]);
 VAR_17 = VAR_12->cq_tbl.level;
 VAR_14.cq_pg_size_cq_lvl = (VAR_17 << VAR_0) |
    FUNC_1(&VAR_12->cq_tbl.pbl[VAR_17]);
 VAR_17 = VAR_12->tim_tbl.level;
 VAR_14.tim_pg_size_tim_lvl = (VAR_17 << VAR_4) |
      FUNC_1(&VAR_12->tim_tbl.pbl[VAR_17]);
 VAR_17 = VAR_12->tqm_pde_level;
 VAR_14.tqm_pg_size_tqm_lvl = (VAR_17 << VAR_5) |
      FUNC_1(&VAR_12->tqm_pde.pbl[VAR_17]);

 VAR_14.qpc_page_dir =
  FUNC_6(VAR_12->qpc_tbl.pbl[VAR_9].pg_map_arr[0]);
 VAR_14.mrw_page_dir =
  FUNC_6(VAR_12->mrw_tbl.pbl[VAR_9].pg_map_arr[0]);
 VAR_14.srq_page_dir =
  FUNC_6(VAR_12->srqc_tbl.pbl[VAR_9].pg_map_arr[0]);
 VAR_14.cq_page_dir =
  FUNC_6(VAR_12->cq_tbl.pbl[VAR_9].pg_map_arr[0]);
 VAR_14.tim_page_dir =
  FUNC_6(VAR_12->tim_tbl.pbl[VAR_9].pg_map_arr[0]);
 VAR_14.tqm_page_dir =
  FUNC_6(VAR_12->tqm_pde.pbl[VAR_9].pg_map_arr[0]);

 VAR_14.number_of_qp = FUNC_5(VAR_12->qpc_tbl.max_elements);
 VAR_14.number_of_mrw = FUNC_5(VAR_12->mrw_tbl.max_elements);
 VAR_14.number_of_srq = FUNC_5(VAR_12->srqc_tbl.max_elements);
 VAR_14.number_of_cq = FUNC_5(VAR_12->cq_tbl.max_elements);

 VAR_14.max_qp_per_vf = FUNC_5(VAR_12->vf_res.max_qp_per_vf);
 VAR_14.max_mrw_per_vf = FUNC_5(VAR_12->vf_res.max_mrw_per_vf);
 VAR_14.max_srq_per_vf = FUNC_5(VAR_12->vf_res.max_srq_per_vf);
 VAR_14.max_cq_per_vf = FUNC_5(VAR_12->vf_res.max_cq_per_vf);
 VAR_14.max_gid_per_vf = FUNC_5(VAR_12->vf_res.max_gid_per_vf);

skip_ctx_setup:
 VAR_14.stat_ctx_id = FUNC_5(VAR_12->stats.fw_id);
 VAR_18 = FUNC_3(VAR_11, (void *)&VAR_14, (void *)&VAR_15,
       ((void*)0), 0);
 if (VAR_18)
  return VAR_18;
 FUNC_7(VAR_6, &VAR_11->flags);
 return 0;
}
