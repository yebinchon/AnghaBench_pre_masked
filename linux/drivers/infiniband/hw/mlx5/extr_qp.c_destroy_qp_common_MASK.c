
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mlx5_modify_raw_qp_param {int operation; } ;
struct TYPE_12__ {int qpn; } ;
struct mlx5_ib_qp_base {TYPE_5__ mqp; } ;
struct TYPE_11__ {scalar_t__ qp_type; scalar_t__ srq; int recv_cq; int send_cq; scalar_t__ rwq_ind_tbl; } ;
struct TYPE_10__ {struct mlx5_ib_qp_base base; } ;
struct TYPE_8__ {struct mlx5_ib_qp_base base; } ;
struct TYPE_9__ {TYPE_1__ rq; } ;
struct mlx5_ib_qp {int flags; scalar_t__ state; scalar_t__ create_type; TYPE_4__ ibqp; int cq_recv_list; int cq_send_list; int qps_list; TYPE_3__ trans_qp; TYPE_2__ raw_packet_qp; } ;
struct mlx5_ib_dev {int mdev; int reset_flow_resource_lock; } ;
struct mlx5_ib_cq {int dummy; } ;
struct ib_udata {int dummy; } ;
struct TYPE_13__ {int ibpd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct mlx5_ib_cq*,int ,int *) ;
 int FUNC_1 (struct mlx5_ib_dev*,struct mlx5_ib_qp*) ;
 int FUNC_2 (struct mlx5_ib_dev*,int *,struct mlx5_ib_qp*,struct mlx5_ib_qp_base*,struct ib_udata*) ;
 int FUNC_3 (struct mlx5_ib_dev*,struct mlx5_ib_qp*) ;
 int FUNC_4 (struct mlx5_ib_dev*,struct mlx5_ib_qp*) ;
 int FUNC_5 (scalar_t__,int ,int ,struct mlx5_ib_cq**,struct mlx5_ib_cq**) ;
 TYPE_7__* FUNC_6 (struct mlx5_ib_qp*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,TYPE_5__*) ;
 int FUNC_9 (int ,int ,int ,int *,TYPE_5__*) ;
 int FUNC_10 (struct mlx5_ib_cq*,struct mlx5_ib_cq*) ;
 int FUNC_11 (struct mlx5_ib_cq*,struct mlx5_ib_cq*) ;
 int FUNC_12 (struct mlx5_ib_dev*,char*,int ) ;
 int FUNC_13 (struct mlx5_ib_dev*,struct mlx5_ib_qp*,struct mlx5_modify_raw_qp_param*,int ) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 int * FUNC_16 (scalar_t__) ;

__attribute__((used)) static void FUNC_17(struct mlx5_ib_dev *VAR_6, struct mlx5_ib_qp *VAR_7,
         struct ib_udata *VAR_8)
{
 struct mlx5_ib_cq *VAR_9, *VAR_10;
 struct mlx5_ib_qp_base *VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 if (VAR_7->ibqp.rwq_ind_tbl) {
  FUNC_4(VAR_6, VAR_7);
  return;
 }

 VAR_11 = (VAR_7->ibqp.qp_type == VAR_1 ||
  VAR_7->flags & VAR_3) ?
        &VAR_7->raw_packet_qp.rq.base :
        &VAR_7->trans_qp.base;

 if (VAR_7->state != VAR_0) {
  if (VAR_7->ibqp.qp_type != VAR_1 &&
      !(VAR_7->flags & VAR_3)) {
   VAR_13 = FUNC_9(VAR_6->mdev,
        VAR_2, 0,
        ((void*)0), &VAR_11->mqp);
  } else {
   struct mlx5_modify_raw_qp_param VAR_14 = {
    .operation = VAR_2
   };

   VAR_13 = FUNC_13(VAR_6, VAR_7, &VAR_14, 0);
  }
  if (VAR_13)
   FUNC_12(VAR_6, "mlx5_ib: modify QP 0x%06x to RESET failed\n",
         VAR_11->mqp.qpn);
 }

 FUNC_5(VAR_7->ibqp.qp_type, VAR_7->ibqp.send_cq, VAR_7->ibqp.recv_cq,
  &VAR_9, &VAR_10);

 FUNC_14(&VAR_6->reset_flow_resource_lock, VAR_12);
 FUNC_10(VAR_9, VAR_10);

 FUNC_7(&VAR_7->qps_list);
 if (VAR_9)
  FUNC_7(&VAR_7->cq_send_list);

 if (VAR_10)
  FUNC_7(&VAR_7->cq_recv_list);

 if (VAR_7->create_type == VAR_4) {
  FUNC_0(VAR_10, VAR_11->mqp.qpn,
       VAR_7->ibqp.srq ? FUNC_16(VAR_7->ibqp.srq) : ((void*)0));
  if (VAR_9 != VAR_10)
   FUNC_0(VAR_9, VAR_11->mqp.qpn,
        ((void*)0));
 }
 FUNC_11(VAR_9, VAR_10);
 FUNC_15(&VAR_6->reset_flow_resource_lock, VAR_12);

 if (VAR_7->ibqp.qp_type == VAR_1 ||
     VAR_7->flags & VAR_3) {
  FUNC_3(VAR_6, VAR_7);
 } else {
  VAR_13 = FUNC_8(VAR_6->mdev, &VAR_11->mqp);
  if (VAR_13)
   FUNC_12(VAR_6, "failed to destroy QP 0x%x\n",
         VAR_11->mqp.qpn);
 }

 if (VAR_7->create_type == VAR_4)
  FUNC_1(VAR_6, VAR_7);
 else if (VAR_7->create_type == VAR_5)
  FUNC_2(VAR_6, &FUNC_6(VAR_7)->ibpd, VAR_7, VAR_11, VAR_8);
}
