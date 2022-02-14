
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct mbuf {int dummy; } ;
struct TYPE_8__ {scalar_t__ ifq_len; } ;
struct TYPE_6__ {int raw; } ;
struct TYPE_7__ {TYPE_2__ mgid; } ;
struct ipoib_mcast {scalar_t__ ah; int flags; TYPE_4__ pkt_queue; int list; TYPE_3__ mcmember; } ;
struct ipoib_dev_priv {int multicast_list; TYPE_1__* broadcast; int flags; struct ifnet* dev; } ;
struct ifnet {int dummy; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_4__*,struct mbuf*) ;
 int FUNC_1 (struct ipoib_dev_priv*,struct ipoib_mcast*) ;
 struct ipoib_mcast* FUNC_2 (struct ipoib_dev_priv*,void*) ;
 int FUNC_3 (struct ifnet*,int ,int) ;
 int FUNC_4 (struct ipoib_dev_priv*,char*,...) ;
 struct ipoib_mcast* FUNC_5 (struct ipoib_dev_priv*,int ) ;
 int FUNC_6 (struct ipoib_mcast*) ;
 int FUNC_7 (struct ipoib_dev_priv*,struct mbuf*,scalar_t__,int ) ;
 int FUNC_8 (struct ipoib_dev_priv*,char*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct mbuf*) ;
 int FUNC_11 (int ,void*,int) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;

void
FUNC_14(struct ipoib_dev_priv *VAR_7, void *VAR_8, struct mbuf *VAR_9)
{
 struct ifnet *VAR_10 = VAR_7->dev;
 struct ipoib_mcast *VAR_11;

 if (!FUNC_13(VAR_2, &VAR_7->flags) ||
     !VAR_7->broadcast ||
     !FUNC_13(VAR_4, &VAR_7->broadcast->flags)) {
  FUNC_3(VAR_10, VAR_1, 1);
  FUNC_10(VAR_9);
  return;
 }

 VAR_11 = FUNC_2(VAR_7, VAR_8);
 if (!VAR_11) {

  FUNC_4(VAR_7, "setting up send only multicast group for %16D\n",
    VAR_8, ":");

  VAR_11 = FUNC_5(VAR_7, 0);
  if (!VAR_11) {
   FUNC_8(VAR_7, "unable to allocate memory for "
       "multicast structure\n");
   FUNC_3(VAR_10, VAR_1, 1);
   FUNC_10(VAR_9);
   goto out;
  }

  FUNC_12(VAR_6, &VAR_11->flags);
  FUNC_11(VAR_11->mcmember.mgid.raw, VAR_8, sizeof (union ib_gid));
  FUNC_1(VAR_7, VAR_11);
  FUNC_9(&VAR_11->list, &VAR_7->multicast_list);
 }

 if (!VAR_11->ah) {
  if (VAR_11->pkt_queue.ifq_len < VAR_3) {
   FUNC_0(&VAR_11->pkt_queue, VAR_9);
  } else {
   FUNC_3(VAR_10, VAR_1, 1);
   FUNC_10(VAR_9);
  }

  if (FUNC_13(VAR_5, &VAR_11->flags))
   FUNC_4(VAR_7, "no address vector, "
     "but multicast join already started\n");
  else if (FUNC_13(VAR_6, &VAR_11->flags))
   FUNC_6(VAR_11);





  VAR_11 = ((void*)0);
 }

out:
 if (VAR_11 && VAR_11->ah)
  FUNC_7(VAR_7, VAR_9, VAR_11->ah, VAR_0);
}
