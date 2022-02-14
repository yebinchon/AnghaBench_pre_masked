
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct net_device_stats {int tx_bytes; int tx_packets; int tx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;
struct fe_tx_ring {int dummy; } ;
struct fe_priv {struct fe_tx_ring tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct fe_tx_ring*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct fe_priv*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct net_device*,int,struct fe_tx_ring*) ;
 struct fe_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct fe_priv*,int ,struct net_device*,char*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct fe_priv*,int ,struct net_device*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_4, struct net_device *VAR_5)
{
 struct fe_priv *VAR_6 = FUNC_4(VAR_5);
 struct fe_tx_ring *VAR_7 = &VAR_6->tx_ring;
 struct net_device_stats *VAR_8 = &VAR_5->stats;
 int VAR_9;
 int VAR_10 = VAR_4->len;

 if (FUNC_2(VAR_4, VAR_6)) {
  FUNC_7(VAR_6, VAR_2, VAR_5, "tx padding failed!\n");
  return VAR_1;
 }

 VAR_9 = FUNC_0(VAR_4);
 if (FUNC_8(FUNC_1(VAR_7) <= VAR_9)) {
  FUNC_6(VAR_5);
  FUNC_5(VAR_6, VAR_3, VAR_5,
     "Tx Ring full when queue awake!\n");
  return VAR_0;
 }

 if (FUNC_3(VAR_4, VAR_5, VAR_9, VAR_7) < 0) {
  VAR_8->tx_dropped++;
 } else {
  VAR_8->tx_packets++;
  VAR_8->tx_bytes += VAR_10;
 }

 return VAR_1;
}
