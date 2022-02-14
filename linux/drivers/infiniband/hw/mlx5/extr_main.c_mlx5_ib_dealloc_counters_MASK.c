
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_ib_dev {int num_ports; TYPE_2__* port; int mdev; } ;
struct TYPE_3__ {int offsets; int names; int set_id; scalar_t__ set_id_valid; } ;
struct TYPE_4__ {TYPE_1__ cnts; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mlx5_ib_dev *VAR_0)
{
 int VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0->mdev) ? 1 : VAR_0->num_ports;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_0->port[VAR_2].cnts.set_id_valid)
   FUNC_2(VAR_0->mdev,
          VAR_0->port[VAR_2].cnts.set_id);
  FUNC_1(VAR_0->port[VAR_2].cnts.names);
  FUNC_1(VAR_0->port[VAR_2].cnts.offsets);
 }
}
