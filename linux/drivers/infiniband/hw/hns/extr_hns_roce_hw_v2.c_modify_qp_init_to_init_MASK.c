
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ib_qp_attr {int qp_access_flags; } ;
struct ib_qp {scalar_t__ srq; int send_cq; int recv_cq; int pd; } ;
struct hns_roce_v2_qp_context {int byte_56_dqpn_err; int byte_4_sqpn_tst; int byte_76_srqn_op_en; int byte_252_err_txcqn; int byte_80_rnr_rx_cqn; int byte_16_buf_ba_pg_sz; } ;
struct TYPE_5__ {int qp_type; } ;
struct hns_roce_qp {int access_flags; int qpn; TYPE_1__ ibqp; } ;
struct TYPE_8__ {int cqn; } ;
struct TYPE_7__ {int pdn; } ;
struct TYPE_6__ {int srqn; } ;


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
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 TYPE_4__* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ) ;
 struct hns_roce_qp* FUNC_4 (struct ib_qp*) ;
 int FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct ib_qp *VAR_23,
       const struct ib_qp_attr *VAR_24, int VAR_25,
       struct hns_roce_v2_qp_context *VAR_26,
       struct hns_roce_v2_qp_context *VAR_27)
{
 struct hns_roce_qp *VAR_28 = FUNC_4(VAR_23);







 FUNC_1(VAR_26->byte_4_sqpn_tst, VAR_11,
         VAR_12, FUNC_5(VAR_28->ibqp.qp_type));
 FUNC_1(VAR_27->byte_4_sqpn_tst, VAR_11,
         VAR_12, 0);

 if (VAR_25 & VAR_3) {
  FUNC_0(VAR_26->byte_76_srqn_op_en, VAR_16,
        !!(VAR_24->qp_access_flags & VAR_1));
  FUNC_0(VAR_27->byte_76_srqn_op_en, VAR_16,
        0);

  FUNC_0(VAR_26->byte_76_srqn_op_en, VAR_17,
        !!(VAR_24->qp_access_flags &
        VAR_2));
  FUNC_0(VAR_27->byte_76_srqn_op_en, VAR_17,
        0);

  FUNC_0(VAR_26->byte_76_srqn_op_en, VAR_15,
        !!(VAR_24->qp_access_flags &
        VAR_0));
  FUNC_0(VAR_27->byte_76_srqn_op_en, VAR_15,
        0);
 } else {
  FUNC_0(VAR_26->byte_76_srqn_op_en, VAR_16,
        !!(VAR_28->access_flags & VAR_1));
  FUNC_0(VAR_27->byte_76_srqn_op_en, VAR_16,
        0);

  FUNC_0(VAR_26->byte_76_srqn_op_en, VAR_17,
        !!(VAR_28->access_flags & VAR_2));
  FUNC_0(VAR_27->byte_76_srqn_op_en, VAR_17,
        0);

  FUNC_0(VAR_26->byte_76_srqn_op_en, VAR_15,
        !!(VAR_28->access_flags & VAR_0));
  FUNC_0(VAR_27->byte_76_srqn_op_en, VAR_15,
        0);
 }

 FUNC_1(VAR_26->byte_16_buf_ba_pg_sz, VAR_5,
         VAR_6, FUNC_3(VAR_23->pd)->pdn);
 FUNC_1(VAR_27->byte_16_buf_ba_pg_sz, VAR_5,
         VAR_6, 0);

 FUNC_1(VAR_26->byte_80_rnr_rx_cqn, VAR_21,
         VAR_22, FUNC_2(VAR_23->recv_cq)->cqn);
 FUNC_1(VAR_27->byte_80_rnr_rx_cqn, VAR_21,
         VAR_22, 0);

 FUNC_1(VAR_26->byte_252_err_txcqn, VAR_7,
         VAR_8, FUNC_2(VAR_23->send_cq)->cqn);
 FUNC_1(VAR_27->byte_252_err_txcqn, VAR_7,
         VAR_8, 0);

 if (VAR_23->srq) {
  FUNC_0(VAR_26->byte_76_srqn_op_en,
        VAR_20, 1);
  FUNC_0(VAR_27->byte_76_srqn_op_en,
        VAR_20, 0);
  FUNC_1(VAR_26->byte_76_srqn_op_en,
          VAR_18, VAR_19,
          FUNC_6(VAR_23->srq)->srqn);
  FUNC_1(VAR_27->byte_76_srqn_op_en,
          VAR_18, VAR_19, 0);
 }

 FUNC_1(VAR_26->byte_4_sqpn_tst, VAR_9,
         VAR_10, VAR_28->qpn);
 FUNC_1(VAR_27->byte_4_sqpn_tst, VAR_9,
         VAR_10, 0);

 if (VAR_25 & VAR_4) {
  FUNC_1(VAR_26->byte_56_dqpn_err, VAR_13,
          VAR_14, VAR_28->qpn);
  FUNC_1(VAR_27->byte_56_dqpn_err,
          VAR_13, VAR_14, 0);
 }
}
