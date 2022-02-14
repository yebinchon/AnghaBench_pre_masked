
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int mtu; int dev_addr; } ;
struct TYPE_3__ {int send_flags; } ;
struct TYPE_4__ {TYPE_1__ wr; } ;
struct ipoib_dev_priv {int mcast_mtu; int flags; TYPE_2__ tx_wr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 struct ipoib_dev_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct ipoib_dev_priv*,char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (char const*,char*) ;
 scalar_t__ FUNC_13 (int ,int *) ;

int FUNC_14(struct net_device *VAR_4, const char *VAR_5)
{
 struct ipoib_dev_priv *VAR_6 = FUNC_5(VAR_4);

 if ((FUNC_13(VAR_3, &VAR_6->flags) &&
      !FUNC_12(VAR_5, "connected\n")) ||
      (!FUNC_13(VAR_3, &VAR_6->flags) &&
      !FUNC_12(VAR_5, "datagram\n"))) {
  return 0;
 }


 if (FUNC_0(VAR_4->dev_addr) && !FUNC_12(VAR_5, "connected\n")) {
  FUNC_11(VAR_3, &VAR_6->flags);
  FUNC_6(VAR_6, "enabling connected mode "
      "will cause multicast packet drops\n");
  FUNC_8(VAR_4);
  FUNC_2(VAR_4, FUNC_3(VAR_4));
  FUNC_10();
  VAR_6->tx_wr.wr.send_flags &= ~VAR_2;

  FUNC_4(VAR_4);
  return (!FUNC_9()) ? -VAR_0 : 0;
 }

 if (!FUNC_12(VAR_5, "datagram\n")) {
  FUNC_1(VAR_3, &VAR_6->flags);
  FUNC_8(VAR_4);
  FUNC_2(VAR_4, FUNC_7(VAR_6->mcast_mtu, VAR_4->mtu));
  FUNC_10();
  FUNC_4(VAR_4);
  return (!FUNC_9()) ? -VAR_0 : 0;
 }

 return -VAR_1;
}
