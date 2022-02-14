
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct mlx5_ib_dev {TYPE_1__* port; int mdev; } ;
struct mlx5_ib_counters {int dummy; } ;
struct TYPE_2__ {struct mlx5_ib_counters const cnts; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static const struct mlx5_ib_counters *FUNC_1(struct mlx5_ib_dev *VAR_0,
         u8 VAR_1)
{
 return FUNC_0(VAR_0->mdev) ? &VAR_0->port[0].cnts :
         &VAR_0->port[VAR_1].cnts;
}
