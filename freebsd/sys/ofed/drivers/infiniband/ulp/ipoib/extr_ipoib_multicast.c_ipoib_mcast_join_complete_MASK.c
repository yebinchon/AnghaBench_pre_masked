
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int raw; } ;
struct TYPE_4__ {TYPE_1__ mgid; } ;
struct ipoib_mcast {int backoff; int flags; TYPE_2__ mcmember; int logcount; struct ipoib_dev_priv* priv; } ;
struct ipoib_dev_priv {int lock; int mcast_task; int flags; int carrier_on_task; struct ipoib_mcast* broadcast; } ;
struct ib_sa_multicast {int rec; struct ipoib_mcast* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ipoib_dev_priv*,char*,int ,char*,int) ;
 int FUNC_1 (struct ipoib_mcast*,int *) ;
 int FUNC_2 (struct ipoib_dev_priv*,char*,int ,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(int VAR_9,
         struct ib_sa_multicast *VAR_10)
{
 struct ipoib_mcast *VAR_11 = VAR_10->context;
 struct ipoib_dev_priv *VAR_12 = VAR_11->priv;

 FUNC_0(VAR_12, "join completion for %16D (status %d)\n",
   VAR_11->mcmember.mgid.raw, ":", VAR_9);


 if (VAR_9 == -VAR_1)
  return 0;

 if (!VAR_9)
  VAR_9 = FUNC_1(VAR_11, &VAR_10->rec);

 if (!VAR_9) {
  VAR_11->backoff = 1;
  FUNC_3(&VAR_8);
  if (FUNC_10(VAR_6, &VAR_12->flags))
   FUNC_5(VAR_7,
        &VAR_12->mcast_task, 0);
  FUNC_4(&VAR_8);





  if (VAR_11 == VAR_12->broadcast)
   FUNC_6(VAR_7, &VAR_12->carrier_on_task);

  return 0;
 }

 if (VAR_11->logcount++ < 20) {
  if (VAR_9 == -VAR_2 || VAR_9 == -VAR_0) {
   FUNC_0(VAR_12, "multicast join failed for %16D, status %d\n",
     VAR_11->mcmember.mgid.raw, ":", VAR_9);
  } else {
   FUNC_2(VAR_12, "multicast join failed for %16D, status %d\n",
       VAR_11->mcmember.mgid.raw, ":", VAR_9);
  }
 }

 VAR_11->backoff *= 2;
 if (VAR_11->backoff > VAR_4)
  VAR_11->backoff = VAR_4;


 VAR_9 = FUNC_9(VAR_5, &VAR_11->flags);

 FUNC_3(&VAR_8);
 FUNC_7(&VAR_12->lock);
 if (FUNC_10(VAR_6, &VAR_12->flags))
  FUNC_5(VAR_7, &VAR_12->mcast_task,
       VAR_11->backoff * VAR_3);
 FUNC_8(&VAR_12->lock);
 FUNC_4(&VAR_8);

 return VAR_9;
}
