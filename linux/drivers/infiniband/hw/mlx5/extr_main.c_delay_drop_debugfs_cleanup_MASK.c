
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* dbg; } ;
struct mlx5_ib_dev {TYPE_1__ delay_drop; } ;
struct TYPE_4__ {int dir_debugfs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct mlx5_ib_dev *VAR_0)
{
 if (!VAR_0->delay_drop.dbg)
  return;
 FUNC_0(VAR_0->delay_drop.dbg->dir_debugfs);
 FUNC_1(VAR_0->delay_drop.dbg);
 VAR_0->delay_drop.dbg = ((void*)0);
}
