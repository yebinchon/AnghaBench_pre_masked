
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlx5_ib_dev {int mdev; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct mlx5_ib_dev*,int,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct mlx5_ib_dev *VAR_5, u32 VAR_6,
          u16 VAR_7)
{
 if (!FUNC_0(VAR_5->mdev, VAR_3))
  return;

 FUNC_1(VAR_5->mdev, VAR_6, VAR_7);

 if ((FUNC_0(VAR_5->mdev, VAR_4) != VAR_0) ||
     (!FUNC_0(VAR_5->mdev, VAR_2) &&
      !FUNC_0(VAR_5->mdev, VAR_1)))
  return;

 FUNC_2(VAR_5, 1, 0);
}
