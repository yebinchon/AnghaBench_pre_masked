
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_flow_prio {int dummy; } ;
struct mlx5_ib_flow_handler {int dummy; } ;
struct mlx5_ib_dev {int dummy; } ;
struct mlx5_flow_destination {int dummy; } ;
struct ib_flow_attr {int dummy; } ;


 struct mlx5_ib_flow_handler* FUNC_0 (struct mlx5_ib_dev*,struct mlx5_ib_flow_prio*,struct ib_flow_attr const*,struct mlx5_flow_destination*,int ,int *) ;

__attribute__((used)) static struct mlx5_ib_flow_handler *FUNC_1(struct mlx5_ib_dev *VAR_0,
           struct mlx5_ib_flow_prio *VAR_1,
           const struct ib_flow_attr *VAR_2,
           struct mlx5_flow_destination *VAR_3)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, 0, ((void*)0));
}
