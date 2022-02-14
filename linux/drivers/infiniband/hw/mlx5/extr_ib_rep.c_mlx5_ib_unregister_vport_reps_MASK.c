
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_eswitch {int dummy; } ;
struct TYPE_2__ {struct mlx5_eswitch* eswitch; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_eswitch*,int ) ;

void FUNC_1(struct mlx5_core_dev *VAR_1)
{
 struct mlx5_eswitch *VAR_2 = VAR_1->priv.eswitch;

 FUNC_0(VAR_2, VAR_0);
}
