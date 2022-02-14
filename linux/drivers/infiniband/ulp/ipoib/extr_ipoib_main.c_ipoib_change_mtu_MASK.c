
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct ipoib_dev_priv {int mcast_mtu; int admin_mtu; TYPE_1__* rn_ops; int max_ib_mtu; } ;
struct TYPE_2__ {int (* ndo_change_mtu ) (struct net_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*,int) ;
 struct ipoib_dev_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ipoib_dev_priv*,char*,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_3, int VAR_4)
{
 struct ipoib_dev_priv *VAR_5 = FUNC_4(VAR_3);
 int VAR_6 = 0;


 if (FUNC_1(VAR_3)) {
  if (VAR_4 > FUNC_2(VAR_3))
   return -VAR_0;

  if (VAR_4 > VAR_5->mcast_mtu)
   FUNC_5(VAR_5, "mtu > %d will cause multicast packet drops.\n",
       VAR_5->mcast_mtu);

  VAR_3->mtu = VAR_4;
  return 0;
 }

 if (VAR_4 < (VAR_1 + VAR_2) ||
     VAR_4 > FUNC_0(VAR_5->max_ib_mtu))
  return -VAR_0;

 VAR_5->admin_mtu = VAR_4;

 if (VAR_5->mcast_mtu < VAR_5->admin_mtu)
  FUNC_3(VAR_5, "MTU must be smaller than the underlying "
    "link layer MTU - 4 (%u)\n", VAR_5->mcast_mtu);

 VAR_4 = FUNC_6(VAR_5->mcast_mtu, VAR_5->admin_mtu);

 if (VAR_5->rn_ops->ndo_change_mtu) {
  bool VAR_7 = FUNC_8(VAR_3);

  FUNC_7(VAR_3);


  VAR_6 = VAR_5->rn_ops->ndo_change_mtu(VAR_3, VAR_4);

  if (VAR_7)
   FUNC_9(VAR_3);
 } else {
  VAR_3->mtu = VAR_4;
 }

 return VAR_6;
}
