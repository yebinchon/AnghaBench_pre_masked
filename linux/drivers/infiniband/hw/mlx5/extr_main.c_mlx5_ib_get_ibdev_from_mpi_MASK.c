
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_multiport_info {struct mlx5_ib_dev* ibdev; } ;
struct mlx5_ib_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

struct mlx5_ib_dev *FUNC_2(struct mlx5_ib_multiport_info *VAR_1)
{
 struct mlx5_ib_dev *VAR_2;

 FUNC_0(&VAR_0);
 VAR_2 = VAR_1->ibdev;
 FUNC_1(&VAR_0);
 return VAR_2;
}
