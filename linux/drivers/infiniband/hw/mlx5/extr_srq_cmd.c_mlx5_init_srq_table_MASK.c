
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int notifier_call; } ;
struct mlx5_srq_table {TYPE_1__ nb; int array; } ;
struct mlx5_ib_dev {int mdev; struct mlx5_srq_table srq_table; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_srq_table*,int ,int) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(struct mlx5_ib_dev *VAR_2)
{
 struct mlx5_srq_table *VAR_3 = &VAR_2->srq_table;

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 FUNC_2(&VAR_3->array, VAR_0);

 VAR_3->nb.notifier_call = VAR_1;
 FUNC_1(VAR_2->mdev, &VAR_3->nb);

 return 0;
}
