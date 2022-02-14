
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int qpn; } ;
struct TYPE_7__ {TYPE_1__ mqp; } ;
struct mlx5_ib_sq {TYPE_2__ base; } ;
struct mlx5_ib_dev {TYPE_5__* port; int is_rep; TYPE_4__* mdev; } ;
struct mlx5_flow_handle {int dummy; } ;
struct mlx5_eswitch_rep {int vport; } ;
struct mlx5_eswitch {int dummy; } ;
struct TYPE_10__ {struct mlx5_eswitch_rep* rep; } ;
struct TYPE_8__ {struct mlx5_eswitch* eswitch; } ;
struct TYPE_9__ {TYPE_3__ priv; } ;


 int VAR_0 ;
 struct mlx5_flow_handle* FUNC_0 (int ) ;
 struct mlx5_flow_handle* FUNC_1 (struct mlx5_eswitch*,int ,int ) ;

struct mlx5_flow_handle *FUNC_2(struct mlx5_ib_dev *VAR_1,
         struct mlx5_ib_sq *VAR_2,
         u16 VAR_3)
{
 struct mlx5_eswitch *VAR_4 = VAR_1->mdev->priv.eswitch;
 struct mlx5_eswitch_rep *VAR_5;

 if (!VAR_1->is_rep || !VAR_3)
  return ((void*)0);

 if (!VAR_1->port[VAR_3 - 1].rep)
  return FUNC_0(-VAR_0);

 VAR_5 = VAR_1->port[VAR_3 - 1].rep;

 return FUNC_1(VAR_4, VAR_5->vport,
         VAR_2->base.mqp.qpn);
}
