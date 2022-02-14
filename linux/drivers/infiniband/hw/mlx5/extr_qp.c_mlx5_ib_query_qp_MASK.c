
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int max_gs; int max_post; } ;
struct TYPE_6__ {int max_gs; int wqe_cnt; } ;
struct TYPE_5__ {scalar_t__ qp_type; } ;
struct mlx5_ib_qp {scalar_t__ qp_sub_type; int flags; int sq_signal_bits; int mutex; int max_inline_data; TYPE_3__ sq; TYPE_2__ rq; int state; TYPE_1__ ibqp; } ;
struct mlx5_ib_dev {int dummy; } ;
struct TYPE_8__ {int max_inline_data; int max_send_sge; int max_send_wr; int max_recv_sge; int max_recv_wr; } ;
struct ib_qp_init_attr {int port_num; scalar_t__ qp_type; int sq_sig_type; int create_flags; TYPE_4__ cap; int srq; int send_cq; int recv_cq; int qp_context; int qp_state; int cur_qp_state; } ;
struct ib_qp_attr {int port_num; scalar_t__ qp_type; int sq_sig_type; int create_flags; TYPE_4__ cap; int srq; int send_cq; int recv_cq; int qp_context; int qp_state; int cur_qp_state; } ;
struct ib_qp {scalar_t__ qp_type; int srq; int send_cq; int recv_cq; int qp_context; int uobject; scalar_t__ rwq_ind_tbl; int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct ib_qp_init_attr*,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct mlx5_ib_dev*,struct mlx5_ib_qp*,struct ib_qp_init_attr*,int,struct ib_qp_init_attr*) ;
 int FUNC_3 (struct ib_qp*,struct ib_qp_init_attr*,int,struct ib_qp_init_attr*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mlx5_ib_dev*,struct mlx5_ib_qp*,struct ib_qp_init_attr*) ;
 int FUNC_7 (struct mlx5_ib_dev*,struct mlx5_ib_qp*,int *) ;
 struct mlx5_ib_dev* FUNC_8 (int ) ;
 struct mlx5_ib_qp* FUNC_9 (struct ib_qp*) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct ib_qp *VAR_17, struct ib_qp_attr *VAR_18,
       int VAR_19, struct ib_qp_init_attr *VAR_20)
{
 struct mlx5_ib_dev *VAR_21 = FUNC_8(VAR_17->device);
 struct mlx5_ib_qp *VAR_22 = FUNC_9(VAR_17);
 int VAR_23 = 0;
 u8 VAR_24;

 if (VAR_17->rwq_ind_tbl)
  return -VAR_0;

 if (FUNC_10(VAR_17->qp_type == VAR_1))
  return FUNC_3(VAR_17, VAR_18, VAR_19,
         VAR_20);


 FUNC_0(VAR_20, 0, sizeof(*VAR_20));
 FUNC_0(VAR_18, 0, sizeof(*VAR_18));

 if (FUNC_10(VAR_22->qp_sub_type == VAR_9))
  return FUNC_2(VAR_21, VAR_22, VAR_18,
         VAR_19, VAR_20);

 FUNC_4(&VAR_22->mutex);

 if (VAR_22->ibqp.qp_type == VAR_2 ||
     VAR_22->flags & VAR_15) {
  VAR_23 = FUNC_7(VAR_21, VAR_22, &VAR_24);
  if (VAR_23)
   goto out;
  VAR_22->state = VAR_24;
  VAR_18->port_num = 1;
 } else {
  VAR_23 = FUNC_6(VAR_21, VAR_22, VAR_18);
  if (VAR_23)
   goto out;
 }

 VAR_18->qp_state = VAR_22->state;
 VAR_18->cur_qp_state = VAR_18->qp_state;
 VAR_18->cap.max_recv_wr = VAR_22->rq.wqe_cnt;
 VAR_18->cap.max_recv_sge = VAR_22->rq.max_gs;

 if (!VAR_17->uobject) {
  VAR_18->cap.max_send_wr = VAR_22->sq.max_post;
  VAR_18->cap.max_send_sge = VAR_22->sq.max_gs;
  VAR_20->qp_context = VAR_17->qp_context;
 } else {
  VAR_18->cap.max_send_wr = 0;
  VAR_18->cap.max_send_sge = 0;
 }

 VAR_20->qp_type = VAR_17->qp_type;
 VAR_20->recv_cq = VAR_17->recv_cq;
 VAR_20->send_cq = VAR_17->send_cq;
 VAR_20->srq = VAR_17->srq;
 VAR_18->cap.max_inline_data = VAR_22->max_inline_data;

 VAR_20->cap = VAR_18->cap;

 VAR_20->create_flags = 0;
 if (VAR_22->flags & VAR_10)
  VAR_20->create_flags |= VAR_3;

 if (VAR_22->flags & VAR_11)
  VAR_20->create_flags |= VAR_4;
 if (VAR_22->flags & VAR_13)
  VAR_20->create_flags |= VAR_6;
 if (VAR_22->flags & VAR_12)
  VAR_20->create_flags |= VAR_5;
 if (VAR_22->flags & VAR_14)
  VAR_20->create_flags |= FUNC_1();

 VAR_20->sq_sig_type = VAR_22->sq_signal_bits & VAR_16 ?
  VAR_7 : VAR_8;

out:
 FUNC_5(&VAR_22->mutex);
 return VAR_23;
}
