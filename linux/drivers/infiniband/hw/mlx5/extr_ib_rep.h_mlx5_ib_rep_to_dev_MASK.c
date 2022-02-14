
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_dev {int dummy; } ;
struct mlx5_eswitch_rep {TYPE_1__* rep_data; } ;
struct TYPE_2__ {struct mlx5_ib_dev* priv; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline
struct mlx5_ib_dev *FUNC_0(struct mlx5_eswitch_rep *VAR_1)
{
 return VAR_1->rep_data[VAR_0].priv;
}
