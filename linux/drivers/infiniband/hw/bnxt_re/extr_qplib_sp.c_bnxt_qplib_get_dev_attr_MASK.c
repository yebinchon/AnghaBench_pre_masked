
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef void* u32 ;
typedef int u16 ;
struct creq_query_func_resp_sb {scalar_t__ max_qp_rd_atom; scalar_t__ max_qp_init_rd_atom; int max_sge; int l2_db_space_size; int * tqm_alloc_reqs; int max_gid; int max_inline_data; int max_pkeys; int max_srq_sge; int max_srq_wr; int max_srq; int max_map_per_fmr; int max_fmr; int max_ah; int max_raw_eth_qp; int max_mr_size; int max_mw; int max_mr; int max_cqe; int max_cq; int max_qp_wr; int max_qp; } ;
struct creq_query_func_resp {int dummy; } ;
struct cmdq_query_func {int resp_size; } ;
struct bnxt_qplib_rcfw_sbuf {struct creq_query_func_resp_sb* sb; } ;
struct bnxt_qplib_rcfw {TYPE_2__* res; TYPE_1__* pdev; } ;
struct bnxt_qplib_dev_attr {int max_qp; int max_qp_sges; int max_cq_sges; int max_pd; int max_pkey; int l2_db_size; int is_atomic; void** tqm_alloc_reqs; int fw_ver; void* max_sgid; void* max_inline_data; int max_srq_sges; void* max_srq_wqes; void* max_srq; int max_map_per_fmr; void* max_fmr; void* max_ah; void* max_raw_ethy_qp; int max_mr_size; void* max_mw; void* max_mr; void* max_cq_wqes; void* max_cq; void* max_qp_wqes; scalar_t__ max_qp_init_rd_atom; scalar_t__ max_qp_rd_atom; } ;
struct TYPE_4__ {int cctx; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cmdq_query_func,int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct bnxt_qplib_rcfw*,int ) ;
 struct bnxt_qplib_rcfw_sbuf* FUNC_3 (struct bnxt_qplib_rcfw*,int) ;
 int FUNC_4 (struct bnxt_qplib_rcfw*,struct bnxt_qplib_rcfw_sbuf*) ;
 int FUNC_5 (struct bnxt_qplib_rcfw*,void*,void*,void*,int ) ;
 int FUNC_6 (int *,char*) ;
 void* FUNC_7 (int ) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

int FUNC_10(struct bnxt_qplib_rcfw *VAR_7,
       struct bnxt_qplib_dev_attr *VAR_8, bool VAR_9)
{
 struct cmdq_query_func VAR_10;
 struct creq_query_func_resp VAR_11;
 struct bnxt_qplib_rcfw_sbuf *VAR_12;
 struct creq_query_func_resp_sb *VAR_13;
 u16 VAR_14 = 0;
 u32 VAR_15;
 u8 *VAR_16;
 int VAR_17, VAR_18 = 0;

 FUNC_0(VAR_10, VAR_5, VAR_14);

 VAR_12 = FUNC_3(VAR_7, sizeof(*VAR_13));
 if (!VAR_12) {
  FUNC_6(&VAR_7->pdev->dev,
   "SP: QUERY_FUNC alloc side buffer failed\n");
  return -VAR_3;
 }

 VAR_13 = VAR_12->sb;
 VAR_10.resp_size = sizeof(*VAR_13) / VAR_0;
 VAR_18 = FUNC_5(VAR_7, (void *)&VAR_10, (void *)&VAR_11,
       (void *)VAR_12, 0);
 if (VAR_18)
  goto bail;


 VAR_8->max_qp = FUNC_8(VAR_13->max_qp);

 if (!VAR_9)
  VAR_8->max_qp += 1;
 VAR_8->max_qp_rd_atom =
  VAR_13->max_qp_rd_atom > VAR_1 ?
  VAR_1 : VAR_13->max_qp_rd_atom;
 VAR_8->max_qp_init_rd_atom =
  VAR_13->max_qp_init_rd_atom > VAR_1 ?
  VAR_1 : VAR_13->max_qp_init_rd_atom;
 VAR_8->max_qp_wqes = FUNC_7(VAR_13->max_qp_wr);




 VAR_8->max_qp_wqes -= VAR_2;
 VAR_8->max_qp_sges = FUNC_1(VAR_7->res->cctx) ?
       6 : VAR_13->max_sge;
 VAR_8->max_cq = FUNC_8(VAR_13->max_cq);
 VAR_8->max_cq_wqes = FUNC_8(VAR_13->max_cqe);
 VAR_8->max_cq_sges = VAR_8->max_qp_sges;
 VAR_8->max_mr = FUNC_8(VAR_13->max_mr);
 VAR_8->max_mw = FUNC_8(VAR_13->max_mw);

 VAR_8->max_mr_size = FUNC_9(VAR_13->max_mr_size);
 VAR_8->max_pd = 64 * 1024;
 VAR_8->max_raw_ethy_qp = FUNC_8(VAR_13->max_raw_eth_qp);
 VAR_8->max_ah = FUNC_8(VAR_13->max_ah);

 VAR_8->max_fmr = FUNC_8(VAR_13->max_fmr);
 VAR_8->max_map_per_fmr = VAR_13->max_map_per_fmr;

 VAR_8->max_srq = FUNC_7(VAR_13->max_srq);
 VAR_8->max_srq_wqes = FUNC_8(VAR_13->max_srq_wr) - 1;
 VAR_8->max_srq_sges = VAR_13->max_srq_sge;
 VAR_8->max_pkey = FUNC_8(VAR_13->max_pkeys);





 if (VAR_8->max_pkey > 0xFFFF) {

  VAR_8->max_pkey = 0xFFFF;
 }

 VAR_8->max_inline_data = FUNC_8(VAR_13->max_inline_data);
 VAR_8->l2_db_size = (VAR_13->l2_db_space_size + 1) *
       (0x01 << VAR_6);
 VAR_8->max_sgid = FUNC_8(VAR_13->max_gid);

 FUNC_2(VAR_7, VAR_8->fw_ver);

 for (VAR_17 = 0; VAR_17 < VAR_4 / 4; VAR_17++) {
  VAR_15 = FUNC_8(VAR_13->tqm_alloc_reqs[VAR_17]);
  VAR_16 = (u8 *)&VAR_15;
  VAR_8->tqm_alloc_reqs[VAR_17 * 4] = *VAR_16;
  VAR_8->tqm_alloc_reqs[VAR_17 * 4 + 1] = *(++VAR_16);
  VAR_8->tqm_alloc_reqs[VAR_17 * 4 + 2] = *(++VAR_16);
  VAR_8->tqm_alloc_reqs[VAR_17 * 4 + 3] = *(++VAR_16);
 }

 VAR_8->is_atomic = 0;
bail:
 FUNC_4(VAR_7, VAR_12);
 return VAR_18;
}
