
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_ib_dev {int mdev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static bool FUNC_3(struct mlx5_ib_dev *VAR_6,
            u8 VAR_7,
            u8 VAR_8)
{
 switch (VAR_7) {
 case 131:
  if (VAR_8 == VAR_1)
   return FUNC_0(VAR_6->mdev,
        VAR_3);
  break;
 case 130:
  if (VAR_8 == VAR_1)
   return FUNC_2(VAR_6->mdev,
    VAR_4);
  break;
 case 128:
  if (VAR_8 == VAR_0)
   return FUNC_1(VAR_6->mdev,
    VAR_5);
  break;
 case 129:
  if (VAR_8 == VAR_0)
   return FUNC_1(VAR_6->mdev, VAR_2);
  break;
 default:
  break;
 }

 return 0;
}
