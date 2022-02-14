
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_qp {int dummy; } ;
struct mlx5_ib_dev {struct mlx5_core_dev* mdev; } ;
struct TYPE_2__ {int device; } ;
struct mlx5_ib_cq {int lock; int mcq; int wc_list; TYPE_1__ ibcq; } ;
struct mlx5_core_dev {scalar_t__ state; } ;
struct ib_wc {int dummy; } ;
struct ib_cq {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5_ib_cq*,int,struct ib_wc*,int*) ;
 scalar_t__ FUNC_3 (struct mlx5_ib_cq*,struct mlx5_ib_qp**,struct ib_wc*) ;
 int FUNC_4 (struct mlx5_ib_cq*,int,struct ib_wc*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct mlx5_ib_cq* FUNC_7 (struct ib_cq*) ;
 struct mlx5_ib_dev* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct ib_cq *VAR_1, int VAR_2, struct ib_wc *VAR_3)
{
 struct mlx5_ib_cq *VAR_4 = FUNC_7(VAR_1);
 struct mlx5_ib_qp *VAR_5 = ((void*)0);
 struct mlx5_ib_dev *VAR_6 = FUNC_8(VAR_4->ibcq.device);
 struct mlx5_core_dev *VAR_7 = VAR_6->mdev;
 unsigned long VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 FUNC_5(&VAR_4->lock, VAR_8);
 if (VAR_7->state == VAR_0) {

  if (FUNC_9(!FUNC_0(&VAR_4->wc_list)))
   VAR_9 = FUNC_4(VAR_4, VAR_2, VAR_3, 1);

  FUNC_2(VAR_4, VAR_2 - VAR_9,
         VAR_3 + VAR_9, &VAR_10);
  goto out;
 }

 if (FUNC_9(!FUNC_0(&VAR_4->wc_list)))
  VAR_9 = FUNC_4(VAR_4, VAR_2, VAR_3, 0);

 for (VAR_10 = 0; VAR_10 < VAR_2 - VAR_9; VAR_10++) {
  if (FUNC_3(VAR_4, &VAR_5, VAR_3 + VAR_9 + VAR_10))
   break;
 }

 if (VAR_10)
  FUNC_1(&VAR_4->mcq);
out:
 FUNC_6(&VAR_4->lock, VAR_8);

 return VAR_9 + VAR_10;
}
