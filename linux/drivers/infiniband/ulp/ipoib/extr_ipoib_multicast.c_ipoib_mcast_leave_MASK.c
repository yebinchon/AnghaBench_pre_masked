
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rdma_netdev {int (* detach_mcast ) (struct net_device*,int ,TYPE_2__*,int ) ;} ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int raw; } ;
struct TYPE_3__ {int mlid; TYPE_2__ mgid; } ;
struct ipoib_mcast {int flags; TYPE_1__ mcmember; int mc; } ;
struct ipoib_dev_priv {int ca; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*) ;
 int FUNC_4 (struct ipoib_dev_priv*,char*,int ) ;
 struct ipoib_dev_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct ipoib_dev_priv*,char*,...) ;
 struct rdma_netdev* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,int ,TYPE_2__*,int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_3, struct ipoib_mcast *VAR_4)
{
 struct ipoib_dev_priv *VAR_5 = FUNC_5(VAR_3);
 struct rdma_netdev *VAR_6 = FUNC_7(VAR_3);
 int VAR_7 = 0;

 if (FUNC_9(VAR_1, &VAR_4->flags))
  FUNC_6(VAR_5, "ipoib_mcast_leave on an in-flight join\n");

 if (!FUNC_0(VAR_4->mc))
  FUNC_2(VAR_4->mc);

 if (FUNC_9(VAR_0, &VAR_4->flags)) {
  FUNC_4(VAR_5, "leaving MGID %pI6\n",
    VAR_4->mcmember.mgid.raw);


  VAR_7 = VAR_6->detach_mcast(VAR_3, VAR_5->ca, &VAR_4->mcmember.mgid,
           FUNC_1(VAR_4->mcmember.mlid));
  if (VAR_7)
   FUNC_6(VAR_5, "ib_detach_mcast failed (result = %d)\n", VAR_7);
 } else if (!FUNC_10(VAR_2, &VAR_4->flags))
  FUNC_3(VAR_5, "leaving with no mcmember but not a "
     "SENDONLY join\n");

 return 0;
}
