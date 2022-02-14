
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_ib_dev {int mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;



 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline int FUNC_4(struct mlx5_ib_dev *VAR_6,
     u32 VAR_7)
{
 switch (VAR_7) {
 case 129:
  if (!FUNC_0(VAR_6->mdev, VAR_4))
   return -VAR_2;
  break;
 case 128:
 case 130:
  if (!FUNC_3(VAR_1) ||
      !FUNC_3(VAR_0))
   return -VAR_3;

  if (!(FUNC_1(VAR_6->mdev, VAR_5) ||
        FUNC_2(VAR_6->mdev, VAR_5)))
   return -VAR_2;
  break;
 }

 return 0;
}
