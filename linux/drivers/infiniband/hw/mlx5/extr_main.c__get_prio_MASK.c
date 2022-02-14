
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_ib_flow_prio {scalar_t__ refcount; struct mlx5_flow_table* flow_table; } ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_namespace {int dummy; } ;


 struct mlx5_ib_flow_prio* FUNC_0 (struct mlx5_flow_table*) ;
 scalar_t__ FUNC_1 (struct mlx5_flow_table*) ;
 struct mlx5_flow_table* FUNC_2 (struct mlx5_flow_namespace*,int,int,int,int ,int ) ;

__attribute__((used)) static struct mlx5_ib_flow_prio *FUNC_3(struct mlx5_flow_namespace *VAR_0,
        struct mlx5_ib_flow_prio *VAR_1,
        int VAR_2,
        int VAR_3, int VAR_4,
        u32 VAR_5)
{
 struct mlx5_flow_table *VAR_6;

 VAR_6 = FUNC_2(VAR_0, VAR_2,
       VAR_3,
       VAR_4,
       0, VAR_5);
 if (FUNC_1(VAR_6))
  return FUNC_0(VAR_6);

 VAR_1->flow_table = VAR_6;
 VAR_1->refcount = 0;
 return VAR_1;
}
