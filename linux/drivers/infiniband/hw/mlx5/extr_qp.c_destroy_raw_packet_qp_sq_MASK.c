
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int umem; } ;
struct TYPE_3__ {int mqp; } ;
struct mlx5_ib_sq {TYPE_2__ ubuffer; TYPE_1__ base; } ;
struct mlx5_ib_dev {int mdev; } ;


 int FUNC_0 (struct mlx5_ib_sq*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct mlx5_ib_dev *VAR_0,
         struct mlx5_ib_sq *VAR_1)
{
 FUNC_0(VAR_1);
 FUNC_2(VAR_0->mdev, &VAR_1->base.mqp);
 FUNC_1(VAR_1->ubuffer.umem);
}
