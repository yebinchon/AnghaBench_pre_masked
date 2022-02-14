
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int mdev; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct mlx5_ib_dev* FUNC_1 (struct ib_device*) ;

__attribute__((used)) static bool FUNC_2(struct ib_device *VAR_1)
{
 struct mlx5_ib_dev *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2->mdev, VAR_0);
}
