
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_wq {int wqe_shift; } ;
struct mlx5_ib_qp {scalar_t__ wq_sig; struct mlx5_ib_wq rq; } ;
struct mlx5_ib_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_ib_dev*,char*) ;

__attribute__((used)) static int FUNC_1(struct mlx5_ib_dev *VAR_1,
        struct mlx5_ib_qp *VAR_2,
        void *VAR_3, void **VAR_4,
        int VAR_5)
{
 struct mlx5_ib_wq *VAR_6 = &VAR_2->rq;
 int VAR_7 = 1 << VAR_6->wqe_shift;

 if (VAR_2->wq_sig) {
  FUNC_0(VAR_1, "ODP fault with WQE signatures is not supported\n");
  return -VAR_0;
 }

 if (VAR_7 > VAR_5) {
  FUNC_0(VAR_1, "Couldn't read all of the receive WQE's content\n");
  return -VAR_0;
 }

 *VAR_4 = VAR_3 + VAR_7;

 return 0;
}
