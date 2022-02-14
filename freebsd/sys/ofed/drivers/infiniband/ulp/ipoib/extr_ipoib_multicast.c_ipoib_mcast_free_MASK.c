
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int ifq_len; } ;
struct TYPE_5__ {int raw; } ;
struct TYPE_6__ {TYPE_1__ mgid; } ;
struct ipoib_mcast {TYPE_4__ pkt_queue; scalar_t__ ah; TYPE_2__ mcmember; TYPE_3__* priv; } ;
struct ifnet {int dummy; } ;
struct TYPE_7__ {struct ifnet* dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct ifnet*,int ,int) ;
 int FUNC_2 (TYPE_3__*,char*,int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct ipoib_mcast*) ;

__attribute__((used)) static void FUNC_5(struct ipoib_mcast *VAR_1)
{
 struct ifnet *VAR_2 = VAR_1->priv->dev;
 int VAR_3 = 0;

 FUNC_2(VAR_1->priv, "deleting multicast group %16D\n",
   VAR_1->mcmember.mgid.raw, ":");

 if (VAR_1->ah)
  FUNC_3(VAR_1->ah);

 VAR_3 = VAR_1->pkt_queue.ifq_len;
 FUNC_0(&VAR_1->pkt_queue);

 FUNC_1(VAR_2, VAR_0, VAR_3);

 FUNC_4(VAR_1);
}
