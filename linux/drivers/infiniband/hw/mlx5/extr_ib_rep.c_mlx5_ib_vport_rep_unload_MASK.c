
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int netdev_lock; int * netdev; } ;
struct mlx5_ib_port {int * rep; TYPE_1__ roce; } ;
struct mlx5_ib_dev {int profile; struct mlx5_ib_port* port; } ;
struct mlx5_eswitch_rep {size_t vport_index; scalar_t__ vport; TYPE_2__* rep_data; } ;
struct TYPE_4__ {int * priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct mlx5_ib_dev*,int ,int ) ;
 struct mlx5_ib_dev* FUNC_1 (struct mlx5_eswitch_rep*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct mlx5_eswitch_rep *VAR_3)
{
 struct mlx5_ib_dev *VAR_4 = FUNC_1(VAR_3);
 struct mlx5_ib_port *VAR_5;

 VAR_5 = &VAR_4->port[VAR_3->vport_index];
 FUNC_2(&VAR_5->roce.netdev_lock);
 VAR_5->roce.netdev = ((void*)0);
 FUNC_3(&VAR_5->roce.netdev_lock);
 VAR_3->rep_data[VAR_2].priv = ((void*)0);
 VAR_5->rep = ((void*)0);

 if (VAR_3->vport == VAR_1)
  FUNC_0(VAR_4, VAR_4->profile, VAR_0);
}
