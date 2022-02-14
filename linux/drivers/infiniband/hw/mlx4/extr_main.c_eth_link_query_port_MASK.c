
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int mtu; } ;
struct mlx4_ib_iboe {int lock; struct net_device** netdevs; } ;
struct mlx4_ib_dev {TYPE_2__* dev; struct mlx4_ib_iboe iboe; } ;
struct mlx4_cmd_mailbox {scalar_t__ buf; int dma; } ;
struct ib_port_attr {int ip_gids; int pkey_tbl_len; int max_vl_num; void* state; void* phys_state; int max_mtu; void* active_mtu; int max_msg_sz; int gid_tbl_len; int port_cap_flags; int active_speed; int active_width; } ;
struct ib_device {int dummy; } ;
typedef enum ib_mtu { ____Placeholder_ib_mtu } ib_mtu ;
struct TYPE_6__ {int max_msg_sz; int * gid_table_len; } ;
struct TYPE_7__ {TYPE_1__ caps; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ,int) ;
 struct mlx4_cmd_mailbox* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*,struct mlx4_cmd_mailbox*) ;
 int FUNC_7 (TYPE_2__*) ;
 struct net_device* FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct net_device*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 void* FUNC_15 (void*) ;
 struct mlx4_ib_dev* FUNC_16 (struct ib_device*) ;

__attribute__((used)) static int FUNC_17(struct ib_device *VAR_12, u8 VAR_13,
          struct ib_port_attr *VAR_14)
{

 struct mlx4_ib_dev *VAR_15 = FUNC_16(VAR_12);
 struct mlx4_ib_iboe *VAR_16 = &VAR_15->iboe;
 struct net_device *VAR_17;
 enum ib_mtu VAR_18;
 struct mlx4_cmd_mailbox *VAR_19;
 int VAR_20 = 0;
 int VAR_21 = FUNC_7(VAR_15->dev);

 VAR_19 = FUNC_4(VAR_15->dev);
 if (FUNC_0(VAR_19))
  return FUNC_1(VAR_19);

 VAR_20 = FUNC_5(VAR_15->dev, 0, VAR_19->dma, VAR_13, 0,
      VAR_9, VAR_10,
      VAR_11);
 if (VAR_20)
  goto out;

 VAR_14->active_width = (((u8 *)VAR_19->buf)[5] == 0x40) ||
       (((u8 *)VAR_19->buf)[5] == 0x20 ) ?
        VAR_8 : VAR_7;
 VAR_14->active_speed = (((u8 *)VAR_19->buf)[5] == 0x20 ) ?
        VAR_5 : VAR_6;
 VAR_14->port_cap_flags = VAR_3;
 VAR_14->ip_gids = 1;
 VAR_14->gid_tbl_len = VAR_15->dev->caps.gid_table_len[VAR_13];
 VAR_14->max_msg_sz = VAR_15->dev->caps.max_msg_sz;
 VAR_14->pkey_tbl_len = 1;
 VAR_14->max_mtu = VAR_1;
 VAR_14->max_vl_num = 2;
 VAR_14->state = VAR_4;
 VAR_14->phys_state = FUNC_15(VAR_14->state);
 VAR_14->active_mtu = VAR_0;
 FUNC_13(&VAR_16->lock);
 VAR_17 = VAR_16->netdevs[VAR_13 - 1];
 if (VAR_17 && VAR_21) {
  FUNC_11();
  VAR_17 = FUNC_8(VAR_17);
  FUNC_12();
 }
 if (!VAR_17)
  goto out_unlock;

 VAR_18 = FUNC_2(VAR_17->mtu);
 VAR_14->active_mtu = VAR_18 ? FUNC_3(VAR_14->max_mtu, VAR_18) : VAR_0;

 VAR_14->state = (FUNC_10(VAR_17) && FUNC_9(VAR_17)) ?
     VAR_2 : VAR_4;
 VAR_14->phys_state = FUNC_15(VAR_14->state);
out_unlock:
 FUNC_14(&VAR_16->lock);
out:
 FUNC_6(VAR_15->dev, VAR_19);
 return VAR_20;
}
