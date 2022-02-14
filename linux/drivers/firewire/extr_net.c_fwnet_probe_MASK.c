
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fifo_lo; int fifo_hi; int sspd; int max_rec; int uniq_id; } ;
union fwnet_hwaddr {TYPE_2__ uc; } ;
struct net_device {unsigned int mtu; unsigned int max_mtu; int dev; int addr_len; int broadcast; scalar_t__ dev_addr; int min_mtu; } ;
struct ieee1394_device_id {int dummy; } ;
struct TYPE_3__ {int offset; } ;
struct fwnet_device {int local_fifo; int dev_link; struct fw_card* card; TYPE_1__ handler; struct net_device* netdev; int peer_list; scalar_t__ queued_datagrams; scalar_t__ broadcast_xmt_datagramlabel; scalar_t__ broadcast_xmt_max_payload; int * broadcast_rcv_context; int broadcast_state; int lock; } ;
struct fw_unit {int dummy; } ;
struct fw_device {struct fw_card* card; } ;
struct fw_card {int device; int link_speed; int max_receive; int guid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (struct net_device*,int ) ;
 struct net_device* FUNC_2 (int,char*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (struct net_device*) ;
 struct fw_device* FUNC_6 (struct fw_unit*) ;
 int FUNC_7 (struct fwnet_device*,struct fw_unit*,struct fw_device*) ;
 struct fwnet_device* FUNC_8 (struct fw_card*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (struct fwnet_device*) ;
 int FUNC_10 (struct fwnet_device*) ;
 int VAR_7 ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 struct fwnet_device* FUNC_16 (struct net_device*) ;
 int FUNC_17 (int,int *) ;
 int FUNC_18 (int,int *) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (struct net_device*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct net_device*) ;

__attribute__((used)) static int FUNC_23(struct fw_unit *VAR_8,
         const struct ieee1394_device_id *VAR_9)
{
 struct fw_device *VAR_10 = FUNC_6(VAR_8);
 struct fw_card *VAR_11 = VAR_10->card;
 struct net_device *VAR_12;
 bool VAR_13 = 0;
 struct fwnet_device *VAR_14;
 int VAR_15;
 union fwnet_hwaddr *VAR_16;

 FUNC_14(&VAR_6);

 VAR_14 = FUNC_8(VAR_11);
 if (VAR_14) {
  VAR_12 = VAR_14->netdev;
  goto have_dev;
 }

 VAR_12 = FUNC_2(sizeof(*VAR_14), "firewire%d", VAR_4,
      VAR_7);
 if (VAR_12 == ((void*)0)) {
  FUNC_15(&VAR_6);
  return -VAR_0;
 }

 VAR_13 = 1;
 FUNC_1(VAR_12, VAR_11->device);
 VAR_14 = FUNC_16(VAR_12);

 FUNC_21(&VAR_14->lock);
 VAR_14->broadcast_state = VAR_2;
 VAR_14->broadcast_rcv_context = ((void*)0);
 VAR_14->broadcast_xmt_max_payload = 0;
 VAR_14->broadcast_xmt_datagramlabel = 0;
 VAR_14->local_fifo = VAR_3;
 VAR_14->queued_datagrams = 0;
 FUNC_0(&VAR_14->peer_list);
 VAR_14->card = VAR_11;
 VAR_14->netdev = VAR_12;

 VAR_15 = FUNC_9(VAR_14);
 if (VAR_15 < 0)
  goto out;
 VAR_14->local_fifo = VAR_14->handler.offset;






 VAR_12->mtu = 1500U;
 VAR_12->min_mtu = VAR_1;
 VAR_12->max_mtu = 4096U;


 VAR_16 = (union fwnet_hwaddr *)VAR_12->dev_addr;
 FUNC_19(VAR_11->guid, &VAR_16->uc.uniq_id);
 VAR_16->uc.max_rec = VAR_14->card->max_receive;
 VAR_16->uc.sspd = VAR_14->card->link_speed;
 FUNC_17(VAR_14->local_fifo >> 32, &VAR_16->uc.fifo_hi);
 FUNC_18(VAR_14->local_fifo & 0xffffffff, &VAR_16->uc.fifo_lo);

 FUNC_13(VAR_12->broadcast, -1, VAR_12->addr_len);

 VAR_15 = FUNC_20(VAR_12);
 if (VAR_15)
  goto out;

 FUNC_11(&VAR_14->dev_link, &VAR_5);
 FUNC_4(&VAR_12->dev, "IP over IEEE 1394 on card %s\n",
     FUNC_3(VAR_11->device));
 have_dev:
 VAR_15 = FUNC_7(VAR_14, VAR_8, VAR_10);
 if (VAR_15 && VAR_13) {
  FUNC_22(VAR_12);
  FUNC_12(&VAR_14->dev_link);
 out:
  FUNC_10(VAR_14);
  FUNC_5(VAR_12);
 }

 FUNC_15(&VAR_6);

 return VAR_15;
}
