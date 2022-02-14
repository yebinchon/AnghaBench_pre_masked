
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct rdma_hw_stats {void** value; } ;
struct ib_device {int dummy; } ;
struct ctx_hw_stats {int tx_ucast_bytes; int tx_ucast_pkts; int rx_ucast_bytes; int rx_ucast_pkts; int rx_discard_pkts; int rx_drop_pkts; int tx_bcast_pkts; } ;
struct TYPE_6__ {void* res_oos_drop_count; void* res_rx_pci_err; void* res_tx_pci_err; void* res_srq_load_err; void* res_cq_load_err; void* res_wqe_format_err; void* res_invalid_dup_rkey; void* res_cmp_err; void* res_srq_err; void* res_mem_error; void* res_rem_inv_err; void* res_unaligned_atomic; void* res_unsup_opcode; void* res_irrq_oflow; void* res_tx_range_err; void* res_tx_no_perm; void* res_tx_domain_err; void* res_tx_invalid_rkey; void* res_rx_range_err; void* res_rx_no_perm; void* res_rx_domain_err; void* res_rx_invalid_rkey; void* res_opcode_err; void* res_exceeds_wqe; void* res_length_mismatch; void* res_exceed_max; void* dup_req; void* remote_op_err; void* remote_access_err; void* remote_invalid_req_err; void* mem_mgmt_op_err; void* local_protection_err; void* local_qp_op_err; void* bad_resp_err; void* unrecoverable_err; void* missing_resp; void* rnr_naks_rcvd; void* max_retry_exceeded; void* seq_err_naks_rcvd; void* to_retransmits; } ;
struct TYPE_4__ {struct ctx_hw_stats* dma; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;
struct bnxt_re_dev {TYPE_3__ stats; int flags; int rcfw; int mw_count; int mr_count; int cq_count; int srq_count; int qp_count; TYPE_2__ qplib_ctx; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
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
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 size_t VAR_40 ;
 size_t VAR_41 ;
 size_t VAR_42 ;
 size_t VAR_43 ;
 size_t VAR_44 ;
 size_t VAR_45 ;
 size_t VAR_46 ;
 size_t VAR_47 ;
 size_t VAR_48 ;
 size_t VAR_49 ;
 size_t VAR_50 ;
 size_t VAR_51 ;
 size_t VAR_52 ;
 int VAR_53 ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int VAR_54 ;
 int FUNC_3 (int ,int *) ;
 void* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 struct bnxt_re_dev* FUNC_6 (struct ib_device*,struct ib_device*) ;

int FUNC_7(struct ib_device *VAR_55,
       struct rdma_hw_stats *VAR_56,
       u8 VAR_57, int VAR_58)
{
 struct bnxt_re_dev *VAR_59 = FUNC_6(VAR_55, VAR_55);
 struct ctx_hw_stats *VAR_60 = VAR_59->qplib_ctx.stats.dma;
 int VAR_61 = 0;

 if (!VAR_57 || !VAR_56)
  return -VAR_53;

 VAR_56->value[VAR_3] = FUNC_1(&VAR_59->qp_count);
 VAR_56->value[VAR_4] = FUNC_1(&VAR_59->srq_count);
 VAR_56->value[VAR_0] = FUNC_1(&VAR_59->cq_count);
 VAR_56->value[VAR_1] = FUNC_1(&VAR_59->mr_count);
 VAR_56->value[VAR_2] = FUNC_1(&VAR_59->mw_count);
 if (VAR_60) {
  VAR_56->value[VAR_14] =
   FUNC_4(VAR_60->tx_bcast_pkts);
  VAR_56->value[VAR_46] =
   FUNC_4(VAR_60->rx_drop_pkts);
  VAR_56->value[VAR_45] =
   FUNC_4(VAR_60->rx_discard_pkts);
  VAR_56->value[VAR_47] =
   FUNC_4(VAR_60->rx_ucast_pkts);
  VAR_56->value[VAR_44] =
   FUNC_4(VAR_60->rx_ucast_bytes);
  VAR_56->value[VAR_51] =
   FUNC_4(VAR_60->tx_ucast_pkts);
  VAR_56->value[VAR_50] =
   FUNC_4(VAR_60->tx_ucast_bytes);
 }
 if (FUNC_5(VAR_7, &VAR_59->flags)) {
  VAR_61 = FUNC_2(&VAR_59->rcfw, &VAR_59->stats);
  if (VAR_61)
   FUNC_3(VAR_7,
      &VAR_59->flags);
  VAR_56->value[VAR_49] =
     VAR_59->stats.to_retransmits;
  VAR_56->value[VAR_48] =
     VAR_59->stats.seq_err_naks_rcvd;
  VAR_56->value[VAR_10] =
     VAR_59->stats.max_retry_exceeded;
  VAR_56->value[VAR_43] =
     VAR_59->stats.rnr_naks_rcvd;
  VAR_56->value[VAR_12] =
     VAR_59->stats.missing_resp;
  VAR_56->value[VAR_52] =
     VAR_59->stats.unrecoverable_err;
  VAR_56->value[VAR_5] =
     VAR_59->stats.bad_resp_err;
  VAR_56->value[VAR_9] =
    VAR_59->stats.local_qp_op_err;
  VAR_56->value[VAR_8] =
    VAR_59->stats.local_protection_err;
  VAR_56->value[VAR_11] =
    VAR_59->stats.mem_mgmt_op_err;
  VAR_56->value[VAR_16] =
    VAR_59->stats.remote_invalid_req_err;
  VAR_56->value[VAR_15] =
    VAR_59->stats.remote_access_err;
  VAR_56->value[VAR_17] =
    VAR_59->stats.remote_op_err;
  VAR_56->value[VAR_6] =
    VAR_59->stats.dup_req;
  VAR_56->value[VAR_21] =
    VAR_59->stats.res_exceed_max;
  VAR_56->value[VAR_24] =
    VAR_59->stats.res_length_mismatch;
  VAR_56->value[VAR_20] =
    VAR_59->stats.res_exceeds_wqe;
  VAR_56->value[VAR_26] =
    VAR_59->stats.res_opcode_err;
  VAR_56->value[VAR_29] =
    VAR_59->stats.res_rx_invalid_rkey;
  VAR_56->value[VAR_28] =
    VAR_59->stats.res_rx_domain_err;
  VAR_56->value[VAR_30] =
    VAR_59->stats.res_rx_no_perm;
  VAR_56->value[VAR_32] =
    VAR_59->stats.res_rx_range_err;
  VAR_56->value[VAR_36] =
    VAR_59->stats.res_tx_invalid_rkey;
  VAR_56->value[VAR_35] =
    VAR_59->stats.res_tx_domain_err;
  VAR_56->value[VAR_37] =
    VAR_59->stats.res_tx_no_perm;
  VAR_56->value[VAR_39] =
    VAR_59->stats.res_tx_range_err;
  VAR_56->value[VAR_23] =
    VAR_59->stats.res_irrq_oflow;
  VAR_56->value[VAR_41] =
    VAR_59->stats.res_unsup_opcode;
  VAR_56->value[VAR_40] =
    VAR_59->stats.res_unaligned_atomic;
  VAR_56->value[VAR_27] =
    VAR_59->stats.res_rem_inv_err;
  VAR_56->value[VAR_25] =
    VAR_59->stats.res_mem_error;
  VAR_56->value[VAR_33] =
    VAR_59->stats.res_srq_err;
  VAR_56->value[VAR_18] =
    VAR_59->stats.res_cmp_err;
  VAR_56->value[VAR_22] =
    VAR_59->stats.res_invalid_dup_rkey;
  VAR_56->value[VAR_42] =
    VAR_59->stats.res_wqe_format_err;
  VAR_56->value[VAR_19] =
    VAR_59->stats.res_cq_load_err;
  VAR_56->value[VAR_34] =
    VAR_59->stats.res_srq_load_err;
  VAR_56->value[VAR_38] =
    VAR_59->stats.res_tx_pci_err;
  VAR_56->value[VAR_31] =
    VAR_59->stats.res_rx_pci_err;
  VAR_56->value[VAR_13] =
    VAR_59->stats.res_oos_drop_count;
 }

 return FUNC_0(VAR_54);
}
