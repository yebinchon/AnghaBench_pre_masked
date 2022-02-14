
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int dummy; } ;
struct mlx5_bfreg_info {int lock; int * count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mlx5_ib_dev *VAR_0, struct mlx5_bfreg_info *VAR_1, int VAR_2)
{
 FUNC_0(&VAR_1->lock);
 VAR_1->count[VAR_2]--;
 FUNC_1(&VAR_1->lock);
}
