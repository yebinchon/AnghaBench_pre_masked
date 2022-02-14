
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_device_attr {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx5_ib_dev*,int ,struct ib_device_attr*) ;

__attribute__((used)) static void FUNC_2(struct mlx5_ib_dev *VAR_1,
          struct ib_device_attr *VAR_2)
{
 u8 VAR_3 = FUNC_0(VAR_1->mdev, VAR_0);

 FUNC_1(VAR_1, VAR_3, VAR_2);
}
