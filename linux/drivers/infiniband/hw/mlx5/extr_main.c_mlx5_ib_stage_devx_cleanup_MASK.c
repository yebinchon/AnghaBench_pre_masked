
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {scalar_t__ devx_whitelist_uid; } ;


 int FUNC_0 (struct mlx5_ib_dev*) ;
 int FUNC_1 (struct mlx5_ib_dev*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mlx5_ib_dev *VAR_0)
{
 if (VAR_0->devx_whitelist_uid) {
  FUNC_0(VAR_0);
  FUNC_1(VAR_0, VAR_0->devx_whitelist_uid);
 }
}
