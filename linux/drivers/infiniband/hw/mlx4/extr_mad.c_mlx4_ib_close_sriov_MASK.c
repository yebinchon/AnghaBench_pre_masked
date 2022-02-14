
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_going_down; TYPE_2__* demux; int ** sqps; int going_down_lock; } ;
struct mlx4_ib_dev {int num_ports; TYPE_1__ sriov; int dev; } ;
struct TYPE_4__ {int ud_wq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx4_ib_dev*,int) ;
 int FUNC_3 (struct mlx4_ib_dev*) ;
 int FUNC_4 (struct mlx4_ib_dev*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

void FUNC_11(struct mlx4_ib_dev *VAR_0)
{
 int VAR_1;
 unsigned long VAR_2;

 if (!FUNC_8(VAR_0->dev))
  return;

 FUNC_9(&VAR_0->sriov.going_down_lock, VAR_2);
 VAR_0->sriov.is_going_down = 1;
 FUNC_10(&VAR_0->sriov.going_down_lock, VAR_2);
 if (FUNC_7(VAR_0->dev)) {
  for (VAR_1 = 0; VAR_1 < VAR_0->num_ports; VAR_1++) {
   FUNC_0(VAR_0->sriov.demux[VAR_1].ud_wq);
   FUNC_6(VAR_0->sriov.sqps[VAR_1]);
   FUNC_1(VAR_0->sriov.sqps[VAR_1]);
   VAR_0->sriov.sqps[VAR_1] = ((void*)0);
   FUNC_5(&VAR_0->sriov.demux[VAR_1]);
  }

  FUNC_2(VAR_0, -1);
  FUNC_3(VAR_0);
  FUNC_4(VAR_0);
 }
}
