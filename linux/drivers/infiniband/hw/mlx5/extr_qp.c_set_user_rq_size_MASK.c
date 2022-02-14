
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_rwq {scalar_t__ wqe_count; int log_rq_size; int wqe_shift; int log_rq_stride; int buf_size; } ;
struct mlx5_ib_dev {int mdev; } ;
struct mlx5_ib_create_wq {int rq_wqe_shift; scalar_t__ rq_wqe_count; } ;
struct ib_wq_init_attr {int max_wr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct mlx5_ib_dev *VAR_2,
       struct ib_wq_init_attr *VAR_3,
       struct mlx5_ib_create_wq *VAR_4,
       struct mlx5_ib_rwq *VAR_5)
{

 if (VAR_3->max_wr > (1 << FUNC_0(VAR_2->mdev, VAR_1)))
  return -VAR_0;

 if (!VAR_4->rq_wqe_count)
  return -VAR_0;

 VAR_5->wqe_count = VAR_4->rq_wqe_count;
 VAR_5->wqe_shift = VAR_4->rq_wqe_shift;
 if (FUNC_1(VAR_5->wqe_count, VAR_5->wqe_shift, &VAR_5->buf_size))
  return -VAR_0;

 VAR_5->log_rq_stride = VAR_5->wqe_shift;
 VAR_5->log_rq_size = FUNC_2(VAR_5->wqe_count);
 return 0;
}
