
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef void* u16 ;
struct net_device {int addr_len; int name; void* base_addr; int dev_addr; } ;
struct dvb_net_priv {int need_pusi; int mutex; int restart_net_feed_wq; int set_multicast_list_wq; scalar_t__ feedtype; scalar_t__ tscc; int rx_mode; void* pid; int demux; struct net_device* net; } ;
struct dvb_net {struct net_device** device; int demux; TYPE_2__* dvbdev; } ;
struct TYPE_4__ {int id; TYPE_1__* adapter; } ;
struct TYPE_3__ {int num; int proposed_mac; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct net_device* FUNC_1 (int,char*,int ,int ) ;
 int VAR_7 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct dvb_net*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *) ;
 struct dvb_net_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct dvb_net_priv*) ;
 int FUNC_10 (int ,int ,char*,int,int,...) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_11(struct dvb_net *VAR_10, u16 VAR_11, u8 VAR_12)
{
 struct net_device *VAR_13;
 struct dvb_net_priv *VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_12 != VAR_0 && VAR_12 != VAR_1)
  return -VAR_2;
 if ((VAR_16 = FUNC_3(VAR_10)) < 0)
  return -VAR_2;

 VAR_13 = FUNC_1(sizeof(struct dvb_net_priv), "dvb",
      VAR_5, VAR_7);
 if (!VAR_13)
  return -VAR_3;

 if (VAR_10->dvbdev->id)
  FUNC_10(VAR_13->name, VAR_4, "dvb%d%u%d",
    VAR_10->dvbdev->adapter->num, VAR_10->dvbdev->id, VAR_16);
 else

  FUNC_10(VAR_13->name, VAR_4, "dvb%d_%d",
    VAR_10->dvbdev->adapter->num, VAR_16);

 VAR_13->addr_len = 6;
 FUNC_4(VAR_13->dev_addr, VAR_10->dvbdev->adapter->proposed_mac, 6);

 VAR_10->device[VAR_16] = VAR_13;

 VAR_14 = FUNC_6(VAR_13);
 VAR_14->net = VAR_13;
 VAR_14->demux = VAR_10->demux;
 VAR_14->pid = VAR_11;
 VAR_14->rx_mode = VAR_6;
 VAR_14->need_pusi = 1;
 VAR_14->tscc = 0;
 VAR_14->feedtype = VAR_12;
 FUNC_9(VAR_14);

 FUNC_0(&VAR_14->set_multicast_list_wq, VAR_9);
 FUNC_0(&VAR_14->restart_net_feed_wq, VAR_8);
 FUNC_5(&VAR_14->mutex);

 VAR_13->base_addr = VAR_11;

 if ((VAR_15 = FUNC_8(VAR_13)) < 0) {
  VAR_10->device[VAR_16] = ((void*)0);
  FUNC_2(VAR_13);
  return VAR_15;
 }
 FUNC_7("created network interface %s\n", VAR_13->name);

 return VAR_16;
}
