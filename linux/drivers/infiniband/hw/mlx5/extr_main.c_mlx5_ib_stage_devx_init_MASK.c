
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int devx_whitelist_uid; } ;


 int FUNC_0 (struct mlx5_ib_dev*,int) ;
 int FUNC_1 (struct mlx5_ib_dev*) ;

__attribute__((used)) static int FUNC_2(struct mlx5_ib_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0, 0);
 if (VAR_1 > 0) {
  VAR_0->devx_whitelist_uid = VAR_1;
  FUNC_1(VAR_0);
 }

 return 0;
}
