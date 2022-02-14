
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_srq_attr {int dummy; } ;
struct mlx5_ib_dev {TYPE_1__* mdev; } ;
struct TYPE_4__ {int res; } ;
struct mlx5_core_srq {TYPE_2__ common; } ;
struct TYPE_3__ {int issi; } ;




 int FUNC_0 (struct mlx5_ib_dev*,struct mlx5_core_srq*,struct mlx5_srq_attr*) ;
 int FUNC_1 (struct mlx5_ib_dev*,struct mlx5_core_srq*,struct mlx5_srq_attr*) ;
 int FUNC_2 (struct mlx5_ib_dev*,struct mlx5_core_srq*,struct mlx5_srq_attr*) ;
 int FUNC_3 (struct mlx5_ib_dev*,struct mlx5_core_srq*,struct mlx5_srq_attr*) ;

__attribute__((used)) static int FUNC_4(struct mlx5_ib_dev *VAR_0, struct mlx5_core_srq *VAR_1,
       struct mlx5_srq_attr *VAR_2)
{
 if (!VAR_0->mdev->issi)
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 switch (VAR_1->common.res) {
 case 128:
  return FUNC_2(VAR_0, VAR_1, VAR_2);
 case 129:
  return FUNC_3(VAR_0, VAR_1, VAR_2);
 default:
  return FUNC_0(VAR_0, VAR_1, VAR_2);
 }
}
