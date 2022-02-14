
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_srq_table {int array; } ;
struct mlx5_srq_attr {int type; } ;
struct mlx5_ib_dev {struct mlx5_srq_table srq_table; } ;
struct TYPE_2__ {int free; int refcount; int res; } ;
struct mlx5_core_srq {int srqn; TYPE_1__ common; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx5_ib_dev*,struct mlx5_core_srq*,struct mlx5_srq_attr*) ;
 int FUNC_1 (struct mlx5_ib_dev*,struct mlx5_core_srq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,struct mlx5_core_srq*,int ) ;

int FUNC_6(struct mlx5_ib_dev *VAR_4, struct mlx5_core_srq *VAR_5,
   struct mlx5_srq_attr *VAR_6)
{
 struct mlx5_srq_table *VAR_7 = &VAR_4->srq_table;
 int VAR_8;

 switch (VAR_6->type) {
 case 128:
  VAR_5->common.res = VAR_3;
  break;
 case 129:
  VAR_5->common.res = VAR_2;
  break;
 default:
  VAR_5->common.res = VAR_1;
 }

 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6);
 if (VAR_8)
  return VAR_8;

 FUNC_3(&VAR_5->common.refcount, 1);
 FUNC_2(&VAR_5->common.free);

 VAR_8 = FUNC_4(FUNC_5(&VAR_7->array, VAR_5->srqn, VAR_5, VAR_0));
 if (VAR_8)
  goto err_destroy_srq_split;

 return 0;

err_destroy_srq_split:
 FUNC_1(VAR_4, VAR_5);

 return VAR_8;
}
