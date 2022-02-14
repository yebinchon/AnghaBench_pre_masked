
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int delay_drop_work; } ;
struct mlx5_ib_dev {TYPE_3__ delay_drop; int ib_dev; } ;
struct TYPE_4__ {int port; } ;
struct TYPE_5__ {TYPE_1__ port; } ;
struct mlx5_eqe {int sub_type; TYPE_2__ data; } ;
struct ib_event {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mlx5_ib_dev *VAR_1, struct mlx5_eqe *VAR_2,
     struct ib_event *VAR_3)
{
 u8 VAR_4 = (VAR_2->data.port.port >> 4) & 0xf;

 switch (VAR_2->sub_type) {
 case 128:
  if (FUNC_0(&VAR_1->ib_dev, VAR_4) ==
         VAR_0)
   FUNC_1(&VAR_1->delay_drop.delay_drop_work);
  break;
 default:
  return;
 }
}
