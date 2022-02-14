
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_mr {int mmkey; } ;
struct mlx5_ib_dev {int mr_srcu; int mdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mlx5_ib_dev *VAR_1, struct mlx5_ib_mr *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1->mdev, &VAR_2->mmkey);

 if (FUNC_0(VAR_0))

  FUNC_2(&VAR_1->mr_srcu);

 return VAR_3;
}
