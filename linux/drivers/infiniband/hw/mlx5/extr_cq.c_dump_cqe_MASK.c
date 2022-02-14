
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int mdev; } ;
struct mlx5_err_cqe {int dummy; } ;


 int FUNC_0 (int ,struct mlx5_err_cqe*) ;
 int FUNC_1 (struct mlx5_ib_dev*,char*) ;

__attribute__((used)) static void FUNC_2(struct mlx5_ib_dev *VAR_0, struct mlx5_err_cqe *VAR_1)
{
 FUNC_1(VAR_0, "dump error cqe\n");
 FUNC_0(VAR_0->mdev, VAR_1);
}
