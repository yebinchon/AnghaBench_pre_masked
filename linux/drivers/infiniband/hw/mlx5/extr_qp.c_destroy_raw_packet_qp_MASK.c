
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_ib_sq {int dummy; } ;
struct mlx5_ib_rq {int dummy; } ;
struct mlx5_ib_raw_packet_qp {struct mlx5_ib_rq rq; struct mlx5_ib_sq sq; } ;
struct TYPE_6__ {int pd; } ;
struct TYPE_5__ {scalar_t__ wqe_cnt; } ;
struct TYPE_4__ {scalar_t__ wqe_cnt; } ;
struct mlx5_ib_qp {TYPE_3__ ibqp; TYPE_2__ sq; int flags_en; TYPE_1__ rq; struct mlx5_ib_raw_packet_qp raw_packet_qp; } ;
struct mlx5_ib_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_ib_dev*,struct mlx5_ib_rq*) ;
 int FUNC_1 (struct mlx5_ib_dev*,struct mlx5_ib_sq*) ;
 int FUNC_2 (struct mlx5_ib_dev*,struct mlx5_ib_rq*,int ,int ) ;
 int FUNC_3 (struct mlx5_ib_dev*,struct mlx5_ib_sq*,int ) ;

__attribute__((used)) static void FUNC_4(struct mlx5_ib_dev *VAR_0,
      struct mlx5_ib_qp *VAR_1)
{
 struct mlx5_ib_raw_packet_qp *VAR_2 = &VAR_1->raw_packet_qp;
 struct mlx5_ib_sq *VAR_3 = &VAR_2->sq;
 struct mlx5_ib_rq *VAR_4 = &VAR_2->rq;

 if (VAR_1->rq.wqe_cnt) {
  FUNC_2(VAR_0, VAR_4, VAR_1->flags_en, VAR_1->ibqp.pd);
  FUNC_0(VAR_0, VAR_4);
 }

 if (VAR_1->sq.wqe_cnt) {
  FUNC_1(VAR_0, VAR_3);
  FUNC_3(VAR_0, VAR_3, VAR_1->ibqp.pd);
 }
}
