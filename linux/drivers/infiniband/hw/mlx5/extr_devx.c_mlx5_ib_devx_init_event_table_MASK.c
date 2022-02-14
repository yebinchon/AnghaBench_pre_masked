
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_devx_event_table {int devx_nb; int event_xa_lock; int event_xa; } ;
struct mlx5_ib_dev {int mdev; struct mlx5_devx_event_table devx_event_table; } ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mlx5_ib_dev *VAR_2)
{
 struct mlx5_devx_event_table *VAR_3 = &VAR_2->devx_event_table;

 FUNC_3(&VAR_3->event_xa);
 FUNC_2(&VAR_3->event_xa_lock);
 FUNC_0(&VAR_3->devx_nb, VAR_1, VAR_0);
 FUNC_1(VAR_2->mdev, &VAR_3->devx_nb);
}
