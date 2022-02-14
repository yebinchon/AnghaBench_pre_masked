
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5_ib_dev {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;



 int FUNC_1 (struct ib_device*) ;
 int FUNC_2 (struct ib_device*,int *) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 struct mlx5_ib_dev* FUNC_4 (struct ib_device*) ;

__attribute__((used)) static int FUNC_5(struct ib_device *VAR_2,
    u16 *VAR_3)
{
 struct mlx5_ib_dev *VAR_4 = FUNC_4(VAR_2);
 struct mlx5_core_dev *VAR_5 = VAR_4->mdev;

 switch (FUNC_1(VAR_2)) {
 case 129:
  return FUNC_2(VAR_2, VAR_3);

 case 130:
 case 128:
  *VAR_3 = FUNC_3(FUNC_0(VAR_5,
      VAR_1));
  return 0;

 default:
  return -VAR_0;
 }
}
