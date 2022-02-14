
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_modify_raw_qp_param {int operation; int port; int set_mask; } ;
struct mlx5_ib_sq {int state; struct mlx5_flow_handle* flow_rule; } ;
struct mlx5_ib_rq {int dummy; } ;
struct mlx5_ib_raw_packet_qp {struct mlx5_ib_sq sq; struct mlx5_ib_rq rq; } ;
struct TYPE_6__ {int pd; } ;
struct TYPE_5__ {int wqe_cnt; } ;
struct TYPE_4__ {int wqe_cnt; } ;
struct mlx5_ib_qp {TYPE_3__ ibqp; TYPE_2__ sq; TYPE_1__ rq; struct mlx5_ib_raw_packet_qp raw_packet_qp; } ;
struct mlx5_ib_dev {int mdev; } ;
struct mlx5_flow_handle {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_flow_handle*) ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct mlx5_flow_handle*) ;
 int FUNC_2 (int) ;
 struct mlx5_flow_handle* FUNC_3 (struct mlx5_ib_dev*,struct mlx5_ib_sq*,int ) ;
 int FUNC_4 (struct mlx5_ib_sq*) ;
 int FUNC_5 (struct mlx5_flow_handle*) ;
 int FUNC_6 (struct mlx5_ib_dev*,struct mlx5_ib_rq*,int,struct mlx5_modify_raw_qp_param const*,int ) ;
 int FUNC_7 (int ,struct mlx5_ib_sq*,int,struct mlx5_modify_raw_qp_param const*,int ) ;
 int FUNC_8 (int ,struct mlx5_ib_sq*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct mlx5_ib_dev *VAR_8, struct mlx5_ib_qp *VAR_9,
    const struct mlx5_modify_raw_qp_param *VAR_10,
    u8 VAR_11)
{
 struct mlx5_ib_raw_packet_qp *VAR_12 = &VAR_9->raw_packet_qp;
 struct mlx5_ib_rq *VAR_13 = &VAR_12->rq;
 struct mlx5_ib_sq *VAR_14 = &VAR_12->sq;
 int VAR_15 = !!VAR_9->rq.wqe_cnt;
 int VAR_16 = !!VAR_9->sq.wqe_cnt;
 int VAR_17;
 int VAR_18;
 int VAR_19;

 switch (VAR_10->operation) {
 case 130:
  VAR_17 = VAR_3;
  VAR_18 = VAR_6;
  break;
 case 134:
  VAR_17 = VAR_2;
  VAR_18 = VAR_5;
  break;
 case 133:
  VAR_17 = VAR_4;
  VAR_18 = VAR_7;
  break;
 case 129:
 case 128:
  if (VAR_10->set_mask ==
      VAR_1) {
   VAR_15 = 0;
   VAR_18 = VAR_14->state;
  } else {
   return VAR_10->set_mask ? -VAR_0 : 0;
  }
  break;
 case 132:
 case 131:
  if (VAR_10->set_mask)
   return -VAR_0;
  else
   return 0;
 default:
  FUNC_2(1);
  return -VAR_0;
 }

 if (VAR_15) {
  VAR_19 = FUNC_6(VAR_8, VAR_13, VAR_17, VAR_10,
            VAR_9->ibqp.pd);
  if (VAR_19)
   return VAR_19;
 }

 if (VAR_16) {
  struct mlx5_flow_handle *VAR_20;

  if (VAR_11) {
   VAR_19 = FUNC_8(VAR_8->mdev, VAR_14,
           VAR_11,
           VAR_9->ibqp.pd);
   if (VAR_19)
    return VAR_19;
  }

  VAR_20 = FUNC_3(VAR_8, VAR_14,
            VAR_10->port);
  if (FUNC_0(VAR_20))
   return FUNC_1(VAR_20);

  VAR_19 = FUNC_7(VAR_8->mdev, VAR_14, VAR_18,
           VAR_10, VAR_9->ibqp.pd);
  if (VAR_19) {
   if (VAR_20)
    FUNC_5(VAR_20);
   return VAR_19;
  }

  if (VAR_20) {
   FUNC_4(VAR_14);
   VAR_14->flow_rule = VAR_20;
  }

  return VAR_19;
 }

 return 0;
}
