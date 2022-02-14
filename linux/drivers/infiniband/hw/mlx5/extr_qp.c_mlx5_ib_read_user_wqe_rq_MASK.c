
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_ib_wq {int wqe_shift; int wqe_cnt; int offset; } ;
struct TYPE_4__ {struct ib_umem* umem; } ;
struct mlx5_ib_qp_base {TYPE_2__ ubuffer; } ;
struct TYPE_3__ {struct mlx5_ib_qp_base base; } ;
struct mlx5_ib_qp {struct mlx5_ib_wq rq; TYPE_1__ trans_qp; } ;
struct ib_umem {int dummy; } ;


 int FUNC_0 (struct ib_umem*,void*,int,int,int ,int ,int ,int,size_t*) ;

int FUNC_1(struct mlx5_ib_qp *VAR_0,
        int VAR_1,
        void *VAR_2,
        int VAR_3,
        size_t *VAR_4)
{
 struct mlx5_ib_qp_base *VAR_5 = &VAR_0->trans_qp.base;
 struct ib_umem *VAR_6 = VAR_5->ubuffer.umem;
 struct mlx5_ib_wq *VAR_7 = &VAR_0->rq;
 size_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_6,
        VAR_2,
        VAR_3,
        VAR_1,
        VAR_7->offset,
        VAR_7->wqe_cnt,
        VAR_7->wqe_shift,
        VAR_3,
        &VAR_8);

 if (VAR_9)
  return VAR_9;
 *VAR_4 = VAR_8;
 return 0;
}
