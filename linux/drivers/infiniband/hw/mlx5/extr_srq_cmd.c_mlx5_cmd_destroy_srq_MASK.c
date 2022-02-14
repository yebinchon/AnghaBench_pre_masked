
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_srq_table {int array; } ;
struct mlx5_ib_dev {struct mlx5_srq_table srq_table; } ;
struct TYPE_2__ {int free; } ;
struct mlx5_core_srq {TYPE_1__ common; int srqn; } ;


 int FUNC_0 (struct mlx5_ib_dev*,struct mlx5_core_srq*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 struct mlx5_core_srq* FUNC_3 (int *,int ) ;

void FUNC_4(struct mlx5_ib_dev *VAR_0, struct mlx5_core_srq *VAR_1)
{
 struct mlx5_srq_table *VAR_2 = &VAR_0->srq_table;
 struct mlx5_core_srq *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(&VAR_2->array, VAR_1->srqn);
 if (!VAR_3 || VAR_3 != VAR_1)
  return;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (VAR_4)
  return;

 FUNC_1(&VAR_1->common);
 FUNC_2(&VAR_1->common.free);
}
