
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int rqs_cnt; int events_cnt; struct mlx5_ib_dbg_delay_drop* dbg; } ;
struct mlx5_ib_dev {TYPE_3__ delay_drop; TYPE_2__* mdev; } ;
struct mlx5_ib_dbg_delay_drop {int timeout_debugfs; int dir_debugfs; void* rqs_cnt_debugfs; void* events_cnt_debugfs; } ;
struct TYPE_4__ {int dbg_root; } ;
struct TYPE_5__ {TYPE_1__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*,int,int ,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,int ,TYPE_3__*,int *) ;
 int FUNC_3 (struct mlx5_ib_dev*) ;
 int VAR_2 ;
 struct mlx5_ib_dbg_delay_drop* FUNC_4 (int,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct mlx5_ib_dev *VAR_4)
{
 struct mlx5_ib_dbg_delay_drop *VAR_5;

 if (!VAR_3)
  return 0;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_4->delay_drop.dbg = VAR_5;

 VAR_5->dir_debugfs =
  FUNC_1("delay_drop",
       VAR_4->mdev->priv.dbg_root);
 if (!VAR_5->dir_debugfs)
  goto out_debugfs;

 VAR_5->events_cnt_debugfs =
  FUNC_0("num_timeout_events", 0400,
     VAR_5->dir_debugfs,
     &VAR_4->delay_drop.events_cnt);
 if (!VAR_5->events_cnt_debugfs)
  goto out_debugfs;

 VAR_5->rqs_cnt_debugfs =
  FUNC_0("num_rqs", 0400,
     VAR_5->dir_debugfs,
     &VAR_4->delay_drop.rqs_cnt);
 if (!VAR_5->rqs_cnt_debugfs)
  goto out_debugfs;

 VAR_5->timeout_debugfs =
  FUNC_2("timeout", 0600,
        VAR_5->dir_debugfs,
        &VAR_4->delay_drop,
        &VAR_2);
 if (!VAR_5->timeout_debugfs)
  goto out_debugfs;

 return 0;

out_debugfs:
 FUNC_3(VAR_4);
 return -VAR_0;
}
