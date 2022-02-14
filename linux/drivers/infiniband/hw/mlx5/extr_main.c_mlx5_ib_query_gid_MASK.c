
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct mlx5_ib_dev {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct ib_device*) ;
 int FUNC_1 (struct mlx5_core_dev*,int ,int ,int ,int,union ib_gid*) ;
 int FUNC_2 (struct ib_device*,int ,int,union ib_gid*) ;
 struct mlx5_ib_dev* FUNC_3 (struct ib_device*) ;

__attribute__((used)) static int FUNC_4(struct ib_device *VAR_1, u8 VAR_2, int VAR_3,
        union ib_gid *VAR_4)
{
 struct mlx5_ib_dev *VAR_5 = FUNC_3(VAR_1);
 struct mlx5_core_dev *VAR_6 = VAR_5->mdev;

 switch (FUNC_0(VAR_1)) {
 case 128:
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);

 case 129:
  return FUNC_1(VAR_6, 0, VAR_2, 0, VAR_3, VAR_4);

 default:
  return -VAR_0;
 }

}
