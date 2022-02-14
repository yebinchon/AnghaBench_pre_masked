
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_ib_dev {int mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;

__attribute__((used)) static int FUNC_1(struct mlx5_ib_dev *VAR_6, u8 VAR_7)
{
 switch (VAR_7) {
 case 128:
  return VAR_4;
 case 130:
  return VAR_2;
 case 129:
  if (FUNC_0(VAR_6->mdev, VAR_5))
   return VAR_3;
  return -VAR_1;
 default:
  return -VAR_0;
 }
}
