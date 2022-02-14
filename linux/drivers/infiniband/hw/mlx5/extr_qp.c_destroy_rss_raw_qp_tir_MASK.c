
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pd; } ;
struct TYPE_4__ {int tirn; } ;
struct mlx5_ib_qp {int flags_en; TYPE_2__ ibqp; TYPE_1__ rss_qp; } ;
struct mlx5_ib_dev {int mdev; } ;
struct TYPE_6__ {int uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct mlx5_ib_dev*,int,int) ;
 TYPE_3__* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mlx5_ib_dev *VAR_2, struct mlx5_ib_qp *VAR_3)
{
 if (VAR_3->flags_en & (VAR_1 |
       VAR_0))
  FUNC_1(VAR_2, 0, 1);
 FUNC_0(VAR_2->mdev, VAR_3->rss_qp.tirn,
        FUNC_2(VAR_3->ibqp.pd)->uid);
}
