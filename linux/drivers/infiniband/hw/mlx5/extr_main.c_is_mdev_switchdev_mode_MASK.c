
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int eswitch; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 scalar_t__ FUNC_0 (struct mlx5_core_dev const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(const struct mlx5_core_dev *VAR_1)
{
 return FUNC_0(VAR_1) &&
        FUNC_1(VAR_1->priv.eswitch) ==
         VAR_0;
}
