
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int mdev; } ;
struct mlx5_ib_cq {int mcq; } ;
struct ib_udata {int dummy; } ;
struct ib_cq {int device; } ;


 int FUNC_0 (struct mlx5_ib_dev*,struct mlx5_ib_cq*) ;
 int FUNC_1 (struct mlx5_ib_cq*,struct ib_udata*) ;
 int FUNC_2 (int ,int *) ;
 struct mlx5_ib_cq* FUNC_3 (struct ib_cq*) ;
 struct mlx5_ib_dev* FUNC_4 (int ) ;

void FUNC_5(struct ib_cq *VAR_0, struct ib_udata *VAR_1)
{
 struct mlx5_ib_dev *VAR_2 = FUNC_4(VAR_0->device);
 struct mlx5_ib_cq *VAR_3 = FUNC_3(VAR_0);

 FUNC_2(VAR_2->mdev, &VAR_3->mcq);
 if (VAR_1)
  FUNC_1(VAR_3, VAR_1);
 else
  FUNC_0(VAR_2, VAR_3);
}
