
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ssi_protocol {scalar_t__ main_state; scalar_t__ txqueue_len; scalar_t__ send_state; int lock; int work; int txqueue; } ;
struct sk_buff {int len; scalar_t__ data; int protocol; } ;
struct TYPE_4__ {int tx_bytes; int tx_dropped; int tx_packets; } ;
struct TYPE_3__ {int parent; } ;
struct net_device {scalar_t__ tx_queue_len; TYPE_2__ stats; TYPE_1__ dev; } ;
struct hsi_msg {int link; int complete; } ;
struct hsi_client {int device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 struct ssi_protocol* FUNC_3 (struct hsi_client*) ;
 int FUNC_4 (struct hsi_msg*) ;
 int FUNC_5 (struct hsi_client*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct hsi_msg* FUNC_14 (struct ssi_protocol*,struct sk_buff*,int ) ;
 int FUNC_15 (struct ssi_protocol*,int ) ;
 int VAR_7 ;
 struct hsi_client* FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct sk_buff *VAR_8, struct net_device *VAR_9)
{
 struct hsi_client *VAR_10 = FUNC_16(VAR_9->dev.parent);
 struct ssi_protocol *VAR_11 = FUNC_3(VAR_10);
 struct hsi_msg *VAR_12;

 if ((VAR_8->protocol != FUNC_6(VAR_1)) ||
     (VAR_8->len < VAR_5))
  goto drop;

 if ((VAR_8->len & 3) && FUNC_11(VAR_8, 4 - (VAR_8->len & 3)))
  goto inc_dropped;





 if (FUNC_10(VAR_8, 0))
  goto drop;


 ((u16 *)VAR_8->data)[2] = FUNC_6(((u16 *)VAR_8->data)[2]);

 VAR_12 = FUNC_14(VAR_11, VAR_8, VAR_2);
 if (!VAR_12) {
  FUNC_0(&VAR_10->device, "Dropping tx data: No memory\n");
  goto drop;
 }
 VAR_12->complete = VAR_7;

 FUNC_12(&VAR_11->lock);
 if (FUNC_17(VAR_11->main_state != VAR_0)) {
  FUNC_13(&VAR_11->lock);
  FUNC_0(&VAR_10->device, "Dropping tx data: CMT is OFFLINE\n");
  goto drop2;
 }
 FUNC_7(&VAR_12->link, &VAR_11->txqueue);
 VAR_11->txqueue_len++;
 if (VAR_9->tx_queue_len < VAR_11->txqueue_len) {
  FUNC_1(&VAR_10->device, "TX queue full %d\n", VAR_11->txqueue_len);
  FUNC_8(VAR_9);
 }
 if (VAR_11->send_state == VAR_3) {
  FUNC_15(VAR_11, VAR_6);
  FUNC_13(&VAR_11->lock);
  FUNC_0(&VAR_10->device, "Start TX qlen %d\n", VAR_11->txqueue_len);
  FUNC_5(VAR_10);
 } else if (VAR_11->send_state == VAR_4) {

  FUNC_0(&VAR_10->device, "Start TX on SEND READY qlen %d\n",
       VAR_11->txqueue_len);
  FUNC_13(&VAR_11->lock);
  FUNC_9(&VAR_11->work);
 } else {
  FUNC_13(&VAR_11->lock);
 }
 VAR_9->stats.tx_packets++;
 VAR_9->stats.tx_bytes += VAR_8->len;

 return 0;
drop2:
 FUNC_4(VAR_12);
drop:
 FUNC_2(VAR_8);
inc_dropped:
 VAR_9->stats.tx_dropped++;

 return 0;
}
