
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int mdev; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_2(struct mlx5_ib_dev *VAR_1)
{
 return FUNC_0(VAR_1->mdev,
      VAR_0) ||
        FUNC_1(VAR_1->mdev, VAR_0);
}
