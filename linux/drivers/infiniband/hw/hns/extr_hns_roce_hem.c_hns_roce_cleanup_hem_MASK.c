
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int mtt_table; int mtt_cqe_table; int mtpt_table; int mtt_srqwqe_table; int mtt_idx_table; } ;
struct TYPE_9__ {int qp_table; int irrl_table; int trrl_table; int sccc_table; } ;
struct TYPE_8__ {scalar_t__ trrl_entry_sz; scalar_t__ sccc_entry_sz; scalar_t__ cqc_timer_entry_sz; scalar_t__ qpc_timer_entry_sz; scalar_t__ srqc_entry_sz; scalar_t__ num_srqwqe_segs; scalar_t__ num_idx_segs; } ;
struct TYPE_7__ {int table; } ;
struct TYPE_6__ {int table; } ;
struct hns_roce_dev {TYPE_5__ mr_table; TYPE_4__ qp_table; TYPE_3__ caps; int cqc_timer_table; int qpc_timer_table; TYPE_2__ cq_table; TYPE_1__ srq_table; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hns_roce_dev*,int ) ;
 int FUNC_1 (struct hns_roce_dev*,int *) ;

void FUNC_2(struct hns_roce_dev *VAR_1)
{
 if ((VAR_1->caps.num_idx_segs))
  FUNC_1(VAR_1,
        &VAR_1->mr_table.mtt_idx_table);
 if (VAR_1->caps.num_srqwqe_segs)
  FUNC_1(VAR_1,
        &VAR_1->mr_table.mtt_srqwqe_table);
 if (VAR_1->caps.srqc_entry_sz)
  FUNC_1(VAR_1,
        &VAR_1->srq_table.table);
 FUNC_1(VAR_1, &VAR_1->cq_table.table);
 if (VAR_1->caps.qpc_timer_entry_sz)
  FUNC_1(VAR_1,
        &VAR_1->qpc_timer_table);
 if (VAR_1->caps.cqc_timer_entry_sz)
  FUNC_1(VAR_1,
        &VAR_1->cqc_timer_table);
 if (VAR_1->caps.sccc_entry_sz)
  FUNC_1(VAR_1,
        &VAR_1->qp_table.sccc_table);
 if (VAR_1->caps.trrl_entry_sz)
  FUNC_1(VAR_1,
        &VAR_1->qp_table.trrl_table);
 FUNC_1(VAR_1, &VAR_1->qp_table.irrl_table);
 FUNC_1(VAR_1, &VAR_1->qp_table.qp_table);
 FUNC_1(VAR_1, &VAR_1->mr_table.mtpt_table);
 if (FUNC_0(VAR_1, VAR_0))
  FUNC_1(VAR_1,
        &VAR_1->mr_table.mtt_cqe_table);
 FUNC_1(VAR_1, &VAR_1->mr_table.mtt_table);
}
