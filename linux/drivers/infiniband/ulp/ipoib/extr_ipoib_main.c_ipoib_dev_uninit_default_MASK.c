
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int * tx_ring; int * rx_ring; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct ipoib_dev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0)
{
 struct ipoib_dev_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_0);

 FUNC_1(VAR_0);

 FUNC_0(VAR_0);

 FUNC_4(VAR_1->rx_ring);
 FUNC_5(VAR_1->tx_ring);

 VAR_1->rx_ring = ((void*)0);
 VAR_1->tx_ring = ((void*)0);
}
