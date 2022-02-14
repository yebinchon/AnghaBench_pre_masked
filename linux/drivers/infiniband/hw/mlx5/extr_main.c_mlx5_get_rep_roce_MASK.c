
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx5_roce {int netdev_lock; } ;
struct mlx5_ib_port {struct mlx5_roce roce; TYPE_3__* rep; } ;
struct mlx5_ib_dev {int num_ports; struct mlx5_ib_port* port; TYPE_2__* mdev; } ;
struct mlx5_eswitch {int dummy; } ;
struct TYPE_6__ {int vport; } ;
struct TYPE_4__ {struct mlx5_eswitch* eswitch; } ;
struct TYPE_5__ {TYPE_1__ priv; } ;


 struct net_device* FUNC_0 (struct mlx5_eswitch*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct mlx5_roce *FUNC_3(struct mlx5_ib_dev *VAR_0,
        struct net_device *VAR_1,
        u8 *VAR_2)
{
 struct mlx5_eswitch *VAR_3 = VAR_0->mdev->priv.eswitch;
 struct net_device *VAR_4;
 struct mlx5_ib_port *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0->num_ports; VAR_6++) {
  VAR_5 = &VAR_0->port[VAR_6];
  if (!VAR_5->rep)
   continue;

  FUNC_1(&VAR_5->roce.netdev_lock);
  VAR_4 = FUNC_0(VAR_3,
        VAR_5->rep->vport);
  if (VAR_4 == VAR_1) {
   FUNC_2(&VAR_5->roce.netdev_lock);
   *VAR_2 = VAR_6 + 1;
   return &VAR_5->roce;
  }
  FUNC_2(&VAR_5->roce.netdev_lock);
 }

 return ((void*)0);
}
