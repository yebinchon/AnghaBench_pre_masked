
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int qpn; } ;
struct TYPE_4__ {TYPE_1__ mqp; } ;
struct mlx5_ib_sq {int state; TYPE_2__ base; } ;
struct mlx5_ib_dev {int mdev; } ;


 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct mlx5_ib_dev *VAR_0,
     struct mlx5_ib_sq *VAR_1,
     u8 *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0->mdev, VAR_1->base.mqp.qpn, VAR_2);
 if (VAR_3)
  goto out;
 VAR_1->state = *VAR_2;

out:
 return VAR_3;
}
