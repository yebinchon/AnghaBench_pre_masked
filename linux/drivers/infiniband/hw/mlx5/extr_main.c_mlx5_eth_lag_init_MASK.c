
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_dev {int lag_active; TYPE_1__* flow_db; struct mlx5_core_dev* mdev; } ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_namespace {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {struct mlx5_flow_table* lag_demux_ft; } ;


 scalar_t__ FUNC_0 (struct mlx5_flow_table*) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx5_flow_table*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 struct mlx5_flow_table* FUNC_4 (struct mlx5_flow_namespace*,int ,int ) ;
 struct mlx5_flow_namespace* FUNC_5 (struct mlx5_core_dev*,int ) ;
 int FUNC_6 (struct mlx5_core_dev*) ;

__attribute__((used)) static int FUNC_7(struct mlx5_ib_dev *VAR_1)
{
 struct mlx5_core_dev *VAR_2 = VAR_1->mdev;
 struct mlx5_flow_namespace *VAR_3 = FUNC_5(VAR_2,
         VAR_0);
 struct mlx5_flow_table *VAR_4;
 int VAR_5;

 if (!VAR_3 || !FUNC_6(VAR_2))
  return 0;

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_4(VAR_3, 0, 0);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  goto err_destroy_vport_lag;
 }

 VAR_1->flow_db->lag_demux_ft = VAR_4;
 VAR_1->lag_active = 1;
 return 0;

err_destroy_vport_lag:
 FUNC_3(VAR_2);
 return VAR_5;
}
