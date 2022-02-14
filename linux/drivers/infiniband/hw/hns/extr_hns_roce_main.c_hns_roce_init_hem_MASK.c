
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int mtt_table; int mtt_cqe_table; int mtpt_table; int mtt_srqwqe_table; int mtt_idx_table; } ;
struct TYPE_9__ {int qp_table; int irrl_table; int trrl_table; int sccc_table; } ;
struct TYPE_10__ {int mtt_entry_sz; int mtpt_entry_sz; int qpc_entry_sz; int irrl_entry_sz; int max_qp_init_rdma; int trrl_entry_sz; int max_qp_dest_rdma; int cqc_entry_sz; int srqc_entry_sz; int idx_entry_sz; int sccc_entry_sz; int qpc_timer_entry_sz; int cqc_timer_entry_sz; scalar_t__ num_srqwqe_segs; scalar_t__ num_idx_segs; scalar_t__ num_cqc_timer; scalar_t__ num_qpc_timer; scalar_t__ num_qps; scalar_t__ num_srqs; scalar_t__ num_cqs; scalar_t__ num_mtpts; scalar_t__ num_cqe_segs; scalar_t__ num_mtt_segs; } ;
struct TYPE_6__ {int table; } ;
struct TYPE_7__ {int table; } ;
struct hns_roce_dev {TYPE_3__ mr_table; TYPE_4__ qp_table; TYPE_5__ caps; TYPE_1__ cq_table; TYPE_2__ srq_table; int qpc_timer_table; int cqc_timer_table; struct device* dev; } ;
struct device {int dummy; } ;


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
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct hns_roce_dev*,int ) ;
 int FUNC_2 (struct hns_roce_dev*,int *) ;
 int FUNC_3 (struct hns_roce_dev*,int *,int ,int,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct hns_roce_dev *VAR_13)
{
 int VAR_14;
 struct device *VAR_15 = VAR_13->dev;

 VAR_14 = FUNC_3(VAR_13, &VAR_13->mr_table.mtt_table,
          VAR_6, VAR_13->caps.mtt_entry_sz,
          VAR_13->caps.num_mtt_segs, 1);
 if (VAR_14) {
  FUNC_0(VAR_15, "Failed to init MTT context memory, aborting.\n");
  return VAR_14;
 }

 if (FUNC_1(VAR_13, VAR_2)) {
  VAR_14 = FUNC_3(VAR_13,
          &VAR_13->mr_table.mtt_cqe_table,
          VAR_2, VAR_13->caps.mtt_entry_sz,
          VAR_13->caps.num_cqe_segs, 1);
  if (VAR_14) {
   FUNC_0(VAR_15, "Failed to init MTT CQE context memory, aborting.\n");
   goto err_unmap_cqe;
  }
 }

 VAR_14 = FUNC_3(VAR_13, &VAR_13->mr_table.mtpt_table,
          VAR_5, VAR_13->caps.mtpt_entry_sz,
          VAR_13->caps.num_mtpts, 1);
 if (VAR_14) {
  FUNC_0(VAR_15, "Failed to init MTPT context memory, aborting.\n");
  goto err_unmap_mtt;
 }

 VAR_14 = FUNC_3(VAR_13, &VAR_13->qp_table.qp_table,
          VAR_7, VAR_13->caps.qpc_entry_sz,
          VAR_13->caps.num_qps, 1);
 if (VAR_14) {
  FUNC_0(VAR_15, "Failed to init QP context memory, aborting.\n");
  goto err_unmap_dmpt;
 }

 VAR_14 = FUNC_3(VAR_13, &VAR_13->qp_table.irrl_table,
          VAR_4,
          VAR_13->caps.irrl_entry_sz *
          VAR_13->caps.max_qp_init_rdma,
          VAR_13->caps.num_qps, 1);
 if (VAR_14) {
  FUNC_0(VAR_15, "Failed to init irrl_table memory, aborting.\n");
  goto err_unmap_qp;
 }

 if (VAR_13->caps.trrl_entry_sz) {
  VAR_14 = FUNC_3(VAR_13,
           &VAR_13->qp_table.trrl_table,
           VAR_12,
           VAR_13->caps.trrl_entry_sz *
           VAR_13->caps.max_qp_dest_rdma,
           VAR_13->caps.num_qps, 1);
  if (VAR_14) {
   FUNC_0(VAR_15,
          "Failed to init trrl_table memory, aborting.\n");
   goto err_unmap_irrl;
  }
 }

 VAR_14 = FUNC_3(VAR_13, &VAR_13->cq_table.table,
          VAR_0, VAR_13->caps.cqc_entry_sz,
          VAR_13->caps.num_cqs, 1);
 if (VAR_14) {
  FUNC_0(VAR_15, "Failed to init CQ context memory, aborting.\n");
  goto err_unmap_trrl;
 }

 if (VAR_13->caps.srqc_entry_sz) {
  VAR_14 = FUNC_3(VAR_13, &VAR_13->srq_table.table,
           VAR_10,
           VAR_13->caps.srqc_entry_sz,
           VAR_13->caps.num_srqs, 1);
  if (VAR_14) {
   FUNC_0(VAR_15,
         "Failed to init SRQ context memory, aborting.\n");
   goto err_unmap_cq;
  }
 }

 if (VAR_13->caps.num_srqwqe_segs) {
  VAR_14 = FUNC_3(VAR_13,
          &VAR_13->mr_table.mtt_srqwqe_table,
          VAR_11,
          VAR_13->caps.mtt_entry_sz,
          VAR_13->caps.num_srqwqe_segs, 1);
  if (VAR_14) {
   FUNC_0(VAR_15,
    "Failed to init MTT srqwqe memory, aborting.\n");
   goto err_unmap_srq;
  }
 }

 if (VAR_13->caps.num_idx_segs) {
  VAR_14 = FUNC_3(VAR_13,
           &VAR_13->mr_table.mtt_idx_table,
           VAR_3,
           VAR_13->caps.idx_entry_sz,
           VAR_13->caps.num_idx_segs, 1);
  if (VAR_14) {
   FUNC_0(VAR_15,
    "Failed to init MTT idx memory, aborting.\n");
   goto err_unmap_srqwqe;
  }
 }

 if (VAR_13->caps.sccc_entry_sz) {
  VAR_14 = FUNC_3(VAR_13,
           &VAR_13->qp_table.sccc_table,
           VAR_9,
           VAR_13->caps.sccc_entry_sz,
           VAR_13->caps.num_qps, 1);
  if (VAR_14) {
   FUNC_0(VAR_15,
         "Failed to init SCC context memory, aborting.\n");
   goto err_unmap_idx;
  }
 }

 if (VAR_13->caps.qpc_timer_entry_sz) {
  VAR_14 = FUNC_3(VAR_13,
           &VAR_13->qpc_timer_table,
           VAR_8,
           VAR_13->caps.qpc_timer_entry_sz,
           VAR_13->caps.num_qpc_timer, 1);
  if (VAR_14) {
   FUNC_0(VAR_15,
         "Failed to init QPC timer memory, aborting.\n");
   goto err_unmap_ctx;
  }
 }

 if (VAR_13->caps.cqc_timer_entry_sz) {
  VAR_14 = FUNC_3(VAR_13,
           &VAR_13->cqc_timer_table,
           VAR_1,
           VAR_13->caps.cqc_timer_entry_sz,
           VAR_13->caps.num_cqc_timer, 1);
  if (VAR_14) {
   FUNC_0(VAR_15,
         "Failed to init CQC timer memory, aborting.\n");
   goto err_unmap_qpc_timer;
  }
 }

 return 0;

err_unmap_qpc_timer:
 if (VAR_13->caps.qpc_timer_entry_sz)
  FUNC_2(VAR_13,
        &VAR_13->qpc_timer_table);

err_unmap_ctx:
 if (VAR_13->caps.sccc_entry_sz)
  FUNC_2(VAR_13,
        &VAR_13->qp_table.sccc_table);

err_unmap_idx:
 if (VAR_13->caps.num_idx_segs)
  FUNC_2(VAR_13,
        &VAR_13->mr_table.mtt_idx_table);

err_unmap_srqwqe:
 if (VAR_13->caps.num_srqwqe_segs)
  FUNC_2(VAR_13,
        &VAR_13->mr_table.mtt_srqwqe_table);

err_unmap_srq:
 if (VAR_13->caps.srqc_entry_sz)
  FUNC_2(VAR_13, &VAR_13->srq_table.table);

err_unmap_cq:
 FUNC_2(VAR_13, &VAR_13->cq_table.table);

err_unmap_trrl:
 if (VAR_13->caps.trrl_entry_sz)
  FUNC_2(VAR_13,
        &VAR_13->qp_table.trrl_table);

err_unmap_irrl:
 FUNC_2(VAR_13, &VAR_13->qp_table.irrl_table);

err_unmap_qp:
 FUNC_2(VAR_13, &VAR_13->qp_table.qp_table);

err_unmap_dmpt:
 FUNC_2(VAR_13, &VAR_13->mr_table.mtpt_table);

err_unmap_mtt:
 if (FUNC_1(VAR_13, VAR_2))
  FUNC_2(VAR_13,
        &VAR_13->mr_table.mtt_cqe_table);

err_unmap_cqe:
 FUNC_2(VAR_13, &VAR_13->mr_table.mtt_table);

 return VAR_14;
}
