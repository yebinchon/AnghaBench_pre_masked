
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int dummy; } ;
struct ipoib_cm_rx_buf {scalar_t__ skb; int mapping; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ipoib_dev_priv*,scalar_t__,int ) ;
 struct ipoib_dev_priv* FUNC_2 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_3 (struct ipoib_cm_rx_buf*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2,
      struct ipoib_cm_rx_buf *VAR_3)
{
 struct ipoib_dev_priv *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5)
  if (VAR_3[VAR_5].skb) {
   FUNC_1(VAR_4, VAR_0 - 1,
           VAR_3[VAR_5].mapping);
   FUNC_0(VAR_3[VAR_5].skb);
  }

 FUNC_3(VAR_3);
}
