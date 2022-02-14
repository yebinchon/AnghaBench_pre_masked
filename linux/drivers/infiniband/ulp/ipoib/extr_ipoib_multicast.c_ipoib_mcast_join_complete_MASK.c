
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int tx_dropped; } ;
struct net_device {TYPE_3__ stats; } ;
struct TYPE_4__ {int raw; } ;
struct TYPE_5__ {TYPE_1__ mgid; } ;
struct ipoib_mcast {int backoff; int logcount; int done; int flags; struct ib_sa_multicast* mc; int pkt_queue; TYPE_2__ mcmember; int delay_until; struct net_device* dev; } ;
struct ipoib_dev_priv {int lock; int carrier_on_task; int wq; struct ipoib_mcast* broadcast; } ;
struct ib_sa_multicast {int rec; struct ipoib_mcast* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ipoib_dev_priv*,struct ipoib_mcast*,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ipoib_dev_priv*,char*,char*,int ,int) ;
 int FUNC_5 (struct ipoib_mcast*,int *) ;
 struct ipoib_dev_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct ipoib_dev_priv*,char*,char*,int ,int) ;
 int VAR_6 ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(int VAR_7,
         struct ib_sa_multicast *VAR_8)
{
 struct ipoib_mcast *VAR_9 = VAR_8->context;
 struct net_device *VAR_10 = VAR_9->dev;
 struct ipoib_dev_priv *VAR_11 = FUNC_6(VAR_10);

 FUNC_4(VAR_11, "%sjoin completion for %pI6 (status %d)\n",
   FUNC_15(VAR_5, &VAR_9->flags) ?
   "sendonly " : "",
   VAR_9->mcmember.mgid.raw, VAR_7);


 if (VAR_7 == -VAR_2) {
  VAR_7 = 0;
  goto out;
 }

 if (!VAR_7)
  VAR_7 = FUNC_5(VAR_9, &VAR_8->rec);

 if (!VAR_7) {
  VAR_9->backoff = 1;
  VAR_9->delay_until = VAR_6;
  if (VAR_9 == VAR_11->broadcast) {
   FUNC_13(&VAR_11->lock);
   FUNC_10(VAR_11->wq, &VAR_11->carrier_on_task);
   FUNC_0(VAR_11, ((void*)0), 0);
   goto out_locked;
  }
 } else {
  bool VAR_12 =
      FUNC_15(VAR_5, &VAR_9->flags) &&
      VAR_7 == -VAR_1;

  if (VAR_9->logcount < 20) {
   if (VAR_7 == -VAR_3 || VAR_7 == -VAR_0 ||
       VAR_12) {
    FUNC_4(VAR_11, "%smulticast join failed for %pI6, status %d\n",
      FUNC_15(VAR_5, &VAR_9->flags) ? "sendonly " : "",
      VAR_9->mcmember.mgid.raw, VAR_7);
   } else {
    FUNC_7(VAR_11, "%smulticast join failed for %pI6, status %d\n",
      FUNC_15(VAR_5, &VAR_9->flags) ? "sendonly " : "",
        VAR_9->mcmember.mgid.raw, VAR_7);
   }

   if (!VAR_12)
    VAR_9->logcount++;
  }

  if (FUNC_15(VAR_5, &VAR_9->flags) &&
      VAR_9->backoff >= 2) {
   VAR_9->backoff = 1;
   FUNC_8(VAR_10);
   while (!FUNC_12(&VAR_9->pkt_queue)) {
    ++VAR_10->stats.tx_dropped;
    FUNC_3(FUNC_11(&VAR_9->pkt_queue));
   }
   FUNC_9(VAR_10);
  } else {
   FUNC_13(&VAR_11->lock);

   FUNC_0(VAR_11, VAR_9, 1);
   goto out_locked;
  }
 }
out:
 FUNC_13(&VAR_11->lock);
out_locked:




 if (VAR_7)
  VAR_9->mc = ((void*)0);
 else
  VAR_9->mc = VAR_8;
 FUNC_1(VAR_4, &VAR_9->flags);
 FUNC_14(&VAR_11->lock);
 FUNC_2(&VAR_9->done);

 return VAR_7;
}
