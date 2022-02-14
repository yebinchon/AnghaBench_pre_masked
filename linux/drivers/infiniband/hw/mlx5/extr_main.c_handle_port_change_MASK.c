
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_10__ {TYPE_4__* ports; } ;
struct mlx5_ib_dev {TYPE_5__ devr; int ib_dev; } ;
struct TYPE_6__ {int port; } ;
struct TYPE_7__ {TYPE_1__ port; } ;
struct mlx5_eqe {int sub_type; TYPE_2__ data; } ;
struct TYPE_8__ {int port_num; } ;
struct ib_event {int event; TYPE_3__ element; } ;
struct TYPE_9__ {int pkey_change_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;







 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct mlx5_ib_dev *VAR_8, struct mlx5_eqe *VAR_9,
         struct ib_event *VAR_10)
{
 u8 VAR_11 = (VAR_9->data.port.port >> 4) & 0xf;

 VAR_10->element.port_num = VAR_11;

 switch (VAR_9->sub_type) {
 case 134:
 case 132:
 case 130:



  if (FUNC_0(&VAR_8->ib_dev, VAR_11) ==
         VAR_7)
   return -VAR_0;

  VAR_10->event = (VAR_9->sub_type == 134) ?
    VAR_5 : VAR_6;
  break;

 case 129:
  VAR_10->event = VAR_3;
  break;

 case 128:
  VAR_10->event = VAR_4;
  FUNC_1(&VAR_8->devr.ports[VAR_11 - 1].pkey_change_work);
  break;

 case 131:
  VAR_10->event = VAR_2;
  break;

 case 133:
  VAR_10->event = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
