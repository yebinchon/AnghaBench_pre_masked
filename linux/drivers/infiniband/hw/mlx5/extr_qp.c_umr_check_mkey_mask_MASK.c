
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx5_ib_dev {int mdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct mlx5_ib_dev *VAR_5, u64 VAR_6)
{
 if ((VAR_6 & VAR_2 &&
      FUNC_0(VAR_5->mdev, VAR_4)) ||
     (VAR_6 & VAR_1 &&
      FUNC_0(VAR_5->mdev, VAR_3)))
  return -VAR_0;
 return 0;
}
