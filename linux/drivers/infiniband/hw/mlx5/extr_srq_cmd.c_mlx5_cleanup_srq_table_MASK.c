
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_srq_table {int nb; } ;
struct mlx5_ib_dev {int mdev; struct mlx5_srq_table srq_table; } ;


 int FUNC_0 (int ,int *) ;

void FUNC_1(struct mlx5_ib_dev *VAR_0)
{
 struct mlx5_srq_table *VAR_1 = &VAR_0->srq_table;

 FUNC_0(VAR_0->mdev, &VAR_1->nb);
}
