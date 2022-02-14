
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int delay_drop_work; } ;
struct TYPE_4__ {int raw_packet_caps; } ;
struct TYPE_5__ {TYPE_1__ attrs; } ;
struct mlx5_ib_dev {TYPE_3__ delay_drop; TYPE_2__ ib_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5_ib_dev*) ;

__attribute__((used)) static void FUNC_2(struct mlx5_ib_dev *VAR_1)
{
 if (!(VAR_1->ib_dev.attrs.raw_packet_caps & VAR_0))
  return;

 FUNC_0(&VAR_1->delay_drop.delay_drop_work);
 FUNC_1(VAR_1);
}
