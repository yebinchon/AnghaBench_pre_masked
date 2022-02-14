
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_flow_prio {int refcount; } ;
struct mlx5_ib_flow_handler {int rule; int list; } ;
struct mlx5_ib_dev {int dummy; } ;
struct mlx5_flow_destination {int dummy; } ;
struct ib_flow_attr {int size; int num_of_specs; } ;
typedef int flow_attr ;


 struct mlx5_ib_flow_handler* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mlx5_ib_flow_handler*) ;
 int FUNC_2 (struct mlx5_ib_flow_handler*) ;
 struct mlx5_ib_flow_handler* FUNC_3 (struct mlx5_ib_dev*,struct mlx5_ib_flow_prio*,struct ib_flow_attr const*,struct mlx5_flow_destination*) ;
 int FUNC_4 (struct mlx5_ib_flow_handler*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static struct mlx5_ib_flow_handler *FUNC_7(struct mlx5_ib_dev *VAR_0,
       struct mlx5_ib_flow_prio *VAR_1,
       struct mlx5_ib_flow_prio *VAR_2,
       struct mlx5_flow_destination *VAR_3)
{
 struct mlx5_ib_flow_handler *VAR_4;
 struct mlx5_ib_flow_handler *VAR_5;
 int VAR_6;
 static const struct ib_flow_attr VAR_7 = {
  .num_of_specs = 0,
  .size = sizeof(VAR_7)
 };

 VAR_4 = FUNC_3(VAR_0, VAR_1, &VAR_7, VAR_3);
 if (FUNC_1(VAR_4)) {
  VAR_6 = FUNC_2(VAR_4);
  goto err;
 }

 VAR_5 = FUNC_3(VAR_0, VAR_2, &VAR_7, VAR_3);
 if (FUNC_1(VAR_5)) {
  VAR_6 = FUNC_2(VAR_5);
  goto err_tx;
 }

 FUNC_5(&VAR_5->list, &VAR_4->list);

 return VAR_4;

err_tx:
 FUNC_6(VAR_4->rule);
 VAR_1->refcount--;
 FUNC_4(VAR_4);
err:
 return FUNC_0(VAR_6);
}
