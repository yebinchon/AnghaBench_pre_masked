
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_counter {int dummy; } ;
struct mlx5_ib_qp {scalar_t__ state; int counter_pending; int mutex; } ;
struct ib_qp {struct rdma_counter* counter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ib_qp*,struct rdma_counter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mlx5_ib_qp* FUNC_3 (struct ib_qp*) ;

int FUNC_4(struct ib_qp *VAR_2, struct rdma_counter *VAR_3)
{
 struct mlx5_ib_qp *VAR_4 = FUNC_3(VAR_2);
 int VAR_5 = 0;

 FUNC_1(&VAR_4->mutex);
 if (VAR_4->state == VAR_0) {
  VAR_2->counter = VAR_3;
  goto out;
 }

 if (VAR_4->state == VAR_1) {
  VAR_5 = FUNC_0(VAR_2, VAR_3);
  if (!VAR_5)
   VAR_2->counter = VAR_3;

  goto out;
 }

 VAR_4->counter_pending = 1;
 VAR_2->counter = VAR_3;

out:
 FUNC_2(&VAR_4->mutex);
 return VAR_5;
}
