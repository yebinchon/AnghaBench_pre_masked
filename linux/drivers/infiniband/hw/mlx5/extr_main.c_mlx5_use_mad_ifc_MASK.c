
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int mdev; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct mlx5_ib_dev *VAR_3)
{
 if (FUNC_0(VAR_3->mdev, VAR_2) == VAR_0)
  return !FUNC_0(VAR_3->mdev, VAR_1);
 return 0;
}
