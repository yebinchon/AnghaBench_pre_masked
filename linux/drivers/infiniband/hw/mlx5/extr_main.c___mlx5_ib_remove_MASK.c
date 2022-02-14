
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_profile {TYPE_1__* stage; } ;
struct mlx5_ib_dev {int ib_dev; int port; } ;
struct TYPE_2__ {int (* cleanup ) (struct mlx5_ib_dev*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5_ib_dev*) ;

void FUNC_3(struct mlx5_ib_dev *VAR_0,
        const struct mlx5_ib_profile *VAR_1,
        int VAR_2)
{

 while (VAR_2) {
  VAR_2--;
  if (VAR_1->stage[VAR_2].cleanup)
   VAR_1->stage[VAR_2].cleanup(VAR_0);
 }

 FUNC_1(VAR_0->port);
 FUNC_0(&VAR_0->ib_dev);
}
