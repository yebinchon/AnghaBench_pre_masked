
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int dummy; } ;
struct ib_device_attr {scalar_t__ atomic_cap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlx5_ib_dev*,struct ib_device_attr*) ;

bool FUNC_1(struct mlx5_ib_dev *VAR_1)
{
 struct ib_device_attr VAR_2 = {};

 FUNC_0(VAR_1, &VAR_2);
 return (VAR_2.atomic_cap == VAR_0) ? 1 : 0;
}
