
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int send_flags; int opcode; } ;
struct mlx5_umr_wr {int ignore_free_state; int mkey; int pd; TYPE_3__ wr; } ;
struct TYPE_5__ {int key; } ;
struct mlx5_ib_mr {TYPE_2__ mmkey; } ;
struct TYPE_4__ {int pd; } ;
struct mlx5_ib_dev {TYPE_1__ umrc; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx5_ib_dev*,struct mlx5_umr_wr*) ;

__attribute__((used)) static int FUNC_1(struct mlx5_ib_dev *VAR_4, struct mlx5_ib_mr *VAR_5)
{
 struct mlx5_core_dev *VAR_6 = VAR_4->mdev;
 struct mlx5_umr_wr VAR_7 = {};

 if (VAR_6->state == VAR_0)
  return 0;

 VAR_7.wr.send_flags = VAR_1 |
         VAR_2;
 VAR_7.wr.opcode = VAR_3;
 VAR_7.pd = VAR_4->umrc.pd;
 VAR_7.mkey = VAR_5->mmkey.key;
 VAR_7.ignore_free_state = 1;

 return FUNC_0(VAR_4, &VAR_7);
}
