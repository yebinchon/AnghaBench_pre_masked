
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int pkt_reformat; int sub_type; int modify_hdr; } ;
struct TYPE_5__ {int ctx; } ;
struct TYPE_4__ {int type; } ;
struct mlx5_ib_flow_action {TYPE_3__ flow_action_raw; TYPE_2__ esp_aes_gcm; TYPE_1__ ib_action; } ;
struct mlx5_flow_act {int action; uintptr_t esp_id; int pkt_reformat; int modify_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_0(struct mlx5_ib_flow_action *VAR_10,
      bool VAR_11,
      struct mlx5_flow_act *VAR_12)
{

 switch (VAR_10->ib_action.type) {
 case 129:
  if (VAR_12->action & (VAR_4 |
          VAR_3))
   return -VAR_0;

  VAR_12->esp_id = (uintptr_t)VAR_10->esp_aes_gcm.ctx;
  VAR_12->action |= VAR_11 ?
   VAR_4 :
   VAR_3;
  return 0;
 case 128:
  if (VAR_10->flow_action_raw.sub_type ==
      VAR_8) {
   if (VAR_12->action & VAR_5)
    return -VAR_0;
   VAR_12->action |= VAR_5;
   VAR_12->modify_hdr =
    VAR_10->flow_action_raw.modify_hdr;
   return 0;
  }
  if (VAR_10->flow_action_raw.sub_type ==
      VAR_7) {
   if (VAR_12->action & VAR_2)
    return -VAR_0;
   VAR_12->action |= VAR_2;
   return 0;
  }
  if (VAR_10->flow_action_raw.sub_type ==
      VAR_9) {
   if (VAR_12->action &
       VAR_6)
    return -VAR_0;
   VAR_12->action |=
    VAR_6;
   VAR_12->pkt_reformat =
    VAR_10->flow_action_raw.pkt_reformat;
   return 0;
  }

 default:
  return -VAR_1;
 }
}
