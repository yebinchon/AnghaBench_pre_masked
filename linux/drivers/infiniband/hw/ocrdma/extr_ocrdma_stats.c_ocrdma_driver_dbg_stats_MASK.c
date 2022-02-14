
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {char* debugfs_mem; } ;
struct ocrdma_dev {TYPE_3__* cqe_err_stats; TYPE_2__* async_err_stats; TYPE_1__ stats_mem; } ;
struct TYPE_6__ {scalar_t__ counter; } ;
struct TYPE_5__ {scalar_t__ counter; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 int VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,char*,char*,int ) ;

__attribute__((used)) static char *FUNC_2(struct ocrdma_dev *VAR_32)
{
 char *VAR_33 = VAR_32->stats_mem.debugfs_mem, *VAR_34;


 FUNC_0(VAR_33, 0, (VAR_25));

 VAR_34 = VAR_33;
 VAR_34 += FUNC_1(VAR_33, VAR_34, "async_cq_err",
    (u64)(VAR_32->async_err_stats
    [VAR_21].counter));
 VAR_34 += FUNC_1(VAR_33, VAR_34, "async_cq_overrun_err",
    (u64)VAR_32->async_err_stats
    [VAR_22].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "async_cq_qpcat_err",
    (u64)VAR_32->async_err_stats
    [VAR_23].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "async_qp_access_err",
    (u64)VAR_32->async_err_stats
    [VAR_26].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "async_qp_commm_est_evt",
    (u64)VAR_32->async_err_stats
    [VAR_27].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "async_sq_drained_evt",
    (u64)VAR_32->async_err_stats
    [VAR_29].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "async_dev_fatal_evt",
    (u64)VAR_32->async_err_stats
    [VAR_24].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "async_srqcat_err",
    (u64)VAR_32->async_err_stats
    [VAR_30].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "async_srq_limit_evt",
    (u64)VAR_32->async_err_stats
    [VAR_31].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "async_qp_last_wqe_evt",
    (u64)VAR_32->async_err_stats
    [VAR_28].counter);

 VAR_34 += FUNC_1(VAR_33, VAR_34, "cqe_loc_len_err",
    (u64)VAR_32->cqe_err_stats
    [VAR_7].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "cqe_loc_qp_op_err",
    (u64)VAR_32->cqe_err_stats
    [VAR_9].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "cqe_loc_eec_op_err",
    (u64)VAR_32->cqe_err_stats
    [VAR_6].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "cqe_loc_prot_err",
    (u64)VAR_32->cqe_err_stats
    [VAR_8].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "cqe_wr_flush_err",
    (u64)VAR_32->cqe_err_stats
    [VAR_20].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "cqe_mw_bind_err",
    (u64)VAR_32->cqe_err_stats
    [VAR_11].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "cqe_bad_resp_err",
    (u64)VAR_32->cqe_err_stats
    [VAR_0].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "cqe_loc_access_err",
    (u64)VAR_32->cqe_err_stats
    [VAR_5].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "cqe_rem_inv_req_err",
    (u64)VAR_32->cqe_err_stats
    [VAR_15].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "cqe_rem_access_err",
    (u64)VAR_32->cqe_err_stats
    [VAR_13].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "cqe_rem_op_err",
    (u64)VAR_32->cqe_err_stats
    [VAR_16].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "cqe_retry_exc_err",
    (u64)VAR_32->cqe_err_stats
    [VAR_18].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "cqe_rnr_retry_exc_err",
    (u64)VAR_32->cqe_err_stats
    [VAR_19].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "cqe_loc_rdd_viol_err",
    (u64)VAR_32->cqe_err_stats
    [VAR_10].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "cqe_rem_inv_rd_req_err",
    (u64)VAR_32->cqe_err_stats
    [VAR_14].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "cqe_rem_abort_err",
    (u64)VAR_32->cqe_err_stats
    [VAR_12].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "cqe_inv_eecn_err",
    (u64)VAR_32->cqe_err_stats
    [VAR_3].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "cqe_inv_eec_state_err",
    (u64)VAR_32->cqe_err_stats
    [VAR_4].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "cqe_fatal_err",
    (u64)VAR_32->cqe_err_stats
    [VAR_1].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "cqe_resp_timeout_err",
    (u64)VAR_32->cqe_err_stats
    [VAR_17].counter);
 VAR_34 += FUNC_1(VAR_33, VAR_34, "cqe_general_err",
    (u64)VAR_32->cqe_err_stats
    [VAR_2].counter);
 return VAR_33;
}
