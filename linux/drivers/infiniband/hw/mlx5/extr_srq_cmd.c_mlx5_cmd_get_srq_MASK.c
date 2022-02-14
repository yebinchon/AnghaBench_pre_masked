
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_srq_table {int array; } ;
struct mlx5_ib_dev {struct mlx5_srq_table srq_table; } ;
struct TYPE_2__ {int refcount; } ;
struct mlx5_core_srq {TYPE_1__ common; } ;


 int FUNC_0 (int *) ;
 struct mlx5_core_srq* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct mlx5_core_srq *FUNC_4(struct mlx5_ib_dev *VAR_0, u32 VAR_1)
{
 struct mlx5_srq_table *VAR_2 = &VAR_0->srq_table;
 struct mlx5_core_srq *VAR_3;

 FUNC_2(&VAR_2->array);
 VAR_3 = FUNC_1(&VAR_2->array, VAR_1);
 if (VAR_3)
  FUNC_0(&VAR_3->common.refcount);
 FUNC_3(&VAR_2->array);

 return VAR_3;
}
