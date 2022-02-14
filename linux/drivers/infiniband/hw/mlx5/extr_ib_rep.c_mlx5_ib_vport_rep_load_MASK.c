
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx5_ib_profile {int dummy; } ;
struct mlx5_ib_dev {int is_rep; int num_ports; struct mlx5_core_dev* mdev; TYPE_4__* port; int ib_dev; } ;
struct mlx5_eswitch_rep {scalar_t__ vport; int vport_index; TYPE_3__* rep_data; } ;
struct TYPE_6__ {int eswitch; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
struct TYPE_5__ {int netdev; } ;
struct TYPE_8__ {TYPE_1__ roce; struct mlx5_eswitch_rep* rep; } ;
struct TYPE_7__ {struct mlx5_ib_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct mlx5_ib_dev*,struct mlx5_ib_profile const*) ;
 struct mlx5_ib_dev* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 TYPE_4__* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct mlx5_core_dev*) ;
 int VAR_6 ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct mlx5_core_dev*,struct mlx5_eswitch_rep*) ;
 struct mlx5_ib_profile VAR_7 ;

__attribute__((used)) static int
FUNC_7(struct mlx5_core_dev *VAR_8, struct mlx5_eswitch_rep *VAR_9)
{
 int VAR_10 = FUNC_4(VAR_8);
 const struct mlx5_ib_profile *VAR_11;
 struct mlx5_ib_dev *VAR_12;
 int VAR_13;

 if (VAR_9->vport == VAR_3)
  VAR_11 = &VAR_7;
 else
  return FUNC_6(VAR_8, VAR_9);

 VAR_12 = FUNC_1(VAR_6, VAR_5);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->port = FUNC_3(VAR_10, sizeof(*VAR_12->port),
         VAR_2);
 if (!VAR_12->port) {
  FUNC_2(&VAR_12->ib_dev);
  return -VAR_1;
 }

 VAR_12->is_rep = 1;
 VAR_13 = VAR_9->vport_index;
 VAR_12->port[VAR_13].rep = VAR_9;
 VAR_12->port[VAR_13].roce.netdev =
  FUNC_5(VAR_8->priv.eswitch, VAR_9->vport);
 VAR_12->mdev = VAR_8;
 VAR_12->num_ports = VAR_10;

 if (!FUNC_0(VAR_12, VAR_11))
  return -VAR_0;

 VAR_9->rep_data[VAR_4].priv = VAR_12;

 return 0;
}
