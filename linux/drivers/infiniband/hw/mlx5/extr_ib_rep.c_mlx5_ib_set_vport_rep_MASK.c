
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx5_ib_dev {TYPE_4__* port; } ;
struct mlx5_eswitch_rep {int vport_index; int vport; TYPE_1__* rep_data; } ;
struct TYPE_6__ {int eswitch; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
struct TYPE_7__ {int netdev_lock; int netdev; } ;
struct TYPE_8__ {TYPE_3__ roce; struct mlx5_eswitch_rep* rep; } ;
struct TYPE_5__ {struct mlx5_ib_dev* priv; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct mlx5_ib_dev* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct mlx5_core_dev *VAR_1, struct mlx5_eswitch_rep *VAR_2)
{
 struct mlx5_ib_dev *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_1->priv.eswitch);
 VAR_4 = VAR_2->vport_index;

 VAR_3->port[VAR_4].rep = VAR_2;
 VAR_2->rep_data[VAR_0].priv = VAR_3;
 FUNC_2(&VAR_3->port[VAR_4].roce.netdev_lock);
 VAR_3->port[VAR_4].roce.netdev =
  FUNC_0(VAR_1->priv.eswitch, VAR_2->vport);
 FUNC_3(&VAR_3->port[VAR_4].roce.netdev_lock);

 return 0;
}
