
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int done; } ;
struct mlx4_ib_drain_cqe {int done; TYPE_2__ cqe; } ;
struct mlx4_ib_dev {struct mlx4_dev* dev; } ;
struct mlx4_dev {TYPE_1__* persist; } ;
struct ib_recv_wr {TYPE_2__* wr_cqe; } ;
struct ib_qp_attr {int qp_state; } ;
struct ib_qp {int device; struct ib_cq* recv_cq; } ;
struct ib_cq {int dummy; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct ib_qp*,struct ib_recv_wr*,struct ib_recv_wr const**,int) ;
 int FUNC_2 (struct ib_cq*,struct mlx4_ib_drain_cqe*,struct mlx4_ib_dev*) ;
 int FUNC_3 (struct ib_qp*,struct ib_qp_attr*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 struct mlx4_ib_dev* FUNC_5 (int ) ;

void FUNC_6(struct ib_qp *VAR_4)
{
 struct ib_cq *VAR_5 = VAR_4->recv_cq;
 struct ib_qp_attr VAR_6 = { .qp_state = VAR_0 };
 struct mlx4_ib_drain_cqe VAR_7;
 struct ib_recv_wr VAR_8 = {};
 const struct ib_recv_wr *VAR_9;
 int VAR_10;
 struct mlx4_ib_dev *VAR_11 = FUNC_5(VAR_4->device);
 struct mlx4_dev *VAR_12 = VAR_11->dev;

 VAR_10 = FUNC_3(VAR_4, &VAR_6, VAR_1);
 if (VAR_10 && VAR_12->persist->state != VAR_2) {
  FUNC_0(VAR_10, "failed to drain recv queue: %d\n", VAR_10);
  return;
 }

 VAR_8.wr_cqe = &VAR_7.cqe;
 VAR_7.cqe.done = VAR_3;
 FUNC_4(&VAR_7.done);

 VAR_10 = FUNC_1(VAR_4, &VAR_8, &VAR_9, 1);
 if (VAR_10) {
  FUNC_0(VAR_10, "failed to drain recv queue: %d\n", VAR_10);
  return;
 }

 FUNC_2(VAR_5, &VAR_7, VAR_11);
}
