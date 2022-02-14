
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int activate; int timeout; int events_cnt; int rqs_cnt; int delay_drop_work; struct mlx5_ib_dev* dev; int lock; } ;
struct TYPE_5__ {int raw_packet_caps; } ;
struct TYPE_6__ {TYPE_2__ attrs; } ;
struct mlx5_ib_dev {TYPE_1__ delay_drop; TYPE_3__ ib_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct mlx5_ib_dev*) ;
 int VAR_2 ;
 int FUNC_3 (struct mlx5_ib_dev*,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mlx5_ib_dev *VAR_3)
{
 if (!(VAR_3->ib_dev.attrs.raw_packet_caps & VAR_0))
  return;

 FUNC_4(&VAR_3->delay_drop.lock);
 VAR_3->delay_drop.dev = VAR_3;
 VAR_3->delay_drop.activate = 0;
 VAR_3->delay_drop.timeout = VAR_1 * 1000;
 FUNC_0(&VAR_3->delay_drop.delay_drop_work, VAR_2);
 FUNC_1(&VAR_3->delay_drop.rqs_cnt, 0);
 FUNC_1(&VAR_3->delay_drop.events_cnt, 0);

 if (FUNC_2(VAR_3))
  FUNC_3(VAR_3, "Failed to init delay drop debugfs\n");
}
