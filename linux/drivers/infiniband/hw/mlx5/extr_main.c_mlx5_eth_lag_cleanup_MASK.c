
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_dev {int lag_active; TYPE_1__* flow_db; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {int * lag_demux_ft; } ;


 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mlx5_ib_dev *VAR_0)
{
 struct mlx5_core_dev *VAR_1 = VAR_0->mdev;

 if (VAR_0->lag_active) {
  VAR_0->lag_active = 0;

  FUNC_1(VAR_0->flow_db->lag_demux_ft);
  VAR_0->flow_db->lag_demux_ft = ((void*)0);

  FUNC_0(VAR_1);
 }
}
