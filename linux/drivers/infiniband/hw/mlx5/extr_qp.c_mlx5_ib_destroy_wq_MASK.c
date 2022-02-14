
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_rwq {int core_qp; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_wq {int pd; int device; } ;
struct ib_udata {int dummy; } ;


 int FUNC_0 (struct mlx5_ib_dev*,int ,struct mlx5_ib_rwq*,struct ib_udata*) ;
 int FUNC_1 (struct mlx5_ib_rwq*) ;
 int FUNC_2 (int ,int *) ;
 struct mlx5_ib_dev* FUNC_3 (int ) ;
 struct mlx5_ib_rwq* FUNC_4 (struct ib_wq*) ;

void FUNC_5(struct ib_wq *VAR_0, struct ib_udata *VAR_1)
{
 struct mlx5_ib_dev *VAR_2 = FUNC_3(VAR_0->device);
 struct mlx5_ib_rwq *VAR_3 = FUNC_4(VAR_0);

 FUNC_2(VAR_2->mdev, &VAR_3->core_qp);
 FUNC_0(VAR_2, VAR_0->pd, VAR_3, VAR_1);
 FUNC_1(VAR_3);
}
