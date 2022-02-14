
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int mdev; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlx5_ib_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct mlx5_ib_dev *VAR_1)
{
 int VAR_2;

 if (FUNC_0(VAR_1->mdev, VAR_0)) {
  VAR_2 = FUNC_3(VAR_1->mdev);
  if (VAR_2)
   return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  goto err_disable_roce;

 return 0;

err_disable_roce:
 if (FUNC_0(VAR_1->mdev, VAR_0))
  FUNC_2(VAR_1->mdev);

 return VAR_2;
}
