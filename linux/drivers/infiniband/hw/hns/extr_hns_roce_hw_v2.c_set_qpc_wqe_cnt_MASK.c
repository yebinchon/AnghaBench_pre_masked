
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hns_roce_v2_qp_context {int byte_20_smac_sgid_idx; int byte_4_sqpn_tst; } ;
struct TYPE_8__ {scalar_t__ wqe_cnt; } ;
struct TYPE_7__ {scalar_t__ qp_type; scalar_t__ srq; } ;
struct TYPE_6__ {scalar_t__ max_gs; scalar_t__ wqe_cnt; } ;
struct TYPE_5__ {scalar_t__ sge_cnt; } ;
struct hns_roce_qp {TYPE_4__ rq; TYPE_3__ ibqp; TYPE_2__ sq; TYPE_1__ sge; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hns_roce_qp *VAR_10,
       struct hns_roce_v2_qp_context *VAR_11,
       struct hns_roce_v2_qp_context *VAR_12)
{
 if (VAR_10->ibqp.qp_type == VAR_1)
  FUNC_1(VAR_11->byte_4_sqpn_tst,
          VAR_8,
          VAR_9,
          FUNC_0((unsigned int)VAR_10->sge.sge_cnt));
 else
  FUNC_1(VAR_11->byte_4_sqpn_tst,
          VAR_8,
          VAR_9,
          VAR_10->sq.max_gs >
          VAR_0 ?
          FUNC_0((unsigned int)VAR_10->sge.sge_cnt) : 0);

 FUNC_1(VAR_12->byte_4_sqpn_tst, VAR_8,
         VAR_9, 0);

 FUNC_1(VAR_11->byte_20_smac_sgid_idx,
         VAR_6, VAR_7,
         FUNC_0((unsigned int)VAR_10->sq.wqe_cnt));
 FUNC_1(VAR_12->byte_20_smac_sgid_idx,
         VAR_6, VAR_7, 0);

 FUNC_1(VAR_11->byte_20_smac_sgid_idx,
         VAR_4, VAR_5,
         (VAR_10->ibqp.qp_type == VAR_2 ||
         VAR_10->ibqp.qp_type == VAR_3 ||
         VAR_10->ibqp.srq) ? 0 :
         FUNC_0((unsigned int)VAR_10->rq.wqe_cnt));

 FUNC_1(VAR_12->byte_20_smac_sgid_idx,
         VAR_4, VAR_5, 0);
}
