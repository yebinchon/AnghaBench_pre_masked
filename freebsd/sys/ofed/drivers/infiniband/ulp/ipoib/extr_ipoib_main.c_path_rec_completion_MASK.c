
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct ifnet* rcvif; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct ifqueue {int dummy; } ;
struct TYPE_3__ {struct ipoib_ah* raw; } ;
struct ib_sa_path_rec {char* sl; int dlid; TYPE_1__ dgid; } ;
struct ipoib_path {int valid; int done; int * query; int hwaddr; struct ifqueue queue; struct ipoib_ah* ah; struct ib_sa_path_rec pathrec; struct ipoib_dev_priv* priv; } ;
struct ipoib_dev_priv {int lock; int pd; int port; int ca; struct ifnet* dev; } ;
struct ipoib_ah {int dummy; } ;
struct ifnet {scalar_t__ (* if_transmit ) (struct ifnet*,struct mbuf*) ;} ;
struct ib_ah_attr {int dummy; } ;
struct epoch_tracker {int dummy; } ;
typedef int mbqueue ;


 int FUNC_0 (struct epoch_tracker) ;
 int FUNC_1 (struct epoch_tracker) ;
 int FUNC_2 (struct ifqueue*,struct mbuf*) ;
 int FUNC_3 (struct ifqueue*,struct mbuf*) ;
 struct ipoib_ah* FUNC_4 (int ) ;
 int FUNC_5 (struct ifqueue*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,struct ib_sa_path_rec*,struct ib_ah_attr*) ;
 int FUNC_8 (struct ipoib_dev_priv*,struct ipoib_path*) ;
 scalar_t__ FUNC_9 (struct ipoib_dev_priv*,int ) ;
 int FUNC_10 (struct ipoib_path*) ;
 int FUNC_11 (struct ipoib_path*,int ) ;
 struct ipoib_ah* FUNC_12 (struct ipoib_dev_priv*,int ,struct ib_ah_attr*) ;
 int FUNC_13 (struct ipoib_dev_priv*,char*,int,struct ipoib_ah*,char*) ;
 int FUNC_14 (struct ipoib_ah*) ;
 int FUNC_15 (struct ipoib_dev_priv*,char*) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 scalar_t__ FUNC_18 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_19(int VAR_0, struct ib_sa_path_rec *VAR_1, void *VAR_2)
{
 struct ipoib_path *VAR_3 = VAR_2;
 struct ipoib_dev_priv *VAR_4 = VAR_3->priv;
 struct ifnet *VAR_5 = VAR_4->dev;
 struct ipoib_ah *VAR_6 = ((void*)0);
 struct ipoib_ah *VAR_7 = ((void*)0);
 struct epoch_tracker VAR_8;
 struct ifqueue VAR_9;
 struct mbuf *VAR_10;
 unsigned long VAR_11;

 if (!VAR_0)
  FUNC_13(VAR_4, "PathRec LID 0x%04x for GID %16D\n",
     FUNC_4(VAR_1->dlid), VAR_1->dgid.raw, ":");
 else
  FUNC_13(VAR_4, "PathRec status %d for GID %16D\n",
     VAR_0, VAR_3->pathrec.dgid.raw, ":");

 FUNC_5(&VAR_9, sizeof(VAR_9));

 if (!VAR_0) {
  struct ib_ah_attr VAR_12;

  if (!FUNC_7(VAR_4->ca, VAR_4->port, VAR_1, &VAR_12))
   VAR_6 = FUNC_12(VAR_4, VAR_4->pd, &VAR_12);
 }

 FUNC_16(&VAR_4->lock, VAR_11);

 if (VAR_6) {
  VAR_3->pathrec = *VAR_1;

  VAR_7 = VAR_3->ah;
  VAR_3->ah = VAR_6;

  FUNC_13(VAR_4, "created address handle %p for LID 0x%04x, SL %d\n",
     VAR_6, FUNC_4(VAR_1->dlid), VAR_1->sl);

  for (;;) {
   FUNC_2(&VAR_3->queue, VAR_10);
   if (VAR_10 == ((void*)0))
    break;
   FUNC_3(&VAR_9, VAR_10);
  }






  VAR_3->valid = 1;
 }

 VAR_3->query = ((void*)0);
 FUNC_6(&VAR_3->done);

 FUNC_17(&VAR_4->lock, VAR_11);

 if (VAR_7)
  FUNC_14(VAR_7);

 FUNC_0(VAR_8);
 for (;;) {
  FUNC_2(&VAR_9, VAR_10);
  if (VAR_10 == ((void*)0))
   break;
  VAR_10->m_pkthdr.rcvif = VAR_5;
  if (VAR_5->if_transmit(VAR_5, VAR_10))
   FUNC_15(VAR_4, "dev_queue_xmit failed "
       "to requeue packet\n");
 }
 FUNC_1(VAR_8);
}
