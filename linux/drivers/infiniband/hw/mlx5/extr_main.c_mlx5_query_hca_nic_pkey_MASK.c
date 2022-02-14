
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mlx5_ib_dev {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct ib_device {int dummy; } ;


 struct mlx5_core_dev* FUNC_0 (struct mlx5_ib_dev*,int,int*) ;
 int FUNC_1 (struct mlx5_ib_dev*,int) ;
 int FUNC_2 (struct mlx5_core_dev*,int ,int,int ,int ,int *) ;
 struct mlx5_ib_dev* FUNC_3 (struct ib_device*) ;

__attribute__((used)) static int FUNC_4(struct ib_device *VAR_0, u8 VAR_1,
       u16 VAR_2, u16 *VAR_3)
{
 struct mlx5_ib_dev *VAR_4 = FUNC_3(VAR_0);
 struct mlx5_core_dev *VAR_5;
 bool VAR_6 = 1;
 u8 VAR_7;
 int VAR_8;

 VAR_5 = FUNC_0(VAR_4, VAR_1, &VAR_7);
 if (!VAR_5) {



  VAR_6 = 0;
  VAR_5 = VAR_4->mdev;
  VAR_7 = 1;
 }

 VAR_8 = FUNC_2(VAR_5, 0, VAR_7, 0,
     VAR_2, VAR_3);
 if (VAR_6)
  FUNC_1(VAR_4, VAR_1);

 return VAR_8;
}
